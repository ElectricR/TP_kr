#include <string>


/* Определение класса работника */

class Employee {

/* Публичная область класса, содержащая методы для работы с объектом класса*/
	
public:

	/* Конструктор по умолчанию */
	Employee() = default;
	

	/* Объявление конструктора с параметрами */
	Employee(const std::string&, const std::string&, const std::string&, uint32_t);

	/* Методы для получения значений полей и установки новых значений */
	
	std::string get_last_name() {
		return last_name_;
	}

	void set_last_name(const std::string& last_name) {
		last_name_ = last_name;
	}

	std::string get_first_name() {
		return first_name_;
	}

	void set_first_name(const std::string& first_name) {
		first_name_ = first_name;
	}

	std::string get_position() {
		return position_;
	}

	void set_position(const std::string& position) {
		position_ = position;
	}

	uint32_t get_salary() {
		return salary_;
	}

	void set_salary(uint32_t salary) {
		salary_ = salary;
	}


/* Определение полей в приватной области класса */

private:
	std::string last_name_; // Фамилия
	std::string first_name_; // Имя
	std::string position_; // Должность
	uint32_t salary_ = 0; // Оклад
};
