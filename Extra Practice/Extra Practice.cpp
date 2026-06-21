#include <iostream>
#include<string>
#include <cmath>
#include<vector>

/* int main()
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

} */

/* int main()
{

	std::string name;
	int correctAns;
	int totalQues;

	std::cout << "Student name: ";
	std::getline(std::cin, name);

	std::cout << "Number of correct answers: ";
	std::cin >> correctAns;

	std::cout << "Total number of questions: ";
	std::cin >> totalQues;

	double percentage = (double)correctAns / totalQues * 100;

	std::cout << "Percentage: " << percentage << '\n';

	if (percentage >= 90 && percentage <= 100)
	{
		std::cout << "Letter grade : A";
	}

	else if (percentage >= 80 && percentage <= 89)
	{
		std::cout << "Letter grade : B";
	}

	else if (percentage >= 80 && percentage <= 89)
	{
		std::cout << "Letter grade : B";
	}

	else if (percentage >= 70 && percentage <= 79)
	{
		std::cout << "Letter grade : C";
	}

	else if (percentage >= 60 && percentage <= 69)
	{
		std::cout << "Letter grade : D";
	}

	else  
	{
		std::cout << "Letter grade : F";
	}


	return 0;
} */

/* int main()
{
	double num1;
	char operation;
	double num2;

	std::cout << "First number: ";
	std::cin >> num1;

	std::cout << "Operator (+ - * /): ";
	std::cin >> operation;

	std::cout << "Second number: ";
	std::cin >> num2;

	switch (operation)
	{
	case '+':
		std::cout << num1 << '+' << num2 << '=' << num1 + num2;
		break;
	
	case '-':
		std::cout << num1 << '-' << num2 << '=' << num1 - num2;
		break;

	case '*':
		std::cout << num1 << '*' << num2 << '=' << num1 * num2;
		break;

	case '/':
		if (num2 == 0)
		{
			std::cout << "Can't divide by 0";
		}
		else
		{
			std::cout << num1 << '/' << num2 << '=' << num1 / num2;
		}
		break;
	
	default:
		std::cout << "Invalid Operator";

		
	}
} */



	
