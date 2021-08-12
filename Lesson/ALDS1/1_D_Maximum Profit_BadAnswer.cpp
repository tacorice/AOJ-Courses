#include <iostream>
#include <algorithm>

using namespace std;

static const int MAX = 200000;

int main() {
    int R[MAX], n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> R[i];
    }

    int max_return = R[1] - R[0];
    for (int j = 1; j < n; j++) {
        for (int i = 0; i < j; i++) {
            int result = R[j] - R[i];
            if (max_return < result) {
                max_return = result;
            }
        }
    }
    cout << max_return << endl;
    return 0;
}
