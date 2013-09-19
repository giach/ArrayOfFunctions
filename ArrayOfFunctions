#include<stdio.h>
#include<iostream>
using namespace std;

//Prototipurile functiilor exemple
int addTen(int i);
int subtractTen(int i);
int multiplyByTen(int i);
int divideByTen(int i);
int addEight(int i);
int addFive(int i);
int subtractFive(int i);
int divideByTwo(int i);

typedef int (*Functions)(int);
//Vectorul de functii
Functions func[] = { &addTen, &subtractTen, &multiplyByTen, &divideByTen, 			     
                     &addEight, &addFive, &subtractFive, &divideByTwo };

int main() {
	
	int number;
	
	cout << "Tastasti nr asupra caruia se vor aplica functiile .\n";
	cout << "Acesta trebuie sa fie mai mare sau egal cu 8 .\n";
	cin >> number;

	for(int i = 0; i < 3; i++) {
		cout << func[i](number) << endl;
	}

	cout << "Mai multe functii\n";

	for(int i = 0; i < 5; i++) {
		cout << func[i](number) << endl;
	}

	cout << "Toate functiile din vector" << endl;

	for(int i = 0; i < sizeof(func) / sizeof(func[0]); i++) {
		cout << func[i](number) << endl;
	} 

	return 0;
}

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
