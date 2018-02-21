// ourfunc.cpp -- 사용자가 작성하는 함수를 정의
#include <iostream>
void simon(int);
using namespace std;
int main()
{
  // using namespace std;
  simon(3);
  cout << "정수를 하나 고르시오: ";
  int count;
  cin >> count;
  simon(count);
  cout << "끝!" << endl;
  //int i;
  //i = simon(3);
  return 0;
}

void simon(int n)
{
  // using namespace std;
  cout << "Simon 왈, 발가락을 " << n << "번 두드려라." << endl;
}
