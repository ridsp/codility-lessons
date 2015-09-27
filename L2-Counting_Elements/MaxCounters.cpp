#include<iostream>
#include<vector>
using namespace std;

vector<int> solution(int N, vector<int> &A)
{
	vector<int> result(N, 0);
	int max = 0;
	int add = 0;
	for(int i = 0; i < A.size(); i++)
	{
		int j = A[i];	
		if(A[i] <= N)
		{
			result[j - 1] = result[j - 1] + 1;
			if(result[j - 1] > max)
				max = result[j - 1];	
		
		}
		else
		{
			for(int i = 0; i < result.size(); i++)
			{
				result[i] = max;
			}
		}
	}
	return result;
			
}

int main()
{
	int size;
	cout << "Enter size : " << endl;
	cin >> size;
	vector<int> A(size);
	int N;
	cout << "Enter N :" <<endl;
	cin >> N;
	vector<int> myarr(N);


	for(int i=0;i<size;i++)
	{
		cout << "Enter element " << i << " : " ;
		cin >> A[i];
	}	

	myarr = solution(N, A);	
	cout << "[" ;
	for(int i = 0; i < N; i++)
	{
		cout << myarr[i];
		cout << ",";	
	} 	
	cout << "]" << endl;

	return 0;
}
