#include <stdio.h>
#include <math.h>
#include <string.h>

const char* askForTheUser(char question[50], void(*callback)()) {
  char response[10];  

  printf("%s\n", question);
  scanf("%s", &response);
  printf("Your response is %s\n", response);  

  if(strcmp(response, "yes") == 0) {
    (*callback)();
  }

  return response;
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
    printf("Delta is negative. So the result isn't inside the set of real numbers!\n");
    printf("Delta: %s\n", delta);
    return;
  }

  printf("These are your values:\n");
  printf("Delta: %f\n", delta);
  printf("x1 %f\n", x1);
  printf("x2 %f\n", x2);
}

void rating() {
  int grade = 0;
  char response[10] = "";

  printf("Let's rate this program!\n");
  printf("Did you like this program? (y/n)\n");
  scanf("%s", &response);
  printf("From 0 to 10, what's your grade for this program?\n");
  scanf("%d", &grade);

  if(grade == 10 && strcmp(response, "yes") == 0) {
    printf("Thanks! Fortunately you're very happy :)");
  } else if(grade > 6 && grade <= 8 && strcmp(response, "yes") == 0) {
    printf("Thanks! Next time we'll do it better!");
  } else {
    printf("It's a shame that you're not happy with our program. But we'll save this for the next time we be able to make you happier ;)");
  }
}

int main() {
  char samplesQuestion[50] = "Do you wanna see some samples?";
  char bhaskarasQuestion[50] = "Do you wanna use the Bhaskara's calculator?";  

  void (*samplesCallback)() = &printSample;
  void (*bhaskarasCallback)() = &bhaskarasFormula;

  const char* samplesRes =   askForTheUser(samplesQuestion, samplesCallback);
  const char* bhaskarasRes = askForTheUser(bhaskarasQuestion, bhaskarasCallback);

  rating();
  return 0;
}