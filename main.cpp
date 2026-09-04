#include <iostream>

using std::cout;
using std::cin;

// Practice 3 — Joe Barron
// CIS 5 Week 03 · Mini calculator

int main() {
  double a = 0.0;
  double b = 0.0;
  double sum = 0.0;
  double difference = 0.0;
  double product = 0.0;

  // User input for two numbers
  cout << "First number: ";
  cin >> a;
  cout << "Second number: ";
  cin >> b;
  

  // TODO: compute sum, difference, product into named doubles
  // Computing the sum, difference, and product of the two numbers
  sum = a + b;
  difference = a - b;
  product = a * b;

  // Print the labeled results
  cout << "Sum: " << sum << "\n";
  cout << "Difference: " << difference << "\n";
  cout << "Product: " << product << "\n";

  return 0;
}
