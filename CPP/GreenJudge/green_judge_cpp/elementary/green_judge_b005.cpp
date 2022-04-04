#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n,a[20]={};
	cin >> n;
	for (int i=0; i<n; ++i){
		cin >> a[i];
	}
	int count[20]={};
	for (int i=0; i<n; ++i){
		for (int j=0; j<n; ++j){
			if (a[i]==a[j]){
				count[i] +=1;
			}
		}
	}
	int max=count[0],f=0;
	for (int i=0; i<n; ++i){
		if (count[i] > max){
			max = count[i];
			f = i;
		}
	}
	cout << a[f] << " " << max << endl;
	return 0;
}