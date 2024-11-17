  
# Строки в С++ 

### Внимание, анекдот!

> — Вводите все через массивы char, никаких string.
> 
> — Почему?
> 
> — Потому что string — это для счастливых людей, а мы в МГТУ.



Текстовые строки в С++ могут быть реализованы в одном из двух видов:
<div align="center">
<img src="https://github.com/user-attachments/assets/f060f13c-de09-4393-bc5c-1ae00a717187" width="350px">
</div>

* __первый__ предполагает, что мы студенты МГТУ и строка определяется как символьный массив, который завершается нулевым символом ( '\0')
* __второй__ является частью библиотеки классов => не встроенный тип <=> херня, переделывай

-----
  
### Чтение наших строк с клавиатуры

----
<div>
<table align="center">
  <tr>
    <td>
     <table>
        <tr>
            <th>$${\color{red}ЗАПРЕЩАЮ}$$❌</th>
            <th>$${\color{green}РАЗРЕШАЮ}$$✔️</th>
        </tr>
        <tr>
            <td>
          
```cpp
#include <iostream>
          
int main()
{
char str[80];
          
std::cin >> str;
          
std::cout << str;
          
return 0;
}
```
</td>
     <td>
          
```cpp
#include <iostream>
          
int main()
{
char str[80];
          
std::cin.getline(str, 80);
          
std::cout << str;
          
return 0;
}
```
</td>
        </tr>
      </table>
 </td>
<td style="padding-left: 20px;">
    <img src="https://github.com/user-attachments/assets/22411220-6d0c-4a36-8592-dac9f2a3af45" width="250px">
</td>
</tr> </table>
</div>

Почему так? В варианте слева программа формально корректна, __НО__ оператор `>>` прекращает считывание строки, как только встречает символ `пробела`,`табуляции`, `новой строки`

А во втором примере `cin.getline()` позволяет считывать строки, включая пробелы. Если формально описывать ее функционал, то она извлекает данные из входного потока до строкового разделителя, который не записывается в получившийся массив данных.

----

### Функции для работы с текстовыми строками  
-----

