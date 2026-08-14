#include <stdio.h>
int main(){
    int fahrenheit;
    printf("enter temperature in fahrenheit : ");
    scanf("%d",&fahrenheit);
    printf("Temperature in Celsius : %f\n ",(fahrenheit-32)* 5/9.0);
      return 0 ;
}