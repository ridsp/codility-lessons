#include<iostream>
#include<cstdlib>
#include<vector>
#include<climits>
using namespace std;

int solution(vector<int> &A)
{
	int diff, min_diff = INT_MAX;
	int N = A.size(), i = 0;
	vector<int> prefix_sum(A.size() + 1, 0);
	vector<int> sufix_sum(A.size() + 1, 0);

	// Find the prefix sum
	for(i = 0; i < N; i++)
	{
		prefix_sum[i + 1] = prefix_sum[i] + A[i];
		sufix_sum[N - i - 1] = sufix_sum[N - i] + A[N - i - 1];
	}

	// Find the sufix sum
	for(i = 1; i < N; i++)
	{
		diff = abs(prefix_sum[i] - sufix_sum[i]);
		if(diff < min_diff)
		{
			min_diff = diff;
		}
	}

	return min_diff;
}

int main()
{
	int size;
	cout << "Enter the size of an array" << endl;
	cin >> size;
	vector<int> A(size);

	for(int i = 0; i < size; i++)
	{
		cout << endl;
		cout << "Enter element " << i << " : " ;
		cin >> A[i];
	}
	
	int diff = solution(A);
	cout << "Minimum difference  = " << diff << endl;
}
