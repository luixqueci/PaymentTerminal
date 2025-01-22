
#include "HAL.h"
#include <iostream>
   

HAL::HAL()
    : paymentTerminal("logger.txt") {
}

void HAL::testReadPaymentTerminal()
{
    paymentTerminal.readPaymentTerminal();
}
 
/**
 * TODO   Implementa��o da fun��o de convers�o do HAL
 * @brief respons�vel por receber as mensagens do terminal de pagamento, compreender as diferen�as entre os tipos de conex�es (usb, serial,etc),
 *        entender as similiaridades entre os fabricantes dos card readers, converter para uma �nica linguagem padr�o na qual ser� repassada 
 *        para aplica��o principal onde ela saber� se portar com as demais funcionalidades para seguir com o processamento da transa��o.
 * 
 * @param mensagem recebida do terminal de pagamento.
 * @output mensagem convertida para a linguagem padr�o.
 */

int main() 
{
    HAL hal;
    hal.testReadPaymentTerminal();
    return 0;
}