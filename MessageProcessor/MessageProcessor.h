#ifndef MESSAGEPROCESSOR_H
#define MESSAGEPROCESSOR_H

#include "../Logger/Logger.h"
#include "../Backend/Backend.h"
#include <string>
#include <regex>

class MessageProcessor 
{
public:
	/**
	 * @brief Construtor MessageProcessor.
	 * @param logFilename.
	 */
    MessageProcessor(const std::string& logFilename);

	/**
	* @brief Recebe a mensagem do HAL.
	* @param message.
	*/
    void receiveMessage(const std::string& message);
	
	/**
	* @brief Valida a mensagem recebida.
	* @param message.
	*/ 
    bool validateMessage(const std::string& message);

	/**
	* @brief Envia a mensagem para o backend.
	* @param message.
	*/
    void sendToBackend(const std::string& message);

private:
    Logger logger;
	Backend backend;
};

#endif // MESSAGEPROCESSOR_H

