#include "IntIterator.h"

namespace iteratortest
{
    template<>
    char IntIterator<char>::operator*()
    {
        std::cout << " specialized " ;
        return *Data;
    }
}
