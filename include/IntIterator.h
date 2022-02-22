#include <iostream>

namespace iteratortest
{
    class IntIterator : public std::iterator<std::random_access_iterator_tag, int>
    {
        public:
            IntIterator(const IntIterator& newIterator);
            IntIterator(int* data);

            IntIterator operator+(size_t delta);
            IntIterator operator-(size_t delta);

            bool operator!=(const IntIterator& rhs);

            IntIterator& operator++();
            IntIterator operator++(int);

            int operator*();

            friend std::ostream& operator<<(std::ostream& os, const IntIterator& intIt);

        private:
            int* Data;
    };
}