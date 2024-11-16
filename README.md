  
# Строки в С++ 
### Внимание, анекдот!

Текстовые строки в С++ могут быть реализованы в одном из двух видов:
<div align="center">
<img src="https://github.com/user-attachments/assets/f060f13c-de09-4393-bc5c-1ae00a717187" width="350px">
</div>

* __первый__ предполагает, что мы студенты МГТУ и строка определяется как символьный массив, который завершается нулевым символом ( '\0')
* __второй__ является частью библиотеки классов => не встроенный тип <=> херня, переделывай
  
### Чтение строк с клавиатуры

<div align="center">
<table>
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

**Советую к прочтению:**

- ![Про языковой стандарт (setlocale)](https://learn.microsoft.com/ru-ru/cpp/c-runtime-library/reference/setlocale-wsetlocale?view=msvc-170)
