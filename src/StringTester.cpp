#include "StringTester.h"
#include "String.h"

namespace stringtest
{
    void StringTester::test()
    {
        String str1 {"Buksi"};
        String str2 = str1;
        String str3 {"Ododn"};
        str2 = str3 + " space " + str1;

        std::cout << "str1: " << str1 << "\n";
        std::cout << "str2: " << str2 << "\n";
        std::cout << "str3: " << str3 << "\n";
    }
}