#include <stdio.h>
int main(){
    float a,b,c;
    printf ("enter the first side a : ");
    scanf("%f",&a);
    printf("enter the second side b : ");
    scanf("%f",&b);
    printf("enter the third side c : ");
    scanf("%f",&c);
    if (a==b || b==c|| c==a){
        printf("it is an Equilateral triangle\n");
    }
    else if (a==b|| b==c){
        printf("it is an Isosceles triangle\n");
    }
    else {printf("it is an Scalene triangle");
    }
    return 0;