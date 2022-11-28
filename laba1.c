#include <stdio.h>
#include <math.h>
int main()
{
  double x = 0.357;
  double y = 2.031;
  printf("%lf", pow(x,cos(y))-pow(tan(x),sqrt(y-x))-19.12*log(pow(y,3)) );
  return 0;
}
