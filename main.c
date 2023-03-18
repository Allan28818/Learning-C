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
  char response[10];

  printf("Let's rate this program!\n");
  printf("Do you want to rate this program? (y/n)\n");
  scanf("%s", &response);

  if(strcmp(response, "yes") == 0) {
    printf("From 0 to 10, what's your grade for this program?\n");
    scanf("%d", &grade);

    switch(grade) {
      case 0: 
       printf("We're so sorry, next time we'll do it better! :(\n");
       break;
      case 1: 
       printf("Ok. Next time we'll do it better!\n :/");
       break;
      case 2: 
       printf("Thanks for rating! Next time we'll improve it! :/\n");
       break;
      case 3: 
       printf("Huum... next time you'll want to increase your grade! :/\n");
       break;
      case 4: 
       printf("Thanks for rating! Your feedback is good for us! :|\n");
       break;
      case 5: 
       printf("Thanks! Next time your grade will be the double :)!\n");
       break;
      case 6: 
       printf("We're happy that you send us your feedback! Next time it'll be better :)\n");
       break;
      case 7: 
       printf("Wow! We almost got it! Next time you'll like it! :)\n");
       break;
      case 8: 
       printf("Fine! Your grade keeps us motivaded! :)\n");
       break;
      case 9: 
       printf("Nice! We're happy that you rated us! Next time it'll be a 10 :)\n");
       break;
      case 10: 
       printf("Great! We're pretty happy that you liked our program ;)\n");
       break;
      default: 
        printf("Invalid grade!");
        break;
    }
  } else {
    printf("Thanks for using it! :)");
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