#include <iostream>
#include <cmath>
using namespace std;

void task1_1() {
    int a, sum = 0;
    cout << "������ ����� a: ";
    cin >> a;
    for (int i = a; i <= 500; i++) {
        sum += i;
    }
    cout << "���� ����� �� " << a << " �� 500: " << sum << endl;
}

void task1_2() {
    int x, y;
    cout << "������ ����� x: ";
    cin >> x;
    cout << "������ ����� y: ";
    cin >> y;
    long long result = pow(x, y);
    cout << x << " � ������ " << y << " = " << result << endl;
}

void task1_3() {
    int sum = 0;
    for (int i = 1; i <= 1000; i++) {
        sum += i;
    }
    double average = sum / 1000.0;
    cout << "������ ����������� ����� �� 1 �� 1000: " << average << endl;
}

void task1_4() {
    int a, product = 1;
    cout << "������ ����� a (�� 1 �� 20): ";
    cin >> a;
    for (int i = a; i <= 20; i++) {
        product *= i;
    }
    cout << "������� ����� �� " << a << " �� 20: " << product << endl;
}

void task1_5() {
    int k;
    cout << "������ ����� ������� (k): ";
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
    cout << "ʳ������ ����� � ����� ���������� �������: " << count << endl;
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
    cout << "ʳ������ ����� � ������ �������: " << count << endl;
}

void task2_3() {
    int number;
    cout << "������ �����: ";
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
    cout << "����� ��� ���� 3 � 6: " << result << endl;
}

void task2_4() {
    int A;
    cout << "������ ����� A: ";
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
    cout << "������ ����� A: ";
    cin >> A;
    int sum = 0, temp = A;
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }
    if (sum * sum * sum == A * A) {
        cout << "��� ���� ���� ����� ������� �������� �����" << endl;
    }
    else {
        cout << "�� �������." << endl;
    }
}

void task2_6() {
    int A;
    cout << "������ �����: ";
    cin >> A;
    cout << "ĳ������ ����� " << A << ": ";
    for (int i = 1; i <= A; i++) {
        if (A % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void task2_7() {
    int x, y;
    cout << "������ ��� �����: ";
    cin >> x >> y;
    cout << "����� �������: ";
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
        cout << "\n������ ��������:\n";
        cout << "1. ���� ����� ����� �� a �� 500\n";
        cout << "2. ��������� x � ������ y\n";
        cout << "3. ������ ����������� ����� �� 1 �� 1000\n";
        cout << "4. ������� ����� �� a �� 20\n";
        cout << "5. ������� �������� �� k\n";
        cout << "6. ϳ�������� ����� � ����� ���������� �������\n";
        cout << "7. ϳ�������� ����� � ������ �������\n";
        cout << "8. �������� ����� 3 � 6\n";
        cout << "9. ����� B, �� �� A ������� �� B*B, ��� �� �� B*B*B\n";
        cout << "10. �������� ���� ���� ���� �����\n";
        cout << "11. ������� �� ������� �����\n";
        cout << "12. ������� ����� ������� ���� �����\n";
        cout << "0. �����\n";
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
