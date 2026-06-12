#include <iostream>

int main()
{
	std::string First_name = "Manpreet"; 
	std::string Last_name = "Singh";
	int Age = 19;
	double GPA = 4.0;
	char First_initial = 'M';
	bool Student = true;
	const int Graduation_Year = 2029;

	std::cout << "First Name: " << First_name << '\n';
	std::cout << "Last Name: " << Last_name << '\n';
	std::cout << "Age: " << Age << '\n';
	std::cout << "GPA: " << GPA << '\n';
	std::cout << "First Initial: " << First_initial << '\n';
	std::cout << "Student: " << std::boolalpha << Student << '\n';
	std::cout << "Graduation Year: " << Graduation_Year;
	

	return 0;

}



	
