int array[]{ 1, 2, 3, 4, 5 };
int size = 5;
int sum = 0;

int sum_elements(int array[], int size) {
	for (int i = 0; i < size; i++) {
		sum += array[i];
	}

	return sum;
}
//19

