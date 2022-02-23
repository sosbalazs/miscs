#include "IteratorTester.h"
#include "IntIterator.h"

#include <vector>
#include <iostream>

namespace iteratortest
{
    void IteratorTester::test()
    {
        std::cout << "With integers:" << std::endl;
        std::vector<int> myVector {2, 4, 1, 8, 6, 4, 9, 8, 4};

        IntIterator<int> begin = &myVector[0];
        IntIterator<int> end = begin + myVector.size();

        std::cout << "First member: " << *begin << ", Last member: " << *(end - 1) << std::endl;

        std::cout << "The full vector: \n";
        for(IntIterator<int> it = begin; it != end; ++it)
        {
            std::cout << *it << ", ";
        }
        std::cout << std::endl << std::endl;

        
        std::cout << "With characters:" << std::endl;

        std::vector<char> c_myVector {'2', '4', '1', '8', '6', '4', '9', '8', '4'};

        IntIterator<char> c_begin = &c_myVector[0];
        IntIterator<char> c_end = c_begin + c_myVector.size();

        std::cout << "First member: " << *c_begin << ", Last member: " << *(c_end - 1) << std::endl;

        std::cout << "The full vector: \n";
        for(IntIterator<char> it = c_begin; it != c_end; ++it)
        {
            std::cout << *it << ", ";
        }
        std::cout << std::endl;

    }
}