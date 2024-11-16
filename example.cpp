//ВНИМАНИЕ для юзеров Visual Studio (НЕ VS CODE!!!)!!!! ДАННЫЙ МЕТОД МОЖЕТ ВЫЗЫВАТЬ ОШИБКУ (методом решения является #define _CRT_SECURE_NO_WARNINGS, либо использование strcat_s)
#include <iostream>
#include <cstring>

int main() {
    char s1[30] = "Hello";
    char s2[] = ", Gudov!";

    
    strcat(s1, s2); // Присоединяю строку s2 к строке s1

    std::cout << "s1: " << s1 << std::endl; // s1: Hello, Gudov!
    return 0;
}
