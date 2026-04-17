#include "logic.h";

bool search_binary(int array[], int size, int value) {
	int first = 0;
	int last = size - 1;

	while (first <= last) {
		int middle = (first + last) / 2;
		
		if (array[middle] == value) {
			return true;
		}
		else if (value > array[middle]) {
			first = middle + 1;
		}
		else {
			last = middle - 1;
		}
	}

	return false;
}
