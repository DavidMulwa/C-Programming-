//program to check eligibility to vote
#include<stdio.h>
int main ()
{
int age,citizenship,kenyan;
printf("enter your age in yeas and citizenship:\n");
scanf("%d%d",&age,&citizenship );
if(age>18 && citizenship==kenyan){
printf("you can vote");
}
else {printf("you can't vote");}
return 0;
}
