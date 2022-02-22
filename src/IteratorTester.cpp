#include "IteratorTester.h"
#include "IntIterator.h"

#include <vector>
#include <iostream>

namespace iteratortest
{
    void IteratorTester::test()
    {
        std::vector<int> myVector {2, 4, 1, 8, 6, 4, 9, 8, 4};

        IntIterator begin = &myVector[0];
        IntIterator end = begin + myVector.size();

        std::cout << "First member: " << begin << ", Last member: " << end - 1 << std::endl;

        std::cout << "The full vector: \n";
        for(IntIterator it = begin; it != end; ++it)
        {
            std::cout << *it << ", ";
        }
        std::cout << std::endl;
    }
}