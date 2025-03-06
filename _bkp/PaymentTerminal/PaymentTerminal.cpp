#include "PaymentTerminal.h"
#include <iostream>

PaymentTerminal::PaymentTerminal(const string& logFilename) : messageProcessor(logFilename), logger(logFilename) {}
    
void PaymentTerminal::readPaymentTerminal() 
{
    ifstream inFile(paymentTerminalInput);

    if (inFile.is_open()) 
    {
        string line;

        while (getline(inFile, line)) 
        {
            messageProcessor.receiveMessage(line);
        }

    inFile.close();

    } 
    else 
    {
		logger.log("PaymentTerminal::error opening file!");
    }
}