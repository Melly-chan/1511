#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, b, sum = 0, max = 0;
		cin >> a;
		cin >> b;
		for (int k = a; k <= b; k++){
		    if (k <= 10 && k >= -10)
		    if (k > 10 || k < -10){
		        int h = k, p = 0;
		        while(h > 0){
		            h = h/10;
		            p++;
		        }
		        int m = k/pow(10, p-2);
		        int n = k%100;
		        int v = m - n;
		        if ((m - n)!=0 && k%v == 0){
		            sum++;
		            if (k > max) {max = k;}
		            
		        }
			}
			
		}
	cout << sum;
	cout << max;
	return 0;
}
