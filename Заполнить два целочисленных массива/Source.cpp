#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	 int A[10] = { 1,5,7,9,12,11,2,6,2,10 };
	 int B[10] = { 10,3,6,2,1,66,5,88,12,0 };
	 int X[20];

	 for (int i = 0; i < 10; i++) {
		 X[i] = A[i];
		 X[i + 10] = B[i];
	 }
	 cout << "массив А " << endl;
	 for (int i = 0; i < 10; i++) {
		 cout << A[i] << " ";
	 }
	 cout << endl;
	 
	 cout << "массив B " << endl;
	 for (int i = 0; i < 10; i++) {
		 cout << B[i] << " ";
	 }
	 cout << endl;

	 cout << "массив X " << "следования " << endl;
	 for (int i = 0; i < 20; i++) {
		 cout << X[i] << " ";
	 }
	 cout << endl;

	 cout << "массив X " << "чередования " << endl;
	 for (int i = 0; i < 20; i++) {
		 X[2 * i] = A[i];
		 X[2 * i + 1] = B[i];

		 cout << X[i] << " ";
	 }









}