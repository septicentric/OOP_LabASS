#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "RUS");
	int l, m;
	int lp;
	float *arr = new float[lp];
	float S=0;
	cout << "¬ведите размерность массива: ";
	cin >> l >> m;
	float* Q = new float[l];
	float** array = new float* [l];
	for (int i = 0; i < l; i++) array[i] = new float[l];
	cout << "¬ведите элементы массива: " << endl;
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < m; j++) {
			cout << "array[" << i << "][" << j << "] = ";
			cin >> array[i][j];
			S += array[i][j];
		}
		Q[i] = S / m;
	}


	for (int i = 0; i < l; i++) {
		for (int j = 0; j < m; j++) {
			cout << array[i][j] - Q[i] << " ";
		}
		cout << endl;
	}

}


float sort_select_one(float *arr, int lp)
{
	int middle;
	for (int i = 0; i < lp-1; i++)
	{
		middle = i;
		for (int j = i+1; j < lp; j++)
		{
			if (arr[j] < arr[middle])
			{
				middle = j;
				int temp = arr[j];
				arr[j] = arr[middle];
				arr[middle] = temp;

			}
		}
	}
	return *arr;
}