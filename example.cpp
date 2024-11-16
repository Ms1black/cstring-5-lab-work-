#include <iostream>
#include <cstring>

int main() {
    char s1[] = "Hello";
    char s2[] = "Gudov";
    
    // Сравниваем строки s1 и s2
    if (strcmp(s1, s2) == 0) {
        std::cout << "Строки равны" << std::endl;
    } else {
        std::cout << "Строки не равны" << std::endl; // Выведется этот вариант
    }
    return 0;
}

