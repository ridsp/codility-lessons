#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int solution(vector<int> &A)
{
	
	int N = A.size();
	if (N > 100000)
		return -1;
	long sum = (long)((N + 1) * (N + 2)) / 2;
	for(int i = 0; i < N; i++) {
		sum -= (long)(A[i]);
	}
	return (int)sum;
}
int main()
{
	int size;
	int missing;
	cout << "Enter size : " << endl;
	cin >> size;

	cout << "Enter missing  element: " << endl;
	cin >> missing;
	vector<int> A(size);
	
	//Create an array of size, with missing element
	for(int i = 0; i < size; i++)
	{
		if (i + 1 >= missing)
			A[i] =  (i + 2);
		else
			A[i] = (i + 1);
	}
	cout << endl << " Missing Element is : " << solution(A) << endl;
}
