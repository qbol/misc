#include <stdio.h>

#define PR(Z) printf("\n max=%f",Z)

int main(void)

{

float x,y;

printf("\n Input x→");

scanf("%f",&x);

printf("\n Input y→");

scanf("%f",&y);

if (x>y) PR(x); else PR(y);

return 0;

}
