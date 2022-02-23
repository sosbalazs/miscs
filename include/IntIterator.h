#include <iostream>

namespace iteratortest
{
    class IntIterator
    {
        public:
            IntIterator(int* data);
            IntIterator(const IntIterator& intIt);

            bool operator!=(const IntIterator& intIt);
            IntIterator operator+(size_t diff);
            IntIterator operator-(size_t diff);
            IntIterator& operator++();
            IntIterator operator++(int /*postfix*/);
            int operator*();

        private:
            int* Data;
    };
}