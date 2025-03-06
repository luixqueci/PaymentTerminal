#include "MockBackend.h"

MockBackend::MockBackend(const std::string& logFilename) : logger(logFilename) {}

MockBackend::MockBackend() {}

void MockBackend::queueBackend(const std::string& message, bool isValid)
{
    std::ofstream outFile(backendServer, std::ios_base::app);

    if (outFile.is_open())
    {
        if (isValid)
        {
            outFile << message << std::endl;
        }
        else
        {
            outFile << "Erro: Mensagem inválida recebida - " << message << std::endl;
        }
        outFile.close();
    }
    else
    {
        logger.log("MockBackend::error opening file!");
    }
}