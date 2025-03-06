#include "Logger.h"

Logger::Logger(const string& filename) {
    logFile.open(filename, ios::app);
}

Logger::~Logger() {
    if (logFile.is_open()) {
        logFile.close();
    }
}

void Logger::log(const string& message) {
    if (logFile.is_open()) {
        logFile << message << endl;
    }
}
