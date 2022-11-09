#include <stdio.h>
#include <math.h>
#define pi 3.14
int main()
{
  float radius, area;

  scanf("%f", &radius);

  area = pi*radius*radius;

  printf("%.2f
", area);
  return 0;
}

