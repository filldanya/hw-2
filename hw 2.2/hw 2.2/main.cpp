#include <iostream>

#include <string>



struct bank {
	int acc_number;
	std::string name;
	double balance;
};

void balance(bank* acc, int new_balance) {
	acc -> balance = new_balance;

}





int main (){
	setlocale(LC_ALL, "RUS");
	bank user;
	std::cout << "������� ����� �����: ";
	std::cin >> user.acc_number;
	std::cout << std::endl;

	
	std::cout << "������� ��� ���������: ";
	std::cin >> user.name;
	std::cout << std::endl;
	
	std::cout << "������� ������: ";
	std::cin >> user.balance;
	std::cout << std::endl;
	
	int new_balance;
	std::cout << "������� ����� ������: ";
	std::cin >> new_balance;
	std::cout << std::endl;
	balance(&user, new_balance);
	std::cout << "��� ����: " << user.name << ' ' << user.acc_number << ' ' << user.balance;
}