// lab5.cpp: определяет точку входа для приложения.
//

#include "lab5.h"
#include <iostream>
#include <algorithm>
using namespace std;


int sumOfDigits(int n) {
    cout << "функция суммы цифр числа" << endl;
    int sum = 0;
    n = abs(n);
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}


int calculateSumOfDigits(int a, int b) {
    cout << "функция суммы цифр двух чисел" << endl;
    return sumOfDigits(a) + sumOfDigits(b);
}


int calculateMaxWith25(int a, int b, int c) {
    cout << "функция наибольшего из трех чисел и 25" << endl;
    int max_val = max(a, max(b, c)); // из либы алгоритм
    return max(max_val, 25);
}


void processNumbers() {
    cout << "void функция для обработки чисел" << endl;

    int a, b, c;
    cout << "введите три целых числа через пробел: ";
    cin >> a >> b >> c;

  
    if (a != 0 && b != 0 && c != 0) {
        
        int result = calculateMaxWith25(a, b, c);
        cout << "наибольшее значение из трех и 25: " << result << endl;
    }
    else if (a != 0 && b != 0 && c == 0) {
       
        int result = calculateSumOfDigits(a, b);
        cout << "сумма всех цифр двух чисел: " << result << endl;
    }
    else if (a != 0 && c != 0 && b == 0) {
        int result = calculateSumOfDigits(a, c);
        cout << "сумма всех цифр двух чисел: " << result << endl;
    }
    else if (b != 0 && c != 0 && a == 0) {
       
        int result = calculateSumOfDigits(b, c);
        cout << "сумма всех цифр двух чисел: " << result << endl;
    }
    else if (a != 0 && b == 0 && c == 0) {
   // + перегрузка функции + void для пункта 2 
    else {
       
        cout << "все числа нулевые" << endl;
    }
}

int main() {
    setlocale(LC_ALL, "");
    int choice;

    do {
        cout << "\nвыберите пункт для выполнения 1 или 2: ";
        cin >> choice;

        if (choice == 1) {
            int a, b, c;
            cout << "введите три числа через пробел ";
            cin >> a >> b >> c;

            int result;

            // проверяем количество ненулевых 
            if (a != 0 && b != 0 && c != 0) {
                result = calculateMaxWith25(a, b, c);  
            }
            else if (a != 0 && b != 0 && c == 0) {
                result = calculateSumOfDigits(a, b);    
            }
            else if (a != 0 && c != 0 && b == 0) {
                result = calculateSumOfDigits(a, c);    
            }
            else if (b != 0 && c != 0 && a == 0) {
                result = calculateSumOfDigits(b, c);    
            }
            else if (a != 0 && b == 0 && c == 0) {
                result = sumOfDigits(a);     
            }
            else if (b != 0 && a == 0 && c == 0) {
                result = sumOfDigits(b);      
            }
            else if (c != 0 && a == 0 && b == 0) {
                result = sumOfDigits(c);      
            }
            else {
                result = 0;                  
            }

            cout << "результат: " << result << endl;
        }
        else if (choice == 2) {
            processNumbers();
        }
        else {
            cout << "неверный выбор! введите 1 или 2" << endl;
        }

        cout << "\nпродолжить? 1 да, 0 нет: ";
        cin >> choice;

    } while (choice != 0);

    cout << "программа завершена" << endl;
    return 0;

}


