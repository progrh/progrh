#include <stdio.h>


int main(){
int myNumbers[4] = {25, 50, 75, 100};
int i;

for (i = 0; i < 4; i++) {
  printf("\n%d\n", myNumbers[i]);
  printf("%p\n", &myNumbers[i]);
  printf("%lu\n", sizeof(myNumbers));


    }

}
