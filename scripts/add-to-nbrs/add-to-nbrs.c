#include <stdlib.h>
#include <stdio.h>

void resultMsg();
int wrongTypeMsg();
int getTheNbrs();

int main() {
  getTheNbrs(5);

  return 0;
}

int getTheNbrs(int size) {
  int nbrs[size], *ptr0, *ptr1, sum;
  char msgPart1[] = "Input the";
  char msgPart2[] = "number: ";

  sum = 0;

  for (int i = 0; i < size; i++) {
    switch(i) {
      case 0:
        ptr0 = &nbrs[0];
        printf("%s first %s", msgPart1, msgPart2);
        break;

      case 1:
        ptr1 = &nbrs[1];
        printf("%s second %s", msgPart1, msgPart2);
        break;

      default:
        sum += (*ptr0 + *ptr1);
        resultMsg(sum);
        return 0;
        
    }

    int userInp = scanf("%i", &nbrs[i]);

    if (userInp != 1) {
      wrongTypeMsg();
    }
  }

  sum += (*ptr0 + *ptr1);

  resultMsg(sum);

  return 0;
}

void resultMsg(int v) {
  printf("The sum of the entered numbers is: %i\n", v);
}

int wrongTypeMsg() {
    printf("Wrong type.\nOnly numbers are allowed.\n");

    exit(1);
}
