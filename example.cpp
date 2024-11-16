#include <iostream>
#include <cstdlib>

int main() {
    char myMoney[] = "1000000"; // Мечта в виде строки

    int money = atoi(myMoney); // Превращаем мечту в реальность

    money *= 100; // На еду накидываем слегка
        
    std::cout << "Баланс: " << money  << std::endl;

    return 0;
}
