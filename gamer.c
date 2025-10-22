#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int mynum, usernum;

   srand(time(NULL));
   mynum = rand() % 100;

   printf("I have a number in my mind. can you guess it?\n\n");

while(1){

   printf("Enter user number: ");
   scanf("%d", &usernum);

   if(mynum == usernum){
    printf("you guessed right!\n");
   break;}
   else if(mynum > usernum){
    printf("my number is greater than %d. try again\n\n",usernum);
   }
   else{
    printf("my number is smaller than %d. try again\n\n",usernum);
   }
}
   return 0;
}









