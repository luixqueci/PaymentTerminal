
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
 * TODO   Implementação da função de conversão do HAL
 * @brief responsável por receber as mensagens do terminal de pagamento, compreender as diferenças entre os tipos de conexões (usb, serial,etc),
 *        entender as similiaridades entre os fabricantes dos card readers, converter para uma única linguagem padrão na qual será repassada 
 *        para aplicação principal onde ela saberá se portar com as demais funcionalidades para seguir com o processamento da transação.
 * 
 * @param mensagem recebida do terminal de pagamento.
 * @output mensagem convertida para a linguagem padrão.
 */

int main() 
{
    HAL hal;
    hal.testReadPaymentTerminal();
    return 0;
}