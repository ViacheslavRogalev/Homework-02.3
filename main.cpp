#include <iostream>
#include <string>


struct address_storage
{
	std::string city;
	std::string street;
	int house_number;
	int apartment_number;
	int index;
};

void print_address_storage (address_storage* address_card)
{
	std::cout << "�����: " << address_card->city << std::endl;
	std::cout << "�����: " << address_card->street << std::endl;
	std::cout << "����� ����: " << address_card->house_number << std::endl;
	std::cout << "����� ��������: " << address_card->apartment_number << std::endl;
	std::cout << "������: " << address_card->index << "\n" << std::endl;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");

	address_storage address_card1;

	address_card1.city = "���������";
	address_card1.street = "���������������";
	address_card1.house_number = 115;
	address_card1.apartment_number = 215;
	address_card1.index = 680000;

	address_storage address_card2;

	address_card2.city = "�����������";
	address_card2.street = "���������������";
	address_card2.house_number = 208;
	address_card2.apartment_number = 20;
	address_card2.index = 690001;

	print_address_storage(&address_card1);
	print_address_storage(&address_card2);
	
	return 0;
}