#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int a,b,c,s;
    float area;
    clrscr();
    printf("enter the side");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle is %f",area);
    getch();
}
