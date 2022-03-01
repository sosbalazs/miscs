#include "ListTester.h"
#include "List.h"

namespace listtest
{
    void ListTester::test()
    {
        int StartValue = 3;
        List* list = createList(StartValue);

        for(int i = 0; i < 20; ++i)
        {
            list->addElement(StartValue+i);
        }
    }
}