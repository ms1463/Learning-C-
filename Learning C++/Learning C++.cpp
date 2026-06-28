#include <iostream>
#include <vector>
#include<string>
#include <cmath>

//introduction to writing code
/*int main()
{

	//This is a comment

	/*
	* This 
	* is
	* a
	* multi-line
	* comment
	* 
	std::cout << "I like pizza!" << '\n';
	std::cout << "It's really good!" << '\n';
	
	return 0;
} 
*/

//Variable and basic data types
/* int main()
{
	/*int x; //decleration
	x = 5; //assignment */

	/* int x = 5;
	int y = 6;
	int sum = x + y;

	std::cout << x << '\n';
	std::cout << y << '\n';
	std::cout << sum << '\n'; 

	//integer (whole number)
	int age = 21;
	int year = 2023;
	float days = 7.5;

	//double (number including decimal)
	double price = 10.99;
	double gpa = 2.5;
	double temperature = 25.1;

	//char (single character)
	char grade = 'A';
	char initial = 'C';
	char currency = '$';

	//boolean (true or false)
	bool student = false;
	bool power = true;
	bool forSale = false;

	//string (objects that represents a sequence of text)
	std::string name = "Bro";
	std::string day = "Friday";
	std::string food = "Pizza";
	std::string address = "123 Fake Street";

	std::cout << "Hello " << name << '\n';
	std::cout << "You are " << age << " years old";
	return 0;
} */


/* Const
int main()
{
	// The const keyword specifies that a variable's value is constant 
	// tels the compiler to prevent anything from modifying it
	// (read-only)

	const double PI = 3.14159;
	const int LIGHT_SPEED = 299792458;
	const int WIDTH = 1920;
	const int HEIGHT = 1080; 
	//pi = 420.69; //error
	/* double radius = 10;
	double circumference = 2 * PI * radius;

	std::cout << circumference << " cm"; 

	return 0;
} */


/* first
{
	int x = 1;
}

namespace second
{
	int x = 2;
}

 int main()
{
	 
	* Namespace = provides a solution for preventing name conflicts in large projects. 
	* Each entity needs a unique name.
	* A namespace allows for identically named entites as long as the namespacees are different.
	

	using namespace std;

	std::cout << x;

	return 0;
}

*/


// typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
/* using text_t = std::string;
using number_t = int;
int main()
{
	// typedef = reserved keyword used to create an additional name
	// (alias) for another data type
	// New identifier for an existing type
	// Helps with readability and reduces typos
	// Replace with 'using' (work better w/ templates)


	text_t firstName = "Bro";
	number_t age = 21;

	std::cout << firstName << '\n';
	std::cout << age << '\n';

	return 0;
} */

/* int main()
{
	// arithmetic operators = return the result of a specific arithmetic operation (+ - * /)
	//parenthesis and then multiplication & division and then lastly addition & subtraction

	//int students = 21;
	//students = students + 2;
	//students += 2;
	//students++;

	//students = students - 2;
	//students -= 2;
	//students--;

	// students= students * 2;
	//students *= 2;

	//students = students / 2;
	//students /= 3;

	//int remainder = students % 2;
	int students = 6 - (5 + 4) * 3 / 2;
	std::cout << students;

	return 0;

} */

/* int main()
{
	// type conversion a value of one data type to another 
	// Implicit = automatic
	// Explicit = Precede the value with new data type (int)

	//double x = (int) 3.14;
	
	int correct =  8;
	int questions = 10;
	double score = (double) correct/questions * 100;
	std::cout << score << "%";
} */

/* int main()
{
	// cout << (insertion operator)
	// cin >> (extraction operator)

	std::string name;
	std::cout << "What's your full name?: ";
	std::getline(std::cin, name);
	
	int age;
	std::cout << "What's your age?: ";
	std::cin >> age;

	std::cout << "Hello " << name << '\n';
	std::cout << "You are " << age << " years old";


	return 0;
} */

/* int main()
{
	double x = 3.99;
	double y = 4;
	double z;

	//z = std::max(x, y);
	//z = std::min(3, 4);
	//z = pow(2, 4)
	//z = sqrt(9);
	//z = abs(-3);
	//z round(x);
	//z = ceil(x);
	z = floor(x);

	std::cout << z;



	return 0;
}
*/

