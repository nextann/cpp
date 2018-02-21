// milestokm.cpp -- requests a miles input and converts into km
#include <iostream>

double milestokm(double);

int main()
{
  using namespace std;

  double miles;
  cout << "Enter distance in miles to convert: ";
  cin >> miles;
  cout << miles << " miles is " << milestokm(miles) << " km";
  return 0;
}

double milestokm(double miles)
{
  return miles * 1.60934;
}
