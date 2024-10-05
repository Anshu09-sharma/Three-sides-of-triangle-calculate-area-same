#include <stdio.h>
#include<math.h>
int main() 
{
    float a,b,c,area,s;
    printf("Enter the three side of tringle");
    scanf("%f%f%f",&a, &b, &c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Tringle = %f", area);
    return 0;
}
