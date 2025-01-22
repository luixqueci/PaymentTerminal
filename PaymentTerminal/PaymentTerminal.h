#ifndef PAYMENTTERMINAL_H
#define PAYMENTTERMINAL_H

#include "../MessageProcessor/MessageProcessor.h"
#include "../Logger/Logger.h"
#include <string>

#define paymentTerminalInput "paymentTerminal.txt"

/**
 * @class PaymentTerminal
 * @brief respons�vel por simular um terminal de pagamento
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
    * @brief L� o arquivo que simula a sa�da do terminal de pagamento.
    */
    void readPaymentTerminal();

private:
    MessageProcessor messageProcessor;
    Logger logger;
};

#endif // PAYMENTTERMINAL_H