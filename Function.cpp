#include <iostream>
#include<cstring>
#include<time.h>
using namespace std;
/*Створити проєкт, у якому :
1. Створити три файли : (function.h, Function.cpp, prog.cpp).
2. У файлі function.cpp необхідно написати такі функції
для роботи з масивом даних.
a) функцію для заповнення масиву випадковими значеннями,
b) функцію для виводу значень масиву на консоль,
c) функцію для пошуку мінімального елемента,
d) функцію для пошуку максимального елемента,
e) функцію для сортування,
f) функцію для редагування значення масиву.
Ці функції необхідно написати для роботи з масивом
цілих, дійсних і символьних значень. (Для кожного
  типу написати окрему функцію).
  3. У файлі function.h потрібно :
a) описати прототипи всіх функцій,
b) зробити перевірку, чи визначено константу, яка
вказує на тип даних(#ifdef INTEGER),
c) створити узагальнюючі імена функції, яким буде
визначена функція відповідного типу залежно від
константи, зазначеної у файлі prog.cpp(#define show
  ShowInt),
  Тиждень 20
 У файлі prog.cpp потрібно :
a) у функції main викликати всі функції через переозначені(узагальнені) імена з файлу function.h
(show()),
b) визначити константу, яка вказує, який тип даних
буде використовуватися.Наприклад, INTEGER —
цілі дані, CHAR — символьні, DOUBLE — дійсні.
(#define INTEGER).
Ім’я функцій потрібно давати так, щоб вони відповідали своїй суті.Наприклад, функція для виводу значень
масиву цілих чисел на консоль — ShowArrayInt().А, коли заміщаємо функцію за допомогою #define, то потрібно давати загальне ім’я.Наприклад, #define ShowArray
 ShowArrayInt.*/
 template<typename T>
 void createMass(T mass[], int size)
 {
     srand(time_t(0));
     for (int i = 0; i < size; ++i)
     {
         mass[i] = (rand() % 100);
     }
 }
 template<typename T>
 void coutmass(T mass[], int size)
 {
     for (int i = 0; i < size; ++i)
     {
         cout << mass[i] << " ";
     }
     cout << endl;
 }
 template<typename T>
 T minimum(T mass[], int size)
 {
     T min = mass[0];
     for (int i = 1; i < size; ++i) {
         if (mass[i] < min) {
             min = mass[i];
         }
     }
     return min;
 }
 template<typename T>
 T maximum(T mass[], int size) {
     T max = mass[0];
     for (int i = 1; i < size; ++i) {
         if (mass[i] > max) {
             max = mass[i];
         }
     }
     return max;
 }
 template<typename T>
 void MassSort(T mass[], int size)
 {
     for (int i = 0; i < size - 1; ++i)
     {
         for (int j = 0; j < size - i - 1; ++j)
         {
             if (mass[j] > mass[j + 1])
             {
                 swap(mass[j], mass[j + 1]);
             }
         }
     }
 }
 template<typename T>
 void redMass(T mass[],int size)
 {
     cout << "Which element would you like to change: ";
     int i;
     cin >> i;
     cout << "New element: ";
     cin << mass[i - 1];
 }
