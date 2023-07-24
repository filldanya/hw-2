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
	std::cout << "¬ведите номер счЄта: ";
	std::cin >> user.acc_number;
	std::cout << std::endl;

	
	std::cout << "¬ведите им€ владельца: ";
	std::cin >> user.name;
	std::cout << std::endl;
	
	std::cout << "¬ведите баланс: ";
	std::cin >> user.balance;
	std::cout << std::endl;
	
	int new_balance;
	std::cout << "¬ведите новый баланс: ";
	std::cin >> new_balance;
	std::cout << std::endl;
	balance(&user, new_balance);
	std::cout << "¬аш счЄт: " << user.name << ' ' << user.acc_number << ' ' << user.balance;
}