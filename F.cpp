#include <iostream>
#include <fstream>
using namespace std;

int A(int n) {
    while (n > 100) {
        n = n/10;
    }return n;
}
int main() {
    int a, b, m;
    cin >> a >> b;
    int max = 0;
    int sum = 0;
    while (a < b) {
        if (a < 100) {
            m = 0;
        } else {
            m = A(a) - a% 100;
        } if (m!=0){
            if (a%m == 0) {
                sum = sum + 1;
                max = a;
            }
        } a++;
    }cout << sum << " " << max;
    return 0;
}
