#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;


int solution(vector<int> &A)
{
	int N = A.size();
	if (N > 100000)
		return 0;

	vector<int> idx(N, 0);
	int missing = 1; 
	for(int i=0; i < N; i++)
	{
		if (A[i] > 0 && A[i] <= N)
		{	
			idx[A[i] - 1] = 1;
			while(idx[missing - 1] == 1)
				missing++;
		}
	}
	return missing;
}
int main()
{
	//vector<int> &A;
	int size;
	cout << "Enter size : " << endl;
	cin >> size;
	vector<int> A(size);

	for(int i = 0; i < size; i++)
	{
		cout << endl;
		cout << "Enter element " << i << " : ";
		cin >> A[i];
	}
	
	cout << "Missing Integer in given array is : " << solution(A) << endl;
}
