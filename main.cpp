#include <iostream>

using namespace std;

void test();
void questionOne();


void test()
{
  int a = 10;
  int b = 5;
  int c = a + b;
  
  cout << "First Value: " << a << endl << "Second Value: " << b << endl << "Combined Value: " << c << endl;
}

void questionOne()
{
  int firstValue;
  int secondValue;

  int *myPointer;

  myPointer = &firstValue;
  *myPointer = 10;
  myPointer = &secondValue;
  *myPointer = 20;

  cout << "Q1 firstValue: " << firstValue << endl << "Q1 secondValue: " << secondValue;
}

void questionTwo()
{
  const int MAX = 100;

  for(int i = 0; i <= MAX; i++)
  {
    int multipleOfThree = i % 3;
    int multipleOfFive = i % 5;

    if (multipleOfThree == 0)
      cout << "Fizz";
    
    if (multipleOfFive == 0)
      cout << "buzz";

    if (multipleOfThree == 0 && multipleOfFive == 0)
      cout << "Fizzbuzz";

      cout << i << endl;
  }
    
}


int main() {
  test();
  questionOne();
  questionTwo();
}