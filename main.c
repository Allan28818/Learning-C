#include <stdio.h>
#include <math.h>
#include <string.h>

void askForTheUser(const char* question, void (*callback)(), int maxInputSize) {
    char response[maxInputSize];

    printf("%s\n", question);

    fgets(response, maxInputSize, stdin);

    // Remover o caractere de nova linha
    response[strcspn(response, "\n")] = '\0';

    printf("Your response is %s\n\n", response);

    if (strcmp(response, "y") == 0) {
        (*callback)();
    }
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

void explanation() {
  char feedback[10];
  while(strcmp(feedback,"yes")!=0) {
    printf("While is a statement that we can use in C to run in a determined number of times until a condition stop being satisfied. This condition is a comparision made in a param.\n");
    printf("Did you get the explanation?\n");
    scanf("%s",&feedback);
  }
}

void dowhile() {
  int value = 0;

  do {
    printf("Type an even number to finish \n");
    scanf("%d", &value);      
  } while((value % 2)!= 0);
  
}

void forLoop() {
  int timesToRepeat = 0;
  int i = 0;
  
  printf("Type the amount of times that you want to repeat.\n");
  scanf("%d", &timesToRepeat);

  for(i = 0; i <= timesToRepeat; i++) {
    printf("It has been repeting for %d times.\n\n", i);
  }
  
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
  char samplesQuestion[50] = "Do you want to see some samples? (y/n)";
  char bhaskarasQuestion[50] = "Do you want to use the Bhaskara's calculator? (y/n)";  
  char explanationQuestion[50] = "Do you want to see an explanation about for loop? (y/n)";  
  char dowhileQuestion[50] = "Do you want to test the `do-while` statement? (y/n)";
  char forLoopQuestion[50] = "Do you want to test the `for` statement? (y/n)";


  void (*samplesCallback)() = &printSample;
  void (*bhaskarasCallback)() = &bhaskarasFormula;
  void (*explanationCallback)() = &explanation;
  void (*dowhileCallback)() = &dowhile;
  void (*forLoopCallback)() = &forLoop;

  const char* response;
 
  askForTheUser(samplesQuestion, samplesCallback, sizeof(response));
  askForTheUser(bhaskarasQuestion, bhaskarasCallback, sizeof(response));
  askForTheUser(explanationQuestion, explanationCallback, sizeof(response));
  askForTheUser(dowhileQuestion, dowhileCallback, sizeof(response));
  askForTheUser(forLoopQuestion, forLoopCallback, sizeof(response));
  
  rating();
  return 0;
}