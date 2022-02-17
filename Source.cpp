// ������������ ������ ������� C++
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

// ��������� �������, ������� ����� �������� � ����� ����� ������. ������������ ������ int.
// ���������� -1 ���� ������� �� ��� ���������.
// begin - �������� �� ���������. � ������ �������� ������ �����.
// ������������� ��� ������ �������.

template <typename T> int searchIndex(T array[], int lenght, T key, int begin = 0) {
	for (int i = begin; i < lenght; i++)
		if (array[i] == key)
			return i;
	return -1;
}

// ��������� ������� ������ � ����� �������
// ������������� ��� ������ �������.

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
	cout << "����������� ������:\n[";
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 10 + 1;
		cout << arr[i] << ", ";
	}
	cout << "\b\b]\n";

	cout << "������� ������� ��������: ";
	cin >> n;
	//cout << searchIndex(arr, 10, n, 5) << endl;
	cout << lastSearchIndex(arr, 10, n, 4) << endl; */

	// ������� "��������"
	char word[8] = { 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n' };
	cout << "����������� ������:\n";
	for (int i = 0; i < 8; i++)
		cout << word[i];
	cout << endl;

	char mySym;
	cout << "������� ������: ";
	cin >> mySym;
	cout << "��������:\n";
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