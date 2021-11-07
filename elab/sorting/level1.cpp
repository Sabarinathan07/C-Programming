#include <iostream>
#include <map>
using namespace std;
void longestSubarray(int* A, int N, int X)
{
	int maxLen = 0;
	int beginning = 0;
	map<int, int> window;
	int start = 0, end = 0;
	for (; end < N; end++) {
		window[A[end]]++;
		auto minimum = window.begin()->first;
		auto maximum = window.rbegin()->first;
		if (maximum - minimum <= X) {
			if (maxLen < end - start + 1) {
				maxLen = end - start + 1;
				beginning = start;
			}
		}
		else {
			while (start < end) {
				window[A[start]]--;
				if (window[A[start]] == 0) {

					window.erase(window.find(A[start]));
				}
				start++;
				auto minimum = window.begin()->first;
				auto maximum = window.rbegin()->first;
				if (maximum - minimum <= X)
					break;
			}
		}
	}

    cout<<maxLen;
// 	for (int i = beginning; i < beginning + maxLen; i++)
// 		cout << A[i] << " ";
}
int main()
{
	int X=1;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	    cin>>arr[i];

	longestSubarray(arr, n, X);

	return 0;
}