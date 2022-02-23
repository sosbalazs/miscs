#include "IntIterator.h"

namespace iteratortest
{
    IntIterator::IntIterator(int* data):Data(data){}

    IntIterator::IntIterator(const IntIterator& intIt):Data(intIt.Data){}

    bool IntIterator::operator!=(const IntIterator& intIt)
    {
        return Data != intIt.Data;
    }

    IntIterator IntIterator::operator+(size_t diff)
    {
       IntIterator result = *this;

        for(size_t i = 0; i < diff; ++i)
        {
            ++result.Data;
        }
        return result;
    }

    IntIterator IntIterator::operator-(size_t diff)
    {
        IntIterator result = *this;

        for(size_t i = 0; i < diff; ++i)
        {
            --Data;
        }
        return result;
    }

    IntIterator& IntIterator::operator++()
    {
        ++Data;
        return *this;
    }

    IntIterator IntIterator::operator++(int /*postfix*/)
    {
        IntIterator result = *this;
        ++Data;
        return result; 
    }

    int IntIterator::operator*()
    {
        return *Data;
    }
}
