#ifndef IBACKEND_H
#define IBACKEND_H

#include <string>

/**
 * @interface IBackend
 * @brief Interface para diferentes implementa��es de Backend.
 */
class IBackend
{
public:
    virtual ~IBackend() = default;

    /**
     * @brief Registra uma mensagem no backend.
     * @param message A mensagem a ser registrada.
     * @param isValid Indica se a mensagem � v�lida.
     */
    virtual void queueBackend(const std::string& message, bool isValid) = 0;
};

#endif // IBACKEND_H
