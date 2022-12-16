
#include <iostream>
#include <math.h>
#include <stdlib.h>

bool
checkPointInArea (float pointX, float pointY)
{

  if (pointX * pointY >= 0
      && pow (pointX - 1, 2) + pow (pointY, 2) >= 1
      && pow (pointX + 1, 2) + pow (pointY, 2) >= 1
      && pow (pointX, 2) + pow (pointY, 2) <= 4)
    return true;

  return false;
}

float
generateTestPoint ()
{
  return (float) (rand () % 60000 - 30000) / 10000;
}

int
main ()
{
  using namespace std;

  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
    {
      float pointX = generateTestPoint ();
      float pointY = generateTestPoint ();
      cout << "X: " << pointX;
      cout << ";  Y: " << pointY << endl;
      if (checkPointInArea (pointX, pointY))
	cout << "Point in area" << endl;
      else
	cout << "Point not in area" << endl;
    }

  return 0;
}
