#pragma once
#include <string>

struct Link
{
    std::string src, dstn;
    int latency_ms;
    double loss;
};