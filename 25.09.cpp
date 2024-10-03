#include <iostream>
#include <cmath>
using namespace std;

void task1_1() {
    int a, sum = 0;
    cout << "Введіть число a: ";
    cin >> a;
    for (int i = a; i <= 500; i++) {
        sum += i;
    }
    cout << "Сума чисел від " << a << " до 500: " << sum << endl;
}

void task1_2() {
    int x, y;
    cout << "Введіть число x: ";
    cin >> x;
    cout << "Введіть число y: ";
    cin >> y;
    long long result = pow(x, y);
    cout << x << " у степені " << y << " = " << result << endl;
}

void task1_3() {
    int sum = 0;
    for (int i = 1; i <= 1000; i++) {
        sum += i;
    }
    double average = sum / 1000.0;
    cout << "Середнє арифметичне чисел від 1 до 1000: " << average << endl;
}

void task1_4() {
    int a, product = 1;
    cout << "Введіть число a (від 1 до 20): ";
    cin >> a;
    for (int i = a; i <= 20; i++) {
        product *= i;
    }
    cout << "Добуток чисел від " << a << " до 20: " << product << endl;
}

void task1_5() {
    int k;
    cout << "Введіть номер варіанта (k): ";
    cin >> k;
    for (int i = 2; i <= 10; i++) {
        cout << k << " x " << i << " = " << k * i << endl;
    }
}

void task2_1() {
    int count = 0;
    for (int i = 100; i <= 999; i++) {
        int first = i / 100;
        int second = (i / 10) % 10;
        int third = i % 10;
        if (first == second || second == third || first == third) {
            count++;
        }
    }
    cout << "Кількість чисел з двома однаковими цифрами: " << count << endl;
}

void task2_2() {
    int count = 0;
    for (int i = 100; i <= 999; i++) {
        int first = i / 100;
        int second = (i / 10) % 10;
        int third = i % 10;
        if (first != second && second != third && first != third) {
            count++;
        }
    }
    cout << "Кількість чисел з різними цифрами: " << count << endl;
}

void task2_3() {
    int number;
    cout << "Введіть число: ";
    cin >> number;
    int result = 0, multiplier = 1;
    while (number != 0) {
        int digit = number % 10;
        if (digit != 3 && digit != 6) {
            result += digit * multiplier;
            multiplier *= 10;
        }
        number /= 10;
    }
    cout << "Число без цифр 3 і 6: " << result << endl;
}

void task2_4() {
    int A;
    cout << "Введіть число A: ";
    cin >> A;
    for (int B = 1; B * B <= A; B++) {
        if (A % (B * B) == 0 && A % (B * B * B) != 0) {
            cout << B << " ";
        }
    }
    cout << endl;
}

void task2_5() {
    int A;
    cout << "Введіть число A: ";
    cin >> A;
    int sum = 0, temp = A;
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }
    if (sum * sum * sum == A * A) {
        cout << "Куб суми цифр числа дорівнює квадрату числа" << endl;
    }
    else {
        cout << "Не дорівнює." << endl;
    }
}

void task2_6() {
    int A;
    cout << "Введіть число: ";
    cin >> A;
    cout << "Дільники числа " << A << ": ";
    for (int i = 1; i <= A; i++) {
        if (A % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void task2_7() {
    int x, y;
    cout << "Введіть два числа: ";
    cin >> x >> y;
    cout << "Спільні дільники: ";
    for (int i = 1; i <= min(x, y); i++) {
        if (x % i == 0 && y % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int choice;
    while (true) {
        cout << "\nОберіть завдання:\n";
        cout << "1. Сума цілих чисел від a до 500\n";
        cout << "2. Обчислити x у степені y\n";
        cout << "3. Середнє арифметичне чисел від 1 до 1000\n";
        cout << "4. Добуток чисел від a до 20\n";
        cout << "5. Таблиця множення на k\n";
        cout << "6. Підрахунок чисел з двома однаковими цифрами\n";
        cout << "7. Підрахунок чисел з різними цифрами\n";
        cout << "8. Видалити цифри 3 і 6\n";
        cout << "9. Числа B, на які A ділиться на B*B, але не на B*B*B\n";
        cout << "10. Перевірка куба суми цифр числа\n";
        cout << "11. Вивести всі дільники числа\n";
        cout << "12. Вивести спільні дільники двох чисел\n";
        cout << "0. Вихід\n";
        cin >> choice;

        switch (choice) {
        case 1: task1_1(); break;
        case 2: task1_2(); break;
        case 3: task1_3(); break;
        case 4: task1_4(); break;
        case 5: task1_5(); break;
        case 6: task2_1(); break;
        case 7: task2_2(); break;
        case 8: task2_3(); break;
        case 9: task2_4(); break;
        case 10: task2_5(); break;
        case 11: task2_6(); break;
        case 12: task2_7(); break;
        case 0: return 0;
        default: cout << "wrong choice\n"; break;
        }
    }
    return 0;
}
