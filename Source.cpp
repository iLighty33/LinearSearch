// Персональный шаблон проекта C++
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

// Шаблонная функция, которая будет работать с любым типом данных. Возвращается всегда int.
// Возвращают -1 если элемент не был обнаружен.
// begin - параметр по умолчанию. С какого элемента начать поиск.
// Универсальный для любого массива.

template <typename T> int searchIndex(T array[], int lenght, T key, int begin = 0) {
	for (int i = begin; i < lenght; i++)
		if (array[i] == key)
			return i;
	return -1;
}

// Шаблонная функция поиска с конца массива
// Универсальный для любого массива.

template <typename T> int lastSearchIndex(T array[], int lenght, T key, int begin = - 1) {
	if (begin == -1)
		begin = lenght - 1;
	for (int i = begin; i >= 0; i--)
		if (array[i] == key)
			return i;
	return -1;
}

void subWord(char array[], int lenght, char sym);

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int n;

	/*int arr[10];
	cout << "Изначальный массив:\n[";
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 10 + 1;
		cout << arr[i] << ", ";
	}
	cout << "\b\b]\n";

	cout << "Введите искомое значение: ";
	cin >> n;
	//cout << searchIndex(arr, 10, n, 5) << endl;
	cout << lastSearchIndex(arr, 10, n, 4) << endl; */

	// Задание "Подслово"
	char word[8] = { 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n' };
	cout << "Изначальный массив:\n";
	for (int i = 0; i < 8; i++)
		cout << word[i];
	cout << endl;

	char mySym;
	cout << "Введите символ: ";
	cin >> mySym;
	cout << "Подслово:\n";
	subWord(word, 8, mySym);
	cout << endl;

	return 0;
}

void subWord(char array[], int lenght, char sym) {
	int symIndex = searchIndex(array, lenght, sym);
	if (symIndex == -1)
		cout << "ERROR";
	else
		for (int i = symIndex; i < lenght; i++)
			cout << array[i];

}