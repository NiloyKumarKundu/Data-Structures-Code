// Without using stack - Time complixity O(n^2)

#include<bits/stdc++.h>
using namespace std;

void calculateSpan(int price[], int n, int s[]) {
    s[0] = 1;
    for(int i = 1; i < n; i++) {
        s[i] = 1;
        for(int j = i - 1; ((j >= 0) && price[i] >= price[j]); j--) {
            s[i]++;
        }
    }
}


void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}


int main() {
    int n;
    cin >> n;
    int price[n], s[n];
    for(int i = 0; i < n; i++) {
        cin >> price[i];
    }
    calculateSpan(price, n, s);
    printArray(s, n);
    return 0;
}