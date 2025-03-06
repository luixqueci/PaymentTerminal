#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <fstream>
#include <iostream>

using namespace std;

/**
 * @class Logger
 * @brief responsável por logar mensagens em um arquivo
 */
class Logger 
{
public:
	/**
	 * @brief Construtor Logger.
	 * @param filename.
	 */
    Logger(const string& filename);
	/**
	 * @brief Destrutor Logger.
	 */
    ~Logger();

    void log(const string& message);

private:
    ofstream logFile;
};

#endif // LOGGER_H