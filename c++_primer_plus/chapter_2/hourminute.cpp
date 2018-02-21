// hourminute.cpp -- requests hour and minute and prints the time
#include <iostream>
using namespace std;

void time(int,int);

int main()
{
  int hour, minute;
  cout << "Enter hour : ";
  cin >> hour;
  cout << "Enter minute : ";
  cin >> minute;
  time(hour, minute);
  return 0;
}

void time (int h, int m)
{
  cout << "Time : " << h << ":" << m;
}
