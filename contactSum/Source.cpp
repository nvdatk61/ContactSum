#include <iostream>
using namespace std;

int a[100000];
int T, N;
unsigned long long sum;

int main(){
	//freopen("input.txt", "r", stdin);
	cin >> T;
	for (int t = 1; t <= T; t++){
		cin >> N;
		for (int i = 0; i < N; i++){
			cin >> a[i];
		}
		sum = 0;
		for (int i = 0; i < N; i++){
			for (int j = 0; j < N;j++){
				if ( a[j] <10)
					sum += (a[i] * 10 + a[j]);
				else if (10 <= a[j] < 100)
					sum += (a[i] * 100 + a[j]);
				else if (100 <= a[j] < 1000)
					sum += (a[i] * 1000 + a[j]);
				else if (1000 <= a[j] < 10000)
					sum += (a[i] * 10000 + a[j]);
				else if (10000 <= a[j] < 100000)
					sum += (a[i] * 100000 + a[j]);
				else if (100000 <= a[j] < 1000000)
					sum += (a[i] * 1000000 + a[j]);
				else if (a[j] = 1000000)
					sum += (a[i] * 10000000 + a[j]);

			}
		}
		cout << "#" << t <<" "<< sum << endl;		
	}
	system("pause");

}