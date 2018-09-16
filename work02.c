#include <stdio.h>

int main() {

  //declare unsigned int to some val > 2.1
  unsigned int i = 4000000000;

  //declare char * that points to address of unsigned int
  char * c = &i;

  //print int in hex
  printf("\nValue of int in hex: \n");
  printf("Hex: %x \n",i);

  //print each indiv byte of int
  printf("\nValue of each indiv byte: \n");
  for (int x = 0; x < sizeof(i); x++) {
    printf("Byte # %d: %hhx \n",x,*c);
    c++;
  }

  //modify indiv bytes of int, print out val in hex and decimal
  //increment each byte by 1
  c = &i;

  for (int x = 0; x < sizeof(i); x++) {
    (*c)++;
    c++;
  }
  printf("\nValue of int after incrementing by 1: \n");
  printf("Hex: %x, Decimal: %u \n",i,i);

  //increment each byte by 16
  i = 4000000000;
  c = &i;
  
  for (int x = 0; x < sizeof(i); x++) {
    (*c) += 16;
    c++;
  }
  printf("\nValue of int after incrementing by 16: \n");
  printf("Hex: %x, Decimal: %u \n",i,i);

  return 0;
}
