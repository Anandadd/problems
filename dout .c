#include<stdio.h>
main()
{
     int x,y,z,ch;
    char m;
    printf("\n press <1> for area of triangle");
    printf("\n press <2> for absolute value of a no.");
    printf("\n press <3> for greatest no. among three no.");
    printf("\n press <4> check vowel or consonants");
    printf("\n press <5> smaller no. between two no.");
    printf("\n please enter your choice");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1: printf("enter the base and height");
    scanf("%d%d",&x,&y);
    printf("area of triangle is %f",1.0*x*y);
    break;
    case 2: printf("enter a no.");
    scanf("%d",&x);
    if(x>0)
    printf("absolute value is %d ",1*x);
    else
     printf("absolute value is %d",-1*x);
    break;
    case 3: printf("enter three no.");
    scanf("%d%d%d",&x,&y,&z);
    (x>y&&x>z)? printf("x is greatest %d",x):((y>z)? printf("y is greatest %d",y):(z>y)printf("z is greatest no %d",z));
    break;
    case 4 :printf("enter character");
    scanf("%c",&m);
    switch(m)
    {  
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':  
        case 'A':
        case 'E':
        case 'I': 
        case 'O':
        case 'U': printf("vowels"); break;
        default : printf("consoent");   
    }
    case 5: printf("enter two no.");
    scanf("%d%d",&x,&y);
    (x>y)? printf("y is smaller no.%d",y):(y>x) printf("x is smaller no. %d",x);
    default : printf("invalid choice");
              fjggjgffg
}
