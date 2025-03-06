#ifndef CONNECTIONMANAGER_H
#define CONNECTIONMANAGER_H

#include "IConnection.h"
#include <string>
#include <iostream>
#include "../HAL/HAL.h"

// Define os prefixos de cada tipo de mensagem
#define USB_PREFIX "USB>>>>"
#define SERIAL_PREFIX "SERIAL::::"

class ConnectionManager {
public:
    ConnectionManager(HAL& halInstance);
    void routeMessage(const std::string& message);

private:
    std::unique_ptr<IConnection> usbConnection;
    std::unique_ptr<IConnection> serialConnection;

};

#endif // CONNECTIONMANAGER_H