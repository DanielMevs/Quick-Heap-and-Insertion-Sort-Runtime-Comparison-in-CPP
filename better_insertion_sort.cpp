//In this file we will try to implement insertion sort
#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int> &vect);
void swap(vector<int> &vect, int i, int j);

void swap(vector<int> &vect, int i, int j)
{
	int temp = vect[j];
	vect[j] = vect[i];
	vect[i] = temp;
}
void insertion_sort(vector<int> &vect)
{
	int temp = 0;
	int current = 0;
	for (int i = 1; i < vect.size(); i++) {
		current = vect[i];
		for (int j = i - 1; j >= 0; j--) {
			if (vect[j] > current) {
				temp = vect[j];
				vect[j] = current;
				vect[j + 1] = temp;
			}
		}
	}
}

int main() {

	vector<int> v = { 3,44,5,47,15,36,26,27,2,46 };
	insertion_sort(v);
	for (int i : v) {
		cout << i << ", ";
	}
	cout << endl;

	return 0;
}
