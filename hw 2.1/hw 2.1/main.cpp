#include <iostream>
using namespace std;

enum class month {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    Jule,
    August,
    September,
    October,
    November,
    December
};
void number_month(month number) {
    switch (number)
    {
    case month::January: {
        cout << "������" << endl;
        break;
    }
    case month::February: {
        cout << "�������" << endl;
        break;
    }
    case month::March: {
        cout << "����" << endl;
        break;
    }
    case month::April: {
        cout << "������" << endl;
        break;
    }
    case month::May: {
        cout << "���" << endl;
        break;
    }
    case month::June: {
        cout << "����" << endl;
        break;
    }
    case month::Jule: {
        cout << "����" << endl;
        break;
    }
    case month::August: {
        cout << "������" << endl;
        break;
    }
    case month::September: {
        cout << "��������" << endl;
        break;
    }
    case month::October: {
        cout << "�������" << endl;
        break;
    }
    case month::November: {
        cout << "������" << endl;
        break;
    }
    case month::December: {
        cout << "�������" << endl;
        break;
    }
    default: {
        cout << "������������ �����!" << endl;
        break;
    }
    }
}
int main() {
    setlocale(LC_ALL, "RUS");
    int a = 1;
    while (a != 0) {
        cout << "������� ����� ������: ";
        cin >> a;
        number_month(static_cast<month>(a));
    }
    cout << "�� ��������! " << endl;
}