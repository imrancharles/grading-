#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;


    printf("Enter marks=");
    scanf("%d",&m);
    switch(m)

{
    case 70 ... 100:printf("Grade = A");break;
    case 60 ... 69:printf("Grade = B");break;
    case 50 ...59:printf("Grade = C");break;
    case 40 ... 49:printf("Grade = D");break;
    case 0 ... 39:printf("Grade = E");break;

    default:printf("Enter the correct input");

}




    return 0;





}
