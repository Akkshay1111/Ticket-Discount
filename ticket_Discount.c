#include <stdio.h>
int main ()
{
    int age;
    int fare;
    printf("Please Enter your age :- ");
    scanf("%d",&age);
    printf("\n Please enter your air ticket fair :-");
    scanf("%d",&fare);
    if (age <=14){
        int fare1 = fare -fare*0.5;
        printf("you got 50 percent off and now your price is :- %d",fare1);
    }
    else if (age >=50)
    {
        int fare2 = fare - fare*0.2;
        printf("You got 20 percent off and now your price is %d :-",fare2);
        
    }
    else
    {
        int fare3 = fare - fare*0.1;
        printf("You got 10 percent  off and now your price is %d",fare3);

    }
   
}