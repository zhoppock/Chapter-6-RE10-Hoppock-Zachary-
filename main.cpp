// Hoppock, Zachary
// reverseArray.cpp
// November 14, 2020
// Print an array in reverse order
// Version #1

#include <iostream>
using namespace std;

int main()
{
  const int SIZE = 10;
  int values[SIZE];
  cout << "Array before reversal:" << endl;
  for (int i = 0; i < SIZE; i++)
  {
    values[i] = i;
    cout << values[i];
    if (i < SIZE - 1)
    {
      cout << ", ";
    }
  }

  cout << "\n\nArray after reversal:" << endl;
  for (int i = 9; i >= 0; i--)
  {
    cout << values[i];
    if (i > 0)
    {
      cout << ", ";
    }
  }

  return 0;
}