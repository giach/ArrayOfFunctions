#include<stdio.h>
#include "functie.h"


//Vectorul de functii
Functions func[] = { &addTen, &subtractTen, &multiplyByTen, &divideByTen,                            
                     &addEight, &addFive, &subtractFive, &divideByTwo };
int arraySize = sizeof(func) / sizeof(func[0]);

void applyFunctionsOnAValue(int value, int number) {

  int i;
  
	if(number < arraySize) {
		printf("Rezultatele primelor %d functii.\n", number);
	}
	else {
		printf("Rezultatele tuturor functiilor.\n");
	}
	
  for(i = 0; i < number; i++) {
    printf("%d\n", func[i](value));
        }
        
}

int main() {
	
	int value, i;
	
	printf("Numerul asupra caruia se aplica functiile:\n");
	scanf("%d", &value);

	//Aplica primele 3 functii
	applyFunctionsOnAValue(value, 3);
	
	//Aplica primele 5 functii
	applyFunctionsOnAValue(value, 5);
	
	//Aplica toate functiile
	applyFunctionsOnAValue(value, arraySize);
	
	return 0;
}
