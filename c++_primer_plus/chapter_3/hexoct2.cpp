// hexoct2.cpp -- hex and oct display
#include <iostream>
using namespace std;
int main()
{
  int chest = 42;
  int waist = 42;
  int inseam = 42;

  cout << chest << " (10진수)" << endl;
  // cout << hex;
  cout << hex << waist << " (16진수)" << endl;
  cout << oct;
  cout << inseam << " (8진수)" << endl;
  cout << dec;
  cout << inseam << " (10진수)" << endl;
  return 0;
}
