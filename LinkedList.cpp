#include "LinkedList.hpp"


LinkedList::LinkedList()
{
    this->head = 0;
    this->count = 0;
}

void LinkedList::addEnd(string payload)
{
    Node * n = new Node(payload);
    if(!this->head)
    {
        this->head = n;
    }
    else
    {
        //run to end of the list
        Node* currNode = this->head;
        while(currNode->getNextNode())
        {
            currNode=currNode->getNextNode();
        }
        currNode->setNextNode(n);
    }
    this->count ++;
    
}

string * LinkedList::toStringArray()
{
    string *arrayToReturn;
    arrayToReturn = new string[this->count];
    Node * currNode = this->head;
    for(int i = 0; i < this->count; i++)
    {
        arrayToReturn[i] = currNode->getPayload();
        currNode = currNode->getNextNode();
    }
    return  arrayToReturn;
}

string LinkedList::get(int index)
{
    Node* currNode = this->head;
    for(int i = 0; i <index; i ++)
    {
        currNode=currNode->getNextNode();
    }
    return currNode->getPayload();
}

void LinkedList::display()
{
    for(int i = 0; i < this->count; i ++)
    {
        cout << this->get(i)<<"\n";
    }
}
