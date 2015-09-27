#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
int solution(vector<int> &A)
{
	int N = A.size();

	if (N > 100000)
		return 0;

	vector<int> idx(N);
	int cnt = 0;

	for(int i = 0; i < N; i++)
	{
		if(A[i] > N)
			return 0;

		if(idx[A[i] - 1] == 1 || A[i] > N )
			return 0;
		
		idx[A[i] - 1] = 1;
		cnt++;
	}
	if(cnt == N)
		return 1;

	return 0;	

}
int main()
{
	int size;
	cout << "Enter size : " << endl;
	cin >> size;
	vector<int> A(size);

	for(int i=0; i<size; i++)
	{
		cout << endl;
		cout << "Enter element " << i << " : ";
		cin >> A[i];
	}
	
	cout << "Return: " << solution(A)<< endl;
		
}
