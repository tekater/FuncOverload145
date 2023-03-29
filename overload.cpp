#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>
using namespace std;

const int length = 5;

template <class T1>
T1 Sum(T1 arr[length]) {
	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum += arr[i];
	}
	return sum / length;
}
template <class T1>
T1 Max(T1 arr[length][length]) {
	int max = 0;
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {

			if (arr[i][j] > max) {
				max = arr[i][j];
			}

		}
	}
	return max;
}

template <class T1>
T1 Max(T1 arr[length][length][length]) {
		int max = 0;
		for (int i = 0; i < length; i++) {
			for (int j = 0; j < length; j++) {
				for (int z = 0; z < length; z++) {

					if (arr[i][j][z] > max) {
						max = arr[i][j][z];
					}
				}
			}
		}
		return max;
	}

template <class T1>
T1 Max1(T1 a, T1 b) {
	int max = 0;
	if (a > b) {
		max = a;
	}
	if (b > a) {
		max = b;
	}
	return max;
}
template <class T1>
T1 Max1(T1 a, T1 b, T1 c) {
	int max = 0;
	if (a > b && a > c) max = a;
	if (b > c && b > a) max = b;
	if (c > a && c > b) max = c;
	return max;
}

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	system("color B5");

	cout << "Задание 1\n";
	int arr[length] = {1,2,3,4,5};
	cout << "Среднее ариф: " << Sum(arr) << endl;


	cout << "\n\nЗадание 4\n";\
	int arr2[length][length] = {};
	int arr3[length][length][length] = {};

	for (int i = 0; i < 5; i++) {
		arr[i] = 1 + rand() % 25;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			arr2[i][j] = 1 + rand() % 250;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			for (int z = 0; z < 5; z++) {
				arr3[i][j][z] = 1 + rand() % 250;
			}
		}
	}
	cout << "Максимальное значение 2мерный массив:" << Max(arr2) << endl;
	cout << "Максимальное значение 3мерный массив:" << Max(arr3) << endl;
	

	cout << "\n\nЗадание 5\n";
	cout << "Максимальное значение двух целых:" << Max1(666, 1237) << endl;
	cout << "Максимальное значение трёх целых:" << Max1(1237, 6666, 19410) << endl;

}
