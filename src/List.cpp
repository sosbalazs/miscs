#include "List.h"

namespace listtest
{
    List::List(List* previousNode, int data) : PreviousNode(previousNode), Data(data)
    {
    };

    static List* createList(int data)
    {
        List* ret = new List(nullptr, data);
        return ret;
    }

    void List::addElement(int data)
    {
        List* nextElement = new List(this, data);
    }
}