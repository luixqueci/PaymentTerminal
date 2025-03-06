#ifndef MOCKBACKEND_H
#define MOCKBACKEND_H

#include "IBackend.h"
#include "../Logger/Logger.h"
#include <string>
#include <fstream>
#include <iostream>

#define backendServer "queueMockBackend.txt"

/**
 * @class MockBackend
 * @brief Implementa��o do Backend que registra mensagens em um arquivo de texto.
 */
class MockBackend : public IBackend
{
public:
    MockBackend(const std::string& logFilename);
    MockBackend();

    /**
     * @brief Implementa o m�todo para registrar uma mensagem.
     * @param message A mensagem a ser registrada.
     * @param isValid Indica se a mensagem � v�lida.
     */
    void queueBackend(const std::string& message, bool isValid) override;

private:
    Logger logger;
};

#endif // MOCKBACKEND_H
