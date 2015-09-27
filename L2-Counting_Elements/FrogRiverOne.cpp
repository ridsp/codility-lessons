#include<iostream>
#include<vector>
using namespace std;

int solution(int X, vector<int> &A)
{
	vector<int> idx(X);
	int cnt = X;
	for(int i = 0; i < A.size(); i++)
	{
		// Create an index array
		if(idx[A[i] - 1] != 1) {
			idx[A[i] - 1] = 1;
			cnt--;
		}
		if (cnt == 0)
			return i;
	}
	return -1;
}

int main()
{
	int size;
	cout << "Enter size - " << endl;
	cin >> size;
	vector<int> A(size);
	int X;

	for(int i = 0; i < size; i++)
	{	 
		cout << endl;	
		cout << "Enter Element " << i << " : " ;
		cin >> A[i];
	}
	cout << "Enter value to find its position in an array " << endl;
	cin >> X;

	
	int pos = solution(X, A);
	cout << "Time taken: " << pos << endl;
}
