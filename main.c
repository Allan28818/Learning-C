#include <stdio.h>
#include <math.h>

void askForTheUser() {
  char response[3] = "";

  printf("Do you want to see the printf() samples?\n");
  scanf("%s", &response);

  printf("Your response is %s", response);
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

void bhaskarasFormula() {  
  float a, b, c;
  printf("Type a value for a\n");
  scanf("%e", &a);
  printf("Type a value for b\n");
  scanf("%e", &b);
  printf("Type a value for c\n");
  scanf("%e", &c);

  double delta = pow(b, 2.0) - 4 * a * c;
  double x1 = (-b + pow(delta, 0.5)) / 2 * a;
  double x2 = (-b - pow(delta, 0.5)) / 2 * a;

  if(delta < 0) {
    printf("Delta is negative. So the result isn't inside the sef of real numbers!\n");
    printf("Delta: %s\n", delta);
    return;
  }

  printf("These are your values:\n");
  printf("Delta: %f\n", delta);
  printf("x1 %f\n", x1);
  printf("x2 %f\n", x2);
}

int main() {
  askForTheUser();
  printSample();
  bhaskarasFormula();

  return 0;
}