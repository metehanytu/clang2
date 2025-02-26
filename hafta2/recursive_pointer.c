#include <stdio.h>
#include <stdlib.h>
void F(int *a)
{
  if (*a<5)
    return;
  
  (*a)--;
  //printf("\n %p ",a);
  F(a);
  printf("\n %d ",*a);
  return;
}

int main(int argc, char *argv[]) {
  int a=7;
  printf("\n %p ",&a);
  F(&a);
  printf("\n mainde %d",a);
  return 0;
}
