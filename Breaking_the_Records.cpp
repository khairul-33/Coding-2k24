/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/05/12
|Time: 17:18:17
|Problem: Breaking_the_Records
|_____________________________________________________ */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define print(n) cout << (n) << endl;
#define tc ll t; cin >> t; while(t--)

// Check Prime Number
bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Factorial Function
ll factorial(int n) {
    ll fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Composite Number Check
bool is_composite(int n) {
    return !is_prime(n);
}

// Binary Search
bool bin_search(int l, int r, int arr[], int x) {
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == x) {
            return true;
        } else if (arr[mid] < x) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return false;
}

// Sum of Digits
ll digit_sum(ll n) {
    ll sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int mn = v[0], mx = v[0];
    int mnBreak = 0, mxBreak = 0;
    for(int i = 0; i < n; i++){
        if(v[i] > mx){
            mx = v[i];
            mxBreak++;
        }
        if(v[i] < mn){
            mn = v[i];
            mnBreak++;
        }
    }
    cout << mxBreak << ' ' << mnBreak << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}