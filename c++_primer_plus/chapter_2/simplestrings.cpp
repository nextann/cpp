// simplestrings.cpp -- prints sentences using only three user defined functions
#include <iostream>
using namespace std;
void string1();
void string2();

int main()
{
  string1();
  string1();
  string2();
  string2();
  return 0;
}

void string1()
{
  cout << "Three blind mice" << endl;
}

void string2()
{
  cout << "See how they run" << endl;
}
