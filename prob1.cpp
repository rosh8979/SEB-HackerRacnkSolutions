#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        int count = 0;
        while (a >= 100) {
            a -= 100;
            count++;
        }
        while (a >= 20) {
            a -= 20;
        count++;
        }
        while (a >= 10) {
            a -= 10;
        count++;
        }
        while (a >= 5) {
          a -= 5;
          count++;
        }
        while (a >= 1) {
          a -= 1;
          count++;
        }
        cout << count << endl;

    }
    return 0;
}
