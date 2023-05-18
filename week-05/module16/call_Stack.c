#include<stdio.h>

void world(){
    printf("World start\n");
    printf("World end\n");
}
void hello(){
    printf("Hello start\n");
    world();

    printf("Hello end\n");
}
int main()
{
  printf("Main function start\n");
  hello();
  printf("Main function end\n");

    return 0;
}