#include "MessageProcessor.h"

MessageProcessor::MessageProcessor(const std::string& logFilename) : logger(logFilename), backend(logFilename) {}

void MessageProcessor::receiveMessage(const std::string& message)
{
    logger.log("message received: " + message);

    if (validateMessage(message)) 
    {
        logger.log("valid message: " + message);
        logger.log("sending for backend...");
        sendToBackend(message);
    }
    else 
    {
        logger.log("invalid message: " + message);
    }
}

bool MessageProcessor::validateMessage(const std::string& message) 
{
    std::regex messageFormat("MSG\\d{3}:.*");
    return std::regex_match(message, messageFormat);
}
    
void MessageProcessor::sendToBackend(const std::string& message)
{   
	backend.queueBackend(message);
}