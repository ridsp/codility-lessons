#include<iostream>
using namespace std;

int solution(int X, int Y, int D)
{
	// X - starting point
	// Y - ending point
	// D - step size
	int steps = ((Y - X) / D);
	if (X +  (D * steps) == Y)
		return steps;
	else
		return steps + 1;
}
int main()
{
	int start, end, step_size;

	cout << "Enter starting point X : " << endl;
	cin >> start;
	cout << "Enter ending point Y : " << endl;
	cin >> end;
	cout << "enter step size D  : " << endl;
	cin >> step_size;

	int jumps = solution(start, end, step_size);
	cout << "Number of jumps = " << jumps << endl;
}
