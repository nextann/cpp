// lighttoastro.cpp -- converts light years into astronomical unit
#include <iostream>

double convert(double);

int main()
{
  using namespace std;

  cout << "Enter light years to convert : ";
  double light_years;
  cin >> light_years;
  cout << light_years << " light years is " << convert(light_years) << " astronomical units" << endl;
  return 0;
}

double convert(double light)
{
  return light * 63240;
}
