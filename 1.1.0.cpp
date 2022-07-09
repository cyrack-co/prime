#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
vector<long long int> v2 = {};

int all();
int v();
int h();
void primer(long long int min, long long int max);

int main()
{
	string ar;
	cin >> ar;
	if (ar == "all") {
		all();
	}
	else if (ar == "v") {
		v();
	}else {
		h();
	}
}
int all() {
	long long int i = 2;
	vector<long long int> v = {};
	while (true) {
		v = {};
		for (long long int i2 = 1; i2 < i; i2++) {
			if (i % i2 == 0) {
				//もしi2で割った余りが0だったらvにi2を追加
				v.push_back(i2);
			}
			//cout << "#" << i << "," << i2 << endl;
		}
		if (v.size() == 1) {
			cout << i << endl;
		}
		if (i < 3) {
			i++;
		}
		if (i >= 3) {
			i = i + 2;
		}
	}
	return 0;
}

int v() {
	cout << "Product By Yama.Can." << endl;
	cout << "version : 1.1.0\n\n";
	cout << "CyRack.co.ltd.";
	return 0;
}
int h() {
	cout << "Primer help" << endl << endl;
	cout << "all:return all prime." << endl;
	cout << "  v:return version." << endl;
	return 0;
}
void primer(long long int min, long long int max) {
	long long int i = 2;
	vector<long long int> v = {};
	for (int i3 = 0; i3 < min + max + 2;) {
		v = {};
		for (long long int i2 = 1; i2 < i; i2++) {
			if (i % i2 == 0) {
				//もしi2で割った余りが0だったらvにi2を追加
				v.push_back(i2);
			}
			//cout << "#" << i << "," << i2 << endl;
		}
		if (v.size() == 1) {
			v2.push_back(i);
			cout << i << endl;
			i3++;
		}
		i++;
	}

}
