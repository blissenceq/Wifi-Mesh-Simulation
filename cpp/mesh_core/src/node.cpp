#include "node.hpp"
#include <iostream>

Node::Node(const std::string &id) : id_(id) {}

Node::~Node() {}

std::string Node::id() const
{
    return id_;
}

void Node::start()
{
    std::cout << "Node " << id_ << " starting\n";
}

void Node::stop()
{
    std::cout << "Node " << id_ << " stopping\n";
}
