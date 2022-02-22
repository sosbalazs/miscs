#include "IntIterator.h"

namespace iteratortest
{
    IntIterator::IntIterator(const IntIterator& newIterator):Data(newIterator.Data){};

    IntIterator::IntIterator(int* data): Data(data){}

    IntIterator IntIterator::operator+(size_t delta)
    {
        IntIterator result = *this;

        for(size_t i = 0; i < delta; ++i)
        {
            ++result.Data;
        }
        return result;
    }

    IntIterator IntIterator::operator-(size_t delta)
    {
        IntIterator result = *this;

        for(size_t i = 0; i < delta; ++i)
        {
            --result.Data;
        }
        return result;
    }

    bool IntIterator::operator!=(const IntIterator& rhs)
    {
        return Data != rhs.Data;
    }

    IntIterator& IntIterator::operator++()
    {
        ++Data;
        return *this;
    }

    IntIterator IntIterator::operator++(int)
    {
        IntIterator result = *this;
        ++Data;
        return result;
    }

    int IntIterator::operator*()
    {
        return *Data;
    }

    std::ostream& operator<<(std::ostream& os, const IntIterator& intIt)
    {
        os << *intIt.Data;
        return os;
    }
}
