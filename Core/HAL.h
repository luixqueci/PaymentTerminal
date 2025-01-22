#ifndef HAL_H
#define HAL_H

#include "../PaymentTerminal/PaymentTerminal.h"

/**
 * @class HAL
 * @brief respons�vel por receber as mensagens do terminal de pagamento e converter para uma linguagem comum para a aplica��o
 */
class HAL 
{
public:
	HAL();
	/**
	 * @brief Testa a leitura do terminal de pagamento.
	 */
	void testReadPaymentTerminal();

private:
	PaymentTerminal paymentTerminal;
};

#endif // CORE_H