/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/


#include <iostream>

// Declare the functions.
long Factorial(int no);
long nCr(int n, int r);

int main() {
  // Declaring variables.
  int n, r;
  
  // Prompt and ask for user input.
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  // Calling the function and display the returned value.
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}

// Implement the functions.
long Factorial(int no)
{
  // Declaring variables.
  long fac = 1;
  int limit;

  // Calculating the factorial.
  for(limit = no; limit >= 1; limit--)
  {
    fac = fac * limit;
  }

  // Return the result.
  return fac;
}


long nCr(int n, int r)
{
  // Return the result to the main function.
  return Factorial(n) / (Factorial(r) * Factorial(n - r));
}