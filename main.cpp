#include <iostream>
#include <string>

// Homework 3 — Joe Barron
// CIS 5 Week 03 · Types & variables

int main() {
  
	using std::cout;
	using std::cin;
	using std::string;

		string first, last;
		cout << "First Name: ";
		cin >> first;
		cout << "Last Name: ";
		cin >> last;
		// The choice for in, is because both age and credits are whole numbers. Int can carry 4 bytes.
		int Age = 0;
		cout << "Age: ";
		cin >> Age;
		int Credits = 0;
		cout << "Credits: ";
		cin >> Credits;
		// The choice for double, is because height and GPA can be a decimal number, in an int it will lose the decimal value. Double can carry 8 bytes.
		double height_m = 0.0;
		cout << "Height (m): ";
		cin >> height_m;
		double GPA = 0.0;
		cout << "GPA: ";
		cin >> GPA;
		// The choice for char, is because the initial is a single character. Carries 1 byte.
		char initial;
		cout << "Initial: ";
		cin >> initial;
		// The choice for bool, is because the student variable can only be true or false.
		bool student;
		cout << "Student: ";
		cin >> student;
		// The choice for const int, is because the current year will not change. I also do not want it to be changed. Carries 4 bytes.
		const int CURRENT_YEAR = 2026;

		// Summarize the inputted information
		cout << "==== About me ====\n";
		cout << "First Name: " << first << "\n";
		cout << "Last Name: " << last << "\n";
		cout << "Age: " << Age << "\n";
		cout << "Height (m): " << height_m << "\n";
		cout << "Initial: " << initial << "\n";
		cout << "Student: " << student << "\n";
		cout << "Credits: " << Credits << "\n";
		cout << "GPA: " << GPA << "\n";
		cout << "Current Year: " << CURRENT_YEAR << "\n";
		cout << first << " " << last << " is " << Age << " years old, " << height_m << " meters tall, and has a GPA of " << GPA << ".\n";

  // TODO: change one value from a first choice. Comment the old value,
  // the new value, and why the console followed.

  // char confirmation = "String"; // would not compile — char can only hold a single character, not a string.
  // bool student = 300 ; // would not compile — bool can only hold true or false, not an integer.

  return 0;
}
