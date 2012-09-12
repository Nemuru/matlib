#include <cstdio>
#include "Vector.hpp"
using namespace std;
using namespace mat;

typedef int Q;
int main(void)
{
  printf("hello!\n");
  Vector<Q> a(1,-3), b(20, 2);
	Vector<Q> c;
	Q x, y;
	Q fac=6, div=2;
	x=3.0, y=2.0;
//	scanf("%d%d", &x, &y);
	c=Vector<int>(x,y);
  printf("vector: (%d, %d) + (%d, %d) = (%d, %d)\n", a.x, a.y, b.x, b.y, (a+b).x, (a+b).y);
  printf("vector: (%d, %d) - (%d, %d) = (%d, %d)\n", a.x, a.y, b.x, b.y, (a-b).x, (a-b).y);
  printf("vector: (%d, %d) + -(%d, %d) = (%d, %d) - (%d, %d) = (%d, %d)\n", a.x, a.y, b.x, b.y, a.x, a.y, (-b).x, (-b).y, (a+(-b)).x, (a+(-b)).y);
  printf("vector: (%d, %d) * %d = (%d, %d)\n", a.x, a.y, fac, (a*fac).x, (a*fac).y);
  printf("vector: (%d, %d) / %d = (%d, %d)\n", a.x, a.y, div, (a/div).x, (a/div).y);
  printf("vector: (%d, %d) * (%d, %d) = %d\n", a.x, a.y, b.x, b.y, a*b);
  printf("vector: (%d, %d) ^ (%d, %d) = %d\n", a.x, a.y, b.x, b.y, a^b);
  printf("vector: (%d, %d) ^ (%d, %d) = %d\n", b.x, b.y, a.x, a.y, b^a);
	printf("vector: (%d, %d).length() = %d\n", c.x, c.y, c.length());
  return 0;
}

