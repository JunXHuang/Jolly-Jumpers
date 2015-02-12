#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int arr[3000];
	int per[3000];
	int num = 0,temp=0,m;
	bool notJ=false;
	while (cin>>num) {
		for (int j = 0; j < 3000; j++) {
			arr[j] = 0;
			per[j] = 1;
		}
		notJ = false;
		for (m = 0; m < num; m++) {
			cin >> arr[m];
		}
		for (m = 0; m < (num-1); m++) {
			temp = abs(arr[m] - arr[m + 1]);
			if(per[temp])
			per[temp] = 0;
			else {
				notJ = true;
				break;
			}
		}
		if (!notJ) {
			for (m = 1; m < num; m++) {
				if (per[m]) {
					notJ = true;
					break;
				}
			}
		}
		if (notJ == true)
			cout << "Not jolly\n";
		else
			cout << "Jolly\n";
	}
	return 0;
}