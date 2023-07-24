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
        cout << "Январь" << endl;
        break;
    }
    case month::February: {
        cout << "Февраль" << endl;
        break;
    }
    case month::March: {
        cout << "Март" << endl;
        break;
    }
    case month::April: {
        cout << "Апрель" << endl;
        break;
    }
    case month::May: {
        cout << "Май" << endl;
        break;
    }
    case month::June: {
        cout << "Июнь" << endl;
        break;
    }
    case month::Jule: {
        cout << "Июль" << endl;
        break;
    }
    case month::August: {
        cout << "Август" << endl;
        break;
    }
    case month::September: {
        cout << "Сентябрь" << endl;
        break;
    }
    case month::October: {
        cout << "Октябрь" << endl;
        break;
    }
    case month::November: {
        cout << "Ноябрь" << endl;
        break;
    }
    case month::December: {
        cout << "Декабрь" << endl;
        break;
    }
    default: {
        cout << "Неправильный номер!" << endl;
        break;
    }
    }
}
int main() {
    setlocale(LC_ALL, "RUS");
    int a = 1;
    while (a != 0) {
        cout << "Введите номер месяца: ";
        cin >> a;
        number_month(static_cast<month>(a));
    }
    cout << "До свидания! " << endl;
}