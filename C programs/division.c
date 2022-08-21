#include<stdio.h>
#include<stdbool.h>
bool isDiv(int x,int y);
int main()
{
  int x,y;
  printf("enter x and y");
  scanf("%d%d",&x,&y);
  if(x>=0 && y>=0)
  {
      if(isDiv(x,y)==true)
      {
          printf("y is divisible x");
      }
      else
      {
          printf("y is not divisible by x");
      }
  }
  else
  {
    printf("invalid input");
  }
  return 0;
}
