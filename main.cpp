#include <iostream>
#include <string>

// Homework 3 — Joe Barron
// CIS 5 Week 03 · Types & variables

int main() {
  
	using std::cout;
	using std::cin;
	using std::string;

		string name;
		cout << "Name: ";
		cin >> name;
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
		const int CURRENT_YEAR = 2026;

		// Summarize the inputted information
		cout << "==== About me ====\n";
		cout << "Name: " << name << "\n";
		cout << "Age: " << Age << "\n";
		cout << "Height (m): " << height_m << "\n";
		cout << "Initial: " << initial << "\n";
		cout << "Student: " << student << "\n";
		cout << "Credits: " << Credits << "\n";
		cout << "GPA: " << GPA << "\n";
		cout << "Current Year: " << CURRENT_YEAR << "\n";
		// TODO: labeled prints for every variable + CURRENT_YEAR

  // TODO: a comment that explains a type choice (why int, why double, or why const)
  // TODO: labeled lines from the names
  // TODO: one short paragraph from those same names — not leftover quotes

  // TODO: change one value from a first choice. Comment the old value,
  // the new value, and why the console followed.

  // TODO: two lines that would not compile — leave them commented
  // Example shape (write your own, with the reason):
  // int age = "nineteen";   // would not compile — ...
  // CURRENT_YEAR = 2027;    // would not compile — ...

  return 0;
}
