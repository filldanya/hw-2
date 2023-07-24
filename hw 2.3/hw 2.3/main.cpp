#include <iostream>


struct address {
	std::string city = "Москва";
	std::string street = "Арбат";
	int house_number = 12;
	int room_number = 54;
	int index = 432211;
};

void out(address man) {
	std::cout << "Город: " << man.city << std::endl;
	std::cout << "Улица: " << man.street << std::endl;
	std::cout << "Номер дома: " << man.house_number << std::endl;
	std::cout << "Номер квартиры: " << man.room_number << std::endl;
	std::cout << "Индекс: " << man.index << std::endl;
	std::cout << std::endl;
}

int main() {
	setlocale(LC_ALL, "RUS");
	address man;
	out(man);
	man.city = "Ижевск";
	man.street = "Пушкина";
	man.house_number = 59;
	man.room_number = 143;
	man.index = 953769;
	out(man);
	
}