| Функция | Заголовок | Описание | Пример использования |
| ----------- | ----------- | ----------- | ----------- |
| `strcpy(s1,s2)`    | `<cstring>`   | Копирование строки s2 в строку s1  | [взглянуть](https://github.com/Ms1black/cstring-lecture/blob/strcpy/example.cpp) 🔞|
| `strcat(s1,s2)`    | `<cstring>`   | Строка s2 присоединяется к строке s1  | [взглянуть](https://github.com/Ms1black/cstring-lecture/blob/strcat/example.cpp) 🔞|
| `strcmp(s1,s2)`    | `<cstring>`   | Сравнение строк s1 и s2: если строки равны, возвращается значение 0  | [взглянуть](https://github.com/Ms1black/cstring-lecture/blob/strcmp/example.cpp) 🔞|
| `strchr(s1,ch)`    | `<cstring>`   | Указатель на первую позицию символа ch в строке s  | [взглянуть](https://github.com/Ms1black/cstring-lecture/blob/strchr/example.cpp) 🔞|
| `strlen(s)`    | `<cstring>`   | Возвращает длину строки, указанной аргументом s  | [взглянуть](https://github.com/Ms1black/cstring-lecture/blob/strlen/example.cpp) 🔞|
| `atoi(s)`    | `<cstdlib>`   | Преобразование состоящей из цифр строки s в целое число типа int  | [взглянуть](https://github.com/Ms1black/cstring-lecture/blob/atoi/example.cpp) 🔞|
| `atol(s)`    | `<cstdlib>`   | Преобразование состоящей из цифр строки s в целое число типа long  | [взглянуть](https://github.com/Ms1black/cstring-lecture/blob/atol/example.cpp) 🔞|
| `atof(s)`    | `<cstdlib>`   | Преобразование состоящей из цифр строки s в целое число типа double | [взглянуть](https://github.com/Ms1black/cstring-lecture/blob/atof/example.cpp) 🔞|
| `tolower(ch)`    | `<cctype>`   | Преобразование буквенного символа ch к строчному формату  | [взглянуть](https://github.com/Ms1black/cstring-lecture/blob/tolower/example.cpp) 🔞|
| `toupper(ch)`    | `<cctype>`   | Преобразование буквенного символа ch к прописному формату  | [взглянуть](https://github.com/Ms1black/cstring-lecture/blob/toupper/example.cpp) 🔞|

-----

###  Попробуем задачу щелкнуть  *~~либо она решается, либо я начинаю истерить~~*
<div align="center">
  
-----
I Осознание
-----

</div>

#### Прочитаем условие:
<div align="center">
  
![изображение](https://github.com/user-attachments/assets/211fa716-39f7-426d-a405-d5975106aa52)
</div>


<img src="https://github.com/user-attachments/assets/b437fde5-e0a0-4de6-b168-290dc5ceb5e9" width="100px">

##### Какие данные?
>###### на вход получаем "пример в строке", а вывести должны сумму
>>__Пример:__ 
>>
>>Вводим в консоль `1+2+3=`
>>
>>Выводим: `6`


##### В чем прикол задачи?
>###### прикол в том, что вводим мы символы, а их надо преобразовать в int и выполнить указанное арифметическое действие.

<div align="center">
  
II Решение  
-----
</div>
Сначала идея была такова

<div align="center">
  
<img src="https://github.com/user-attachments/assets/ced2ca49-0c52-4f90-8311-55df04363325" width="500px">

<img src="https://github.com/user-attachments/assets/726e6de9-abd3-46ea-ab18-457001095782" width="400px">
</div>

Но это в моменте показалось бредовым, ведь есть метод проще - а именно, пробегаться по массиву, но через элемент(по числам), сделав шаг не `i++` а `i+=2`, и брать литер от `a[i-1]` элемента(чтобы не выйти за пределы массива). 
Вот кратенько по пунктам:
<div align="center">
<img src="https://github.com/user-attachments/assets/aced0136-0211-4db6-998b-39af01f22d6a" width="400px">
</div>

III Кодинг
-----
1. __Подлючаю заголовочные:__

```cpp
#include <iostream>
```
Я пробовала сделать с помощью atoi, но там много вылезло заморочек



2. __Пишем ввод:__
```cpp
char input[100]; 
std::cin.getline(input, 100); 
```
Ну в вводе - ничего особенного.


3. __Вот тут и начался прикол__
   
Как я сказала выше, atoi оказался не дружелюбным, поэтому благодарим https://qna.habr.com/q/1090394  
Почему так? Да потому)    
В плюсах можно просто вычесть символ `'0'` из символа цифры, чтобы получить его целое значение.   
Например: `'3' - '0'` даст число `3`

```cpp
int result = input[0] - '0';
```
Тут мы сохранили первое число, чтобы дальше уже работать с циклом и не выйти за пределы строки слева. 


4. __Пишем цикл__

Так как у нас уже записано первое число, то в процессе было решено, сначала определить знак, а след. символом число.  
то есть теперь наш алгоритм выглядит так:

<div align="center">
<img src="https://github.com/user-attachments/assets/19934854-4997-417b-9d9f-bccc01cb019c" width="350px">
</div>
вот код этого алгоритма, на пальцах:


```cpp
   for (int i = 1; input[i] != '='; i += 2) { // Шагаем через два элемента
        int nextNumber = input[i + 1] - '0'; // Преобразуем следующую цифру в число

        if (input[i] == '+') { // Если знак плюса, прибавляем
            result += nextNumber; 
        }
        else if (input[i] == '-') { // Если знак минуса, вычитаем
            result -= nextNumber; 
        }
    }
```

5. __Готовая программка__

```cpp
include <iostream>

int main() {
    char input[100];
    std::cin.getline(input, 100); 

    int result = input[0] - '0'; 

    for (int i = 1; input[i] != '='; i += 2) { 
        int nextNumber = input[i + 1] - '0'; 

        if (input[i] == '+') {
            result += nextNumber; 
        }
        else if (input[i] == '-') {
            result -= nextNumber; 
        }
    }

    std::cout << "Сумма: " << result << std::endl; 
    return 0;
}

```
--------


![bdd7770cd828942e152bec5b71265245](https://github.com/user-attachments/assets/f6c87c1b-81a2-420b-b191-6013b07f2926)
