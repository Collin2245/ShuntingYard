#include "Node.hpp"

class LinkedList
{
    public:
        void addEnd(string payload);
        string * toStringArray();
        LinkedList();
        string get(int index);
        void display();
        int count;


    private:
        Node * head;

     
};