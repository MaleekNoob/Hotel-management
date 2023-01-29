//#include<iostream>
//#include <conio.h>
//using namespace std;
//
//char* input(char*, int);
//
//char* trim(char*, int);
//
//int main() {
//	int secondPointerSize = 50, thirdPointerSize = 5;
//	char** str = new char*[thirdPointerSize];
//
//	for (int i = 0; i < thirdPointerSize; i++) {
//		str[i] = new char[secondPointerSize];
//	}
//
//	for (int i = 0; i < thirdPointerSize; i++) {
//		cout << "\nEnter your string: ";
//		str[i] = input(str[i], secondPointerSize);
//	}
//
//	cout << "\nOutput";
//	for (int i = 0; i < thirdPointerSize; i++) {
//		cout << endl << str[i];
//	}
//	return 0;
//}
//
//char* input(char* array, int size) {
//	char temp;
//	int trimSize = 0;
//	for (int i = 0; i < size; i++) {
//		temp = _getche();
//		if (temp == 13) {
//			break;
//		}
//		else {
//			array[i] = temp;
//		}
//		trimSize = (i + 1);
//	}
//
//	array = trim(array, trimSize);
//
//	return array;
//}
//
//char* trim(char* array, int size) {
//	char* newArray = new char[size];
//
//	for (int i = 0; i < size; i++) {
//		newArray[i] = array[i];
//	}
//
//	delete [] array;
//	return newArray;
//}