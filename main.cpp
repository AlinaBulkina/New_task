#include <iostream>
#include <vector>

using namespace std;

int main() {
    //how to break fast sort
    int n;
    cin >> n;
    vector<int> a;

    for (int i = 1; i <= n; ++i)
        a.push_back(i);

    for (int i = 2; i < n; ++i)
        swap(a[i], a[i / 2]);
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";

    cout << endl;

    //new feature
    cout << "another direction" << endl;
    for (int i = n - 1; i >= 0; --i) {
      cout << a[i] << " ";
    }
}