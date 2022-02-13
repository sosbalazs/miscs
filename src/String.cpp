#include <iostream>
#include <string>
#include "String.h"

namespace stringtest
{
    String::String():Data(nullptr), Size(0){};

    String::String(const char* data)
    {
        Size = std::char_traits<char>::length(data)+1;
        Data = new char [Size];
        for(size_t i = 0; i < Size; ++i)
        {
            Data[i] = data[i];
        }
    }

    String::String(const String& newStr)
    {
        Size = newStr.Size;
        Data = new char [Size];
        for(size_t i = 0; i < Size; ++i)
        {
            Data[i] = newStr.Data[i];
        }
    }

    String::String(String&& otherStr)
    {
        Size = otherStr.Size;
        Data = otherStr.Data;
        otherStr.Data = nullptr;
        otherStr.Size = 0;
    }

    String::~String()
    {
        delete [] Data;
        Data = nullptr;
        Size = 0;
    }

    String& String::operator=(const String& rhs)
    {
        if(this == &rhs)
        {
            return *this;
        }
        
        delete [] Data;
        Data = nullptr;
        Size = 0;
        
        Size = rhs.Size;
        Data = new char [Size];
        for(size_t i = 0; i < Size; ++i)
        {
            Data[i] = rhs.Data[i];
        }
        return *this;
    }

    String String::operator+(const String& rhs)
    {
        String newString;
        newString.Size = Size + rhs.Size;
        newString.Data = new char [newString.Size];
        for(size_t i = 0; i < Size; ++i)
        {
            newString.Data[i] = Data[i];
        }

        for (size_t i = Size; i < newString.Size; ++i)
        {
            newString.Data[i] = rhs.Data[i-Size];
        }

        return std::move(newString);
    }

    std::ostream& operator<<(std::ostream& os, const String& myString)
    {
        for(size_t i = 0; i < myString.Size; ++i)
        {
            os << myString.Data[i];
        }
        os << std::endl;

        return os;
    }
}