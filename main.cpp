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

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");

	address_storage num1;

	num1.city = "���������";
	num1.street = "���������������";
	num1.house_number = 115;
	num1.apartment_number = 215;
	num1.index = 680000;

	std::cout << "�����: " << num1.city << std::endl;
	std::cout << "�����: " << num1.street << std::endl;
	std::cout << "����� ����: " << num1.house_number << std::endl;
	std::cout << "����� ��������: " << num1.apartment_number << std::endl;
	std::cout << "������: " << num1.index << "\n\n";

	address_storage num2;

	num2.city = "�����������";
	num2.street = "���������������";
	num2.house_number = 208;
	num2.apartment_number = 20;
	num2.index = 690001;

	std::cout << "�����: " << num2.city << std::endl;
	std::cout << "�����: " << num2.street << std::endl;
	std::cout << "����� ����: " << num2.house_number << std::endl;
	std::cout << "����� ��������: " << num2.apartment_number << std::endl;
	std::cout << "������: " << num2.index << "\n\n";
	
	return 0;
}