#include <stdio.h>

int main() {
float result, a=1, b=2, c=3, d=7, e=8;
result=(b-(c*7))/(4-(a*c*a));
if(result >= -19)
printf("Ok");
else
printf("%.2f", result);
  
return 0;
}