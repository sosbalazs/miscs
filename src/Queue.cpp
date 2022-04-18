#include "Queue.h"
#include <iostream>

namespace queuetest
{
    Queue::~Queue()
    {
        std::cout << "Kill Queue\n";
        while(Top != nullptr)
        {
            std::cout << "Top Data: " << Top->Data << std::endl;
            pull();
        }
    }

    void Queue::push(int data)
    {
        Node* newNode = new Node {data};
        newNode->NextNode = Top;
        Top = newNode;
    }

    int Queue::pull()
    {
        if(Top == nullptr)
        {
            return 0;
        }
        int result = Top->Data;
        Node* toDelete = Top;
        Top = Top->NextNode;
        return result;
    }
}