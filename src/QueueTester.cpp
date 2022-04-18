#include "Queue.h"
#include "QueueTester.h"


namespace queuetest
{
    void QueueTester::test()
    {
        Queue myQueue;
        for(int i = 0; i < 10; ++i)
        {
            myQueue.push(i);
        }
    }

}