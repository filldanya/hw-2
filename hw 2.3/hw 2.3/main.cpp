#include <iostream>


struct address {
	std::string city = "������";
	std::string street = "�����";
	int house_number = 12;
	int room_number = 54;
	int index = 432211;
};

void out(address man) {
	std::cout << "�����: " << man.city << std::endl;
	std::cout << "�����: " << man.street << std::endl;
	std::cout << "����� ����: " << man.house_number << std::endl;
	std::cout << "����� ��������: " << man.room_number << std::endl;
	std::cout << "������: " << man.index << std::endl;
	std::cout << std::endl;
}

int main() {
	setlocale(LC_ALL, "RUS");
	address man;
	out(man);
	man.city = "������";
	man.street = "�������";
	man.house_number = 59;
	man.room_number = 143;
	man.index = 953769;
	out(man);
	
}