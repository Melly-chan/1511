#include <iostream>

using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b;
	cout << "Введите с пренадлежащее от а до b";
	cin >> c;
	if (a>0 && b>0){
		if (c>a && c<b){
			int d,f;
			d=c%100;
			while (c>100){
				c%10;
				f=c%100;
			}
			int r=d-f;
			cout << r;
		for (int i=a; i<b; i++){
			for (int t=0; i/r==0; t++){
			    cout << i;
			}
		}
				
	}
	}
}
