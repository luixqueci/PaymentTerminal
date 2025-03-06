#include "Backend.h"
#include <fstream>
#include <iostream>

Backend::Backend(const string& logFilename) : logger(logFilename) {}

void Backend::queueBackend(const std::string& message)
{
    std::ofstream outFile(backendServer, std::ios_base::app);
    if (outFile.is_open()) 
    {
        outFile << message << std::endl;
        outFile.close();
    } else 
    {
        logger.log("Backend::error opening file!");
    }
}
