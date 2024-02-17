#include <iostream>
using namespace std;

int main() {
	const int rows = 3; //Строки
	const int cols = 5; //Столбцы
	float matrix[rows][cols];
	//Рамерность
	cout << "Введите элементы двухмерного массива: " << rows << "x" << cols << ":\n";

	// Ввод элементов
	for (int i = 0; i < rows; i++) { //внешний цикл строки
		for (int j = 0; j < cols; j++) { //внутренний цикл столбцы
			cout << "Введите элемент " << i << "/" << j << ": ";
			cin >> matrix[i][j];
		}
	}

	cout << "Среднее арифметическое элементов:\n";

	//Вычисление среднего
	for (int i = 0; i < rows; i++) {
		float sum = 0; //подсчет суммы
		for (int j = 0; j < cols; j++) {
			sum += matrix[i][j]; //добавление элемента к сумме
		}
		float average = sum / cols; //среднее арифметическое
		cout << "Строка " << i << ": " << average << endl;
	}

	return 0;
}