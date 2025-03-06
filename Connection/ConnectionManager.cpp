#include "ConnectionManager.h"

#include "USB/USBConnection.h"
#include "Serial/SerialConnection.h"


ConnectionManager::ConnectionManager(HAL& halInstance)
    : usbConnection(std::make_unique<USBConnection>(halInstance)),
    serialConnection(std::make_unique<SerialConnection>(halInstance))
{
}

void ConnectionManager::routeMessage(const std::string& message) 
{
    if (message.rfind(USB_PREFIX, 0) == 0) 
    {
        usbConnection->receive(message);
    }
    else if (message.rfind(SERIAL_PREFIX, 0) == 0) 
    {
        serialConnection->receive(message);
    }
    else {
       //Mensagem inválida ou desconhecida.
    }
}

