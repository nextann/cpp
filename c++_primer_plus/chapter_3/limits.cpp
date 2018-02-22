// limits.cpp -- 정수 한계값
#include <iostream>
#include <climits>

int main()
{
  using namespace std;
  int n_int = INT_MAX;          //n_ints initialized to int's max value
  short n_short = SHRT_MAX;     //declared within limits.h
  long n_long = LONG_MAX;
  long long n_llong = LLONG_MAX;

  //sizeof function finds out data type or variable's size
  cout << "int는 " << sizeof (int) << " 바이트이다." << endl;
  cout << "short는 " << sizeof n_short << " 바이트이다." << endl;
  cout << "long은 " << sizeof n_long << " 바이트이다." << endl << endl;
  cout << "long long은 " << sizeof n_llong << " 바이트이다." << endl;
  cout << endl;

  cout << "최대값:" << endl;
  cout << "int: " << n_int << endl;
  cout << "short: " << n_short << endl;
  cout << "long: " << n_long << endl << endl;
  cout << "long long: " << n_llong << endl << endl;
  cout << "int의 최소값 = " << INT_MIN << endl;
  cout << "char의 비트 수 = " << CHAR_BIT << endl;
  return 0;
}
