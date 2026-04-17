#include "logic.h";

int main() {
	/*int array[]{ 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };*/
	int array[]{ 11, 22, 33, 44, 55, 66, 77, 88, 99, 100};
	int size = 10;

	int value;
	cout << "Input your: ";
	cin >> value;

	print("Array: " + convert(array, size));

	bool result = search_binary(array, size, value);
	string msg = result ? "\nYes" : "\nNo";

	print(msg);


	return 0;
}