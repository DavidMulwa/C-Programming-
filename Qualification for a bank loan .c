//bank loan
#include <stdio.h>
int main() {
int age, salary;
printf("\n enter your age and salary:");
scanf("%d%d",&age,&salary);
if(age>=21 && salary>=2100){
printf("congratulations you quality for a loan");
}
else{printf("unfortunately we are unable to offer you a loan at this time");}
return 0;
}
