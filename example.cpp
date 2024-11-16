#include <iostream>
#include <cstring>

int main()
{
    char s1[20]; // переменная "в" которую будем копировать
    char s2[] = "text"; // что мы будем копировать

    strcpy(s1, s2); // копируем строку s2 в s1

    std::cout << "s1: " << s1 << std::endl; // s1: text

    return 0;
}