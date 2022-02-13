#ifndef STRING
#define STRING

#include <iostream>

namespace stringtest
{
    class String {
        public:
            String();
            String(const char* data);
            String(const String& newStr);
            String(String&& otherStr);
            ~String();

            String& operator=(const String& rhs);
            String operator+(const String& rhs);

            friend std::ostream& operator<<(std::ostream& os, const String& rhs);

        private:
            char* Data;
            size_t Size;
    };
}

#endif