/* int main()
{
	double a;
	double b;
	double c;

	std::cout << "Enter side A: ";
	std::cin >> a;

	std::cout << "Enter size B: ";
	std::cin >> b;

	a = pow(a, 2);
	b = pow(b, 2);

	c = sqrt(a + b);

	std::cout << "side C: " << c;
	return 0;
} */

/* int main()
{
	//If statements = do something if a condition is true.
	// if not, then don't do it

	int age;

	std::cout << "Enter your age: ";
	std::cin >> age;
	if (age >= 18 && age < 100 )
	{
		std::cout << "Welcome to the site!";
	}

	else if (age < 0)
	{
		std::cout << "You haven't been born yet!";
	}

	else if (age >= 100)
	{
		std::cout << "You are to old to enter this site!";
	}
	else
	{
		std::cout << "You are not old enough to enter!";
	}


} */

/* main()
{
	// switch = alternative to using many "else if" statements
	//compare one value against matching cases

	int month;
	std::cout << "Enter the month (1-12): ";
	std::cin >> month;

	switch (month) 
	{
	case 1:
		std::cout << "It is January";
		break;
	case 2:
		std::cout << "It is February";
		break;

	}



	return 0;


} */

/* int main()
{
	// ternary operator ?: = replacement to an if/else statement
	// condition ? expression1 : expression2;
	
	//int grade = 75;

	//(grade >= 60) ? std::cout << "You pass!" : std::cout << "You fail!";
	
	//int number = 9;

	//number % 2 ? std::cout << "ODD" : std::cout << "EVEN";
	
	bool hungry = false;

	hungry ? std::cout << "You are hungry" : std::cout << "You are full";
	
	return 0;


} */

/* int main()
{
	// && = check if two conditions are true
	// || = check if at least one of two conditions is true 
	// ! = reverses the logical state of its operand

	int temp;
	bool sunny = false;

	std::cout << "Enter the temperature: ";
	std::cin >> temp;

	if (temp <= 0 || temp >= 30)
	{
		std::cout << "The temperature is bad!" << '\n';
	}
	else
	{
		std::cout <<  "The temperature is good!" << '\n';
	}

	if (!sunny)
	{
		std::cout << "It is cloudy outside!";
	}
	else
	{
		std::cout << "It is sunny outside!" ;
	}
	
	
	return 0;
} */

/* int main()
{
	std::string name;

	std::cout << "Enter your name: ";
	std::getline(std::cin, name);

	/* if (name.length() > 12)
	{
		std::cout << "Your name can't be longer than 12 character";
	}
	else
	{
		std::cout << "Welcome " << name << '\n';
	}
	*/

	// name.insert(0, "@");

	//std::cout << name.find(' ');


	//std::cout << name.at(0);


	/* name.append("@gmail.com");

	std::cout << "Your username is now " << name; */


	/*name.clear();

	std::cout << "Hello " << name; */
	/*if (name.empty())
	{
		std::cout << "You didn't enter your name";
	}
	else
	{
		std::cout << "Hello " << name;
	}
	

	return 0;
} */

/*int main()
{
	std::string name;

	while (name.empty())
	{
		std::cout << "Enter your name: ";
		std::getline(std::cin, name);
	}

	std::cout << "Hello " << name;
} */

/* int main()
{
	// do while loop = do some block of code first,
	// THEN repeat again if condition is true

	int number;

	do
	{
		std::cout << "Enter a positive # ";
		std::cin >> number;
	} while (number < 0);

	std::cout << "The number is: " << number;


	return 0;
} */

/* int main()
{
	for (int i = 10; i >= 0; i--)
	{
		std::cout << "HAPPY NEW YEAR!" << '\n';
	}
} */


/* int main()
{
	for (int i = 1; i <= 20; i++)
	{
		if (i == 13)
		{
			continue;
		}
		std::cout << i << '\n';
	}
		
	
		
	
	return 0;



} */


/* int main()
{

	int rows;
	int columns;
	char symbol;


	std::cout << "How many rows?: ";
	std::cin >> rows;

	std::cout << "How many columns?: ";
	std::cin >> columns;

	std::cout << "Enter a symbol to use: ";
	std::cin >> symbol;


	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= columns; j++)
		{
			std::cout << symbol;
		}

		std::cout << '\n';
	}


	return 0;
} */




