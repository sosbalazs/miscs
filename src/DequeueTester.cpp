#include "DequeueTester.h"
#include "Dequeue.h"
#include <deque>
#include <iostream>

namespace dequeuetest
{
    void DequeueTester::test()
    {
        /*
        std::deque<int> myDequeue;
        for(int i = 0; i < 10; ++i)
        {
            myDequeue.push_back(i);
        }

        for(auto element:myDequeue)
        {
            std::cout << element << ", ";
        }
        std::cout << "\n";
        */

        Dequeue<int> myDequeue;
        for(int i = 0; i < 10; ++i)
        {
            myDequeue.push_back(i);
        }

        /*for(auto element:myDequeue)
        {
            std::cout << element << ", ";
        }
        std::cout << "\n";*/

    }

    
}