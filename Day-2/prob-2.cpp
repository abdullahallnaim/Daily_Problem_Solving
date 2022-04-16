// https://www.beecrowd.com.br/judge/en/problems/view/1042


#include<bits/stdc++.h>
using namespace std;

int main(){
	int a , b, c, mx;
	int ar[3];
	cin >> a >> b >> c;
	ar[0] = a;
	ar[1] = b;
	ar[2] = c;
	if(a > b){
		mx = a;
		a = b;
		b = mx;
	}
	if(b>c){
		mx = b;
		b = c;
		c = mx;
	}
	if(a > b){
		mx = a;
		a = b;
		b = mx;
	}	

	cout << a << endl << b << endl << c << endl << endl;
	cout << ar[0] << endl << ar[1] << endl << ar[2] << endl;
	return 0;
}