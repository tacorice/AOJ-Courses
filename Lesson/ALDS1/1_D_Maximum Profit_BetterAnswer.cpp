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

    int min = R[0];
    int max_return = R[1] - R[0];

    for (int j = 1; j < n; j++) {
        int result = R[j] - min;
        if (max_return < result) {
            max_return = result;
        }
        if (min > R[j]) {
            min = R[j];
        }
    }

    cout << max_return << endl;
    return 0;
}
