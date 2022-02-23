#include <iostream>

namespace iteratortest
{
    template<typename T>
    class IntIterator
    {
        public:
            IntIterator(T* data);
            IntIterator(const IntIterator& intIt);

            bool operator!=(const IntIterator& intIt);
            IntIterator operator+(size_t diff);
            IntIterator operator-(size_t diff);
            IntIterator& operator++();
            IntIterator operator++(int /*postfix*/);
            T operator*();

        private:
            T* Data;
    };

    template<typename T>
    IntIterator<T>::IntIterator(T* data):Data(data){}

    template<typename T>
    IntIterator<T>::IntIterator(const IntIterator& intIt):Data(intIt.Data){}

    template<typename T>
    bool IntIterator<T>::operator!=(const IntIterator& intIt)
    {
        return Data != intIt.Data;
    }

    template<typename T>
    IntIterator<T> IntIterator<T>::operator+(size_t diff)
    {
       IntIterator result = *this;

        for(size_t i = 0; i < diff; ++i)
        {
            ++result.Data;
        }
        return result;
    }

    template<typename T>
    IntIterator<T> IntIterator<T>::operator-(size_t diff)
    {
        IntIterator result = *this;

        for(size_t i = 0; i < diff; ++i)
        {
            --result.Data;
        }
        return result;
    }

    template<typename T>
    IntIterator<T>& IntIterator<T>::operator++()
    {
        ++Data;
        return *this;
    }

    template<typename T>
    IntIterator<T> IntIterator<T>::operator++(int /*postfix*/)
    {
        IntIterator result = *this;
        ++Data;
        return result; 
    }

    template<typename T>
    T IntIterator<T>::operator*()
    {
        return *Data;
    }

    // Specialization of operator*, the definition has to be in 
    // different translation unit, so it is in .cpp
    template<>
    char IntIterator<char>::operator*();
    
}