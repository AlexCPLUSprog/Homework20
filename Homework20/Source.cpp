#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void showArr(int arr[], const int lenght) {
	cout << "[";
	for (int i = 0; i < lenght; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}

template <typename T>
int searchIndex(T arr[], const int lenght,T value, int begin = 0) {
	for (int i = begin; i < lenght; i++)
		if (arr[i] == value)
			return i;
	return -1;
}

template <typename T>
int searchLastIndex(T arr[], const int lenght, T value, int begin = 0) {
	for (int i = lenght; i >= 0; i--)
		if (arr[i] == value)
			return i;	
	return -1;
}

int maxElement(int arr[], const int lenght) {
	int max = arr[0];
	for (int i = 0; i < lenght; i++) 
		if (max < arr[i])
			max = arr[i];	
	return max;
}

int minElement(int arr[], const int lenght) {
	int min = arr[0];
	for (int i = 0; i < lenght; i++)
		if (min > arr[i])
			min = arr[i];
		return min;
}

double meanValue(int arr[], const int lenght) {
	int sum = 0;
	for (int i = 0; i < lenght; i++)
		sum += arr[i];
	return (double)sum / 100;
}

int counter(int arr[], const int lenght, int N) {
	int count = 0;
	for (int i = 0; i < lenght; i++)
		if (N == arr[i])
			count++;
	return count;
}

void range(int arr[], const int lenght, int A, int B) {
	cout << "Элементы в диапазоне от -22 до 35:\n[" ;
	for (int i = 0; i < B; i++)
		if (arr[i] > (-22) && arr[i] < 35)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}

int main() {
	setlocale(LC_ALL, "Russian");	

	srand(time(0));
	const int size = 100;
	int arr[size];
	for (int i = 0; i < size; i++) 
		arr[i] = rand() % (100 + 1 - (-100)) - 100; 		
	cout << "Массив:\n";
	showArr(arr, size);
	cout << "Первое вхождение: " << searchIndex(arr,size, -100) << endl;
	cout << "Последнее вхождение: " << searchLastIndex(arr, size, 100) << endl;	
	cout << "Максимальный элемент в массиве = " << maxElement(arr, size) << endl;
	cout << "Минимальный элемент в массиве = " << minElement(arr, size) << endl;
	cout << "Среднее арифметическое всего массива: " << meanValue(arr, size) << endl;
	cout << "Количество повторений числа -85 = " << counter(arr, size, -85) << endl;
	range(arr, size, -22, 35);

	return 0;
}