#include <stdio.h>

using namespace std;

int main()
{
  short choice = -1;
  printf("1 - triangle area\n2 - square area\n");
  scanf("%d", &choice);
  printf("choice: %d\n", choice);

  double h, a, s = 0;
  if (choice == 1) {
    printf("\ninput a: ");
    scanf("%lf", &a);
    printf("\ninput h: ");
    scanf("%lf", &h);
    s = h * a * 0.5;
    printf("\nSquare is: %.2lf\n", s);
  }
  else if (choice == 2) {
    printf("\ninput a: ");
    scanf("%lf", &a);
    printf("\ninput b: ");
    scanf("%lf", &h);
    s = a * h;
    printf("\nSquare is: %lf\n", s);
  }
  else
    printf("\n!!!ERROR!!!\n");
}
