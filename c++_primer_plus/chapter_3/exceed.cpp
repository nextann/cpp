// exceed.cpp -- 정수 한계값 초과
#include <iostream>
#define ZERO 0
#include <climits>

int main()
{
  using namespace std;
  short Dohee = SHRT_MAX;         //initialize the varialbe to short max
  unsigned short Insuk = Dohee;

  cout << "Dohee has " << Dohee << ", ";
  cout << "Insuk also has " << Insuk << "." << endl;
  cout << "Insert +1 into each." << endl << "Now ";
  Dohee = Dohee + 1;
  Insuk = Insuk + 1;
  cout << "Dohee has " << Dohee << ", ";
  cout << "Insuk has " << Insuk << "." << endl << endl;

  Dohee = ZERO;
  Insuk = ZERO;
  cout << "Dohee has " << Dohee << ", ";
  cout << "Insuk has " << Insuk << "." << endl;
  cout << "Takeout 1 from each." << endl << "Now ";
  Dohee = Dohee - 1;
  Insuk = Insuk - 1;
  cout << "Dohee has " << Dohee << ", ";
  cout << "Insuk has " << Insuk << "." << endl;
  return 0;
}
