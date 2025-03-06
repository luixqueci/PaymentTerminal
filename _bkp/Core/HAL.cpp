
#include "HAL.h"
#include <iostream>
   

HAL::HAL()
    : paymentTerminal("logger.txt") {
}

void HAL::testReadPaymentTerminal()
{
    paymentTerminal.readPaymentTerminal();
}

int main() 
{
    HAL hal;
    hal.testReadPaymentTerminal();
    return 0;
}