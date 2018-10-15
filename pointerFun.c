/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: <2AHIF>
 * ---------------------------------------------------------
 * Exercise Number: 3
 * Title:			pointerFun
 * Author:			Ammar Sijak
 * ----------------------------------------------------------
 * Description:
 * Two functions, one of them prints the intenger and the second
 * one changes the integer.
 * ----------------------------------------------------------
 */
#include <stdio.h>

void print_integers(int int_value, int* int_pointer){
  printf("Got an integer value %d and an address to an integer with value %ls \n",int_value,int_pointer );
}

void change_integers(int int_value, int* int_pointer){
  int_value = 400;
  *int_pointer = int_value;
}

int main(int argc, char const *argv[]) {
  int int_value = 40;
  int* int_pointer = &int_value;

  print_integers(int_value, int_pointer);
  change_integers(int_value, int_pointer);
  print_integers(int_value, int_pointer);
  return 0;
}
