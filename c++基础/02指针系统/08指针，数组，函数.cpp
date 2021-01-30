#include<iostream>
using namespace std;

void bubbleSort(int arr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

}
void printArray(int * arr, int len) {
	for (int i = 0; i <= 9; i++) {
		cout << arr[i] << " \t";
	}
	cout << endl;
}
int main() {
	int arr[10] = { 235,4356,234,654,7856,1324,768,235,2,10 };
	printArray(arr, 10);
	bubbleSort(arr, 10);
	printArray(arr, 10);
	system("pause");
	return 0;
}