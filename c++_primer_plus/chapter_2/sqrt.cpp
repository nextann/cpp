// sqrt.cpp == sqrt() 함수 사용

#include <iostream>
#include <cmath>

int main()
{
  using namespace std;

  double area;
  cout << "마루 면적을 평방피트 단위로 입력하시오: ";
  cin >> area;
  double side;
  side = sqrt(area);
  cout << "사각형 마루라면 한 변이 " << side
       << "피트에 상당합니다." << endl;
  cout << "멋지네여!" << endl;
  return 0;
}
