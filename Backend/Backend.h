#ifndef BACKEND_H
#define BACKEND_H

#include <string>
#include "../Logger/Logger.h"

#define backendServer "queueBackend.txt"

class Backend 
{
public:
    Backend(const std::string& logFilename);
    /**
	* @brief simula o recebimento de mensagens pelo backend
    */
    void queueBackend(const std::string& message);

private:
    Logger logger;
};

#endif // BACKEND_H
