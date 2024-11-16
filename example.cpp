#include <iostream>
#include <cstring>

int main() {
    char wisdom[] = "Зачем учиться, если инет ловит?"; // Вопрос, мучающий многих

    int length = strlen(wisdom); // Считаем длину строки и сохраняем

    std::cout << "Длина вопроса: " << length << " символов. Много думать не надо!" << std::endl;

    return 0;
}

