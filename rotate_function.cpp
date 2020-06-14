#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxRotateFunction(vector<int>& A) {
    int n = A.size();
    int sum = 0;
    int fsum = 0;
    for (int i = 0; i < n; ++i) {
        sum += A[i];
        fsum += i * A[i];
    }
    int ans = fsum;
    for (int i = 1; i < n; i++) {
        fsum += sum - n*A[n - i];
        ans = max(ans, fsum);
    }
    return ans;
}

int main() {
    vector<int> arr = { 1,2,3};
    int ans = maxRotateFunction(arr);
    cout << ans << endl;
}
