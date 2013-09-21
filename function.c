#include "function.h"

Functions func[] = { &addTen, &subtractTen, &multiplyByTen, &divideByTen, 
                     &addEight, &addFive, &subtractFive, &divideByTwo };
int arraySize = sizeof(func) / sizeof(func[0]);

int addTen(int i) {
	return i + 10;
}
int subtractTen(int i) {
	return i - 10;
}
int multiplyByTen(int i) {
	return i * 10;
}
int divideByTen(int i) {
	return i / 10;
}
int addEight(int i) {
	return i + 8;
}
int addFive(int i) {
	return i + 5;
}
int subtractFive(int i) {
	return i - 5;
}
int divideByTwo(int i) {
	return i / 2;
}
