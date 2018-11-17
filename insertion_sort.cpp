//In this file we will try to implement insertion sort
#define SIZE_MAX 50001
#define RAND_MAX 32568
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;

void insertion_sort(vector<int> &vect);
void swap(vector<int> &vect, int i, int j);

/*void bad_func(vector<int> vect)
{
	vect.push_back(30);
}
void good_func(vector<int> &vect)
{
	vect.push_back(30);
}*/
void good_func(vector<int> &vect, int i)
{
	cout<< vect[i];
}

void swap(vector<int> &vect, int i, int j) 
{
	int temp = vect[j];
	vect[j] = vect[i];
	vect[i] = temp;
}
void insertion_sort(vector<int> &vect)
{
	int i = 1;
	int j = 0;
	int n = vect.size();
	int current = 0;
	int previous = 0;
	while (i < n) {
		cout << "Vector at step " << i << ": ";
		for (int m : vect) {
			cout << m << ", ";

		}
		cout << endl;
		current = vect[i];
		j = i - 1;
		
		while (j >= 0) {
			if (current < vect[j]) {
				cout << "\n";
				swap(vect, j, j+1);
				cout << "                  ";
				for (int m : vect) { 
					cout << m << ", ";

				}
				cout << "\n\n";
				
			}
			j = j - 1;
			current = vect[j+1];
		
		}
		i = i + 1;
	}
}

int main() {
	srand(time(NULL));
	vector<int> v = { 3,44,5,47,15,36,26,27,2,46};
	insertion_sort(v);

	//insertion_sort(v);



	/*bad_func(v);
	for (int i : v) { //done to demonstrate that to change the value of the vector, you must pass by reference 
		cout << i << endl;

	}
	good_func(v);
	for (int i : v) { //done to demonstrate that to change the value of the vector, you must pass by reference 
		cout << i << endl;

	}*/


	

	return 0;
}

//cout << v.size() << endl;
//v.resize(9);
//cout << v.size() << endl;
/*for (int i : v) { //This print the entire contents of the vector
//cout << i << endl;
}*/

/*for (int i = 0; i<v.size(); i++) {
v[i] = rand() % RAND_MAX;
cout << v[i] << endl;
}*/

//alternate version
/*for (int i=0;i<v.size();i++){
cout << v[i]; << endl;
}*/