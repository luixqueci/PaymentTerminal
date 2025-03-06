#ifndef PAYMENTTERMINAL_H
#define PAYMENTTERMINAL_H

#include "../MessageProcessor/MessageProcessor.h"
#include "../Logger/Logger.h"
#include <string>

#define paymentTerminalInput "paymentTerminal.txt"

/**
 * @class PaymentTerminal
 * @brief responsável por simular um terminal de pagamento
 */
class PaymentTerminal 
{
public:
    /**
     * @brief Construtor PaymentTerminal.
     * @param logFilename.
     */
    PaymentTerminal(const std::string& logFilename);

	/**
    * @brief Lê o arquivo que simula a saída do terminal de pagamento.
    */
    void readPaymentTerminal();

private:
    MessageProcessor messageProcessor;
    Logger logger;
};

#endif // PAYMENTTERMINAL_H