#include "MessageProcessor.h"

MessageProcessor::MessageProcessor(const std::string& logFilename, IBackend* backendInstance) : logger(logFilename), backend(backendInstance) {}

void MessageProcessor::receiveMessage(std::string message)
{
	bool isValid;
    logger.log("message received: " + message);

    if (validateMessage(message)) 
    {
        logger.log("valid message: " + message);
        logger.log("sending for backend...");
		isValid = true;
        backend->queueBackend(message, isValid);
    }
    else 
    {
        logger.log("invalid message: " + message);
		isValid = false;
        backend->queueBackend(message, isValid);
    }
}

bool MessageProcessor::validateMessage(std::string& message) 
{
    std::regex messageFormat("MSG\\d{3}:.*");
    return std::regex_match(message, messageFormat);
}
    
void MessageProcessor::sendToBackend(const std::string& message)
{   
	backend.queueBackend(message);
}