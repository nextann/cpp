// hexoct1.cpp -- 16진 정수형 상수와 8진 정수형 상수
#include <iostream>
int main()
{
  using namespace std;
  int chest = 42;     //deci
  int waist = 0x42;   //hexa
  int inseam = 042;   //octa

  cout << chest << endl;
  cout << waist << endl;
  cout << inseam << endl;
  return 0;
}
