#pragma once
#include <string>
#include <vector>

class Routing
{
public:
    Routing() = default;

    std::vector<std::string> computePath(const std::string &src, const std::string &destn);
};