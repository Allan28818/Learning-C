#include <stdio.h>

void askForTheUser() {
  char response = "";

  printf("Do you want to see the printf() samples?\n");
  scanf("%s", &response);
}

void printSample() {
  printf("\\n Break line \n");
  printf("\t \\t Tab space (horizontal) \n");
  printf("\r \\r Beginning of the line \n");
  printf("\\b Backspace \b\n");
  printf("\\0 Null character \0\n");
  printf("\n Some samples: \n\'\n \"\n \\\n \?\n");
  printf("Arrow \x12");
  printf("Percentage signal %%\n");

  printf("Fomating data:");
  printf("This is my number %d\n", 200);
  printf("Pi: %f\n", 3.14159265359);
  printf("Pi 2 cases: %.2f\n", 3.14159265359);
  printf("One character: %c\n", 'C');
  printf("Set of characters: %s\n", "C is fun");
  printf("Integer number hexadecimal format %x\n", 227);
}

int main() {
  askForTheUser();
  printSample();
 

  return 0;
}