#include<stdio.h>
#include "function.h"


//Vectorul de functii
extern Functions func[];               

void applyFunctionsOnAValue(int value, int number) {

	int i;
	if(number < arraySize) {
		printf("Rezultatele primelor %d functii.\n", number);
	}
	else if (number == arraySize) {
		printf("Rezultatele tuturor functiilor.\n");
	}
	else {
		printf("Numarul dat este mai mare decat numarul functiilor");
		number = arraySize;
	}
	
	for(i = 0; i < number; i++) {
  		printf("%d\n", func[i](value));
    }
        
}

int main() {
	
	int value, i;
	
	printf("Maximul de functii este: %d\n", arraySize);
	printf("Numarul asupra caruia se aplica functiile:\n");
	scanf("%d", &value);

	//Aplica primele 3 functii
	applyFunctionsOnAValue(value, 3);
	
	//Aplica primele 5 functii
	applyFunctionsOnAValue(value, 5);
	
	//Aplica toate functiile
	applyFunctionsOnAValue(value, arraySize);
	
	return 0;
}
