//!!!С РУССКИМИ БУКВАМИ TOLOWER НЕ РАБОТАЕТ
#include <iostream>
#include <cctype>

int main() {
    char question[] = "OGuzok GDE MOI YAIZA?"; // Очень громкий вопрос, требующий внимания
    std::cout << "original: " << question << std::endl;

    //пока не встретим '\0' будем поэлементно делать tolower() 
    for (int i = 0; question[i] != '\0'; i++) {
        question[i] = tolower(question[i]); // Успокаиваем шефа
    }

    std::cout << "spookyinii variant: " << question << std::endl; 

    return 0;
}
