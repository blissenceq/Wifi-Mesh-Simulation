#pragma once
#include <string>

class Node
{
public:
    Node(const std::string &id);

    ~Node();

    std::string id() const;

    void start();
    
    void stop();

private:
    std::string id_;
};