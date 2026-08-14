#include <stdio.h>
int main(){
    int l;
    int b;
    printf ("enter the length of rectangle : ");
    scanf ("%d",&l);
    printf ("enter the breadth of rectangle : ");
    scanf ("%d",&b);
    printf ("Area of Rectangle : %d\n",l*b);
    printf("Perimeter of Rectangle : %d",2*(l+b));
    return 0 ;

}