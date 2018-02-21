// ctof.cpp -- converts celsius temperature into fahrenheit
#include <iostream>

double celtofah(double);

int main()
{
  using namespace std;
  cout << "Enter Celsius temperature to convert : ";
  double celsius;
  cin >> celsius;
  cout << celsius << " Celsius is " << celtofah(celsius) << " Fahrenheit" << endl;
  return 0;
}

double celtofah(double n)
{
  return n * 1.8 + 32.0;
}
