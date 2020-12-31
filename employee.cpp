#include "employee.hpp"

Employee::Employee(const std::string& first_name, const std::string& last_name, const std::string& position, uint32_t salary): 
	first_name_(first_name),
	last_name_(last_name),
	position_(position),
	salary_(salary) 
{}
