#include "logger.hpp"
#include <iostream>

void logInfo(const std::string &msg)
{
    std::cout << "[INFO] " << msg << "\n";
}