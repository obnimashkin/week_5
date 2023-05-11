
#include <iostream>
#include <ctime>
using namespace std;

//task 1
int main()
{
	srand(time(NULL));
	int Elem = 10 , count = 0;
	float* array = new float[Elem];
	for (int i = 0; i < Elem; i++)	array[i] = 0.01 * (rand() % 401 - 200);
	for (int i = 0; i < Elem; i++) 
	{
		if (array[i] > 0) count++;
		cout << array[i] << " ";
	}

	cout << "\n(Numbers > 0) " << count << "\n(Numbers < 0) " << Elem - count;

delete array;
}

//task 2

/*
int main() {
	srand(time(NULL));
	int row = 3, column = 3,parne = 0;
	int** array = new int *[row];
	for (int i = 0; i < row;i++) array[i] = new int[column];

	for (int i = 0; i < row;i++)
		for (int j = 0;j < column;j++)
			array[i][j] = rand() % 89 + 10;
		

	for (int i = 0; i < row;i++) {
		for (int j = 0;j < column;j++)
			cout << array[i][j]<<" ";
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < row;i++)
		for (int j = 0;j < column;j++) {
			if (i == j) cout << array[i][j] << " ";
			if (i % 2 == 0) parne++;
		}
	cout << endl;
	
	for (int i = 0,j=column - 1 ;i < row;i++,j--) 
			cout << array[i][j]<<" ";

	cout << "\nParni - " << parne << "\nne parne - " << ((row * column) - parne);
	for (int i = 0; i  < row;i++)	delete[] array[i];
	delete[] array;

}
*/
