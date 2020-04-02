#ifndef Node_hpp
#define Node_hpp
#include <string.h>
#include <iostream>
using namespace std;

class Node
{
    public:
        Node(string payload);
        string getPayload();
        Node * getNextNode();
        void setNextNode(Node * n);
        

    private:
        string payload;
        Node * nextNode;
        

};

#endif Node_hpp