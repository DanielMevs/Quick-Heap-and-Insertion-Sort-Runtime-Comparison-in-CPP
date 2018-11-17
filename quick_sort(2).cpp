//In this file we will try to implement QUICK sort
#include <iostream>
#include <vector>
using namespace std;


void quick_sort(vector<int> &vect, int left, int right);
int partition(vector<int> &vect, int left, int right);
void swap(vector<int> &vect, int i, int j);

int partition(vector<int> &vect, int left, int right) {
	int i = left, j = right;
	int tmp;
	int pivot = vect[(left + right) / 2];
	while (i <= j) {
		while (vect[i] < pivot) {
			i++;
		}
		while (vect[j] > pivot) {
			j--;
		}
		if (i <= j) {
			swap(vect, i, j);
			i++;
			j--;
		}
	};
	return i;
}
void swap(vector<int> &vect, int i, int j)
{
	int temp = vect[j];
	vect[j] = vect[i];
	vect[i] = temp;
}

void quick_sort(vector<int> &vect, int left, int right) {
	int index = partition(vect, left, right);
	if (left < index - 1) {
		quick_sort(vect, left, index - 1);
	}
	if (index < right) {
		quick_sort(vect, index, right);
	}
}



int main() {
	vector<int> v = { 3,44,5,47,15,36,26,27,2,46 };
	quick_sort(v, 0, v.size() - 1);
	for (int i : v) {
		cout << i << ", " << endl;
	}
	
	return 0;
}

