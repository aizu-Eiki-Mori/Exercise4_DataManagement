#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int i, a[2], sum=0;
  char name[20];
  printf("What is your name?\n> ");
  scanf("%s", name);
  printf("Hello, %s!\n", name);
  srand((unsigned)time(NULL));
  printf("Rolling the dice...\n");
  for(i = 0; i < 2; i++){
    a[i] = rand() % 6 + 1;
    sum += a[i];
    printf("Die %d: %d\n", i+1, a[i]);
  }
  printf("Total value: %d\n", sum);
  if(a[0] < a[1]) printf("Die 1 < Die 2\n");
  else if(a[0] > a[1]) printf("Die 1 > Die 2\n");
  else printf("Die 1 = Die 2\n"); 
  if(sum > 7) printf("%s won\n", name);
  else printf("%s lost\n", name);
  return 0;
}
