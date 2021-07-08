#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int d1,d2;
  srand(time(NULL));

  char name[20];
  d1=rand()%6+1;
  d2=rand()%6+1;


  
  printf("What is your name?\n>");
  scanf(" %s",name);
  printf("Hello, %s!\n",name); 
  printf("Rolling the dice...\n");
  printf("Dice1: %d \n",d1);
  printf("Dice2: %d \n",d2);
  printf("Total value: %d \n",d1+d2);

  
  return 0;
}
