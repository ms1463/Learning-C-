#include <iostream>
#include <vector>

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

int main()
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

}






