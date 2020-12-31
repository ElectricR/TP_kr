#include "employee.hpp" // Подключение заголовочного файла с определением класса Employee
#include <iostream> // Подключение библиотеки для ввода/вывода

#define STAFF_COUNT 4 // Определение размера массива работников


/* Функция задания полей массива работников */

void set_staff(Employee *staff) {
	std::string temp_string;
	uint32_t temp_value = 0;
	
	std::cout << "Staff defintion has started." << std::endl;

	for (int i = 0; i < STAFF_COUNT; ++i) {
		std::cout << "Enter first name:" << std::endl;
		std::cin >> temp_string;
		staff[i].set_first_name(temp_string);

		std::cout << "Enter last name:" << std::endl;
		std::cin >> temp_string;
		staff[i].set_last_name(temp_string);

		std::cout << "Enter position:" << std::endl;
		std::cin >> temp_string;
		staff[i].set_position(temp_string);

		std::cout << "Enter salary:" << std::endl;
		std::cin >> temp_value;
		staff[i].set_salary(temp_value);
	
		std::cout << "Entry added." << std::endl << std::endl;
	}
}


/* Функция, выводящая информацию о работниках в массиве */

void print_staff(Employee *staff) {
	std::cout << "Our staff are:" << std::endl;
	for (int i = 0; i < STAFF_COUNT; ++i) {
		std::cout << staff[i].get_position() << ' ';
		std::cout << staff[i].get_last_name() << ' ';
		std::cout << staff[i].get_first_name() << ' ';
		std::cout << "with a salary of ";
		std::cout << staff[i].get_salary() << std::endl;
	}
	std::cout << std::endl;
}


/* Функция поиска самого высокооплачиваемого работника в массиве */

void find_the_highest_paid_employee(Employee *staff){
	Employee *the_highest_paid_employee = staff;
	for (int i = 1; i < STAFF_COUNT; ++i) {
		if (staff[i].get_salary() > the_highest_paid_employee -> get_salary()) {
			the_highest_paid_employee = &staff[i];
		}
	}

	std::cout << "The highest paid employee is ";
	std::cout << the_highest_paid_employee -> get_first_name() << ' ';
	std::cout << the_highest_paid_employee -> get_last_name() << '.' << std::endl;
}


int main() {
	/* Создание объекта с помощью конструктора по умолчанию */
	Employee Saimon{};

	/* Создание объекта с помощью конструктора с параметрами */
	Employee Kate("Kate", "Ivanova", "Geologist", 0);
	
	/* Создание массива объектов работников */
	Employee staff[STAFF_COUNT];
	
	/* Инициализация полей объектов массива работников */
	set_staff(staff);
	
	/* Вывод информации о работниках */
	print_staff(staff);	

	/* Поиск и вывод информации о самом высокооплачиваемом работнике */
	find_the_highest_paid_employee(staff);

	/* Завершение программы и возврат кода возврата */
	return 0;
}
