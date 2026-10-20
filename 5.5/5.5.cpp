#include <iostream>

using namespace std;

int G(int n) {
    if (n == 1) return 2;
    if (n == 2) return 3;
    return G(n - 1) + G(n - 2);
}

int main() {
    int n;
    cout << "n = ";
    cin >> n;

    int count = 0;
    for (int x = 0; x < (1 << n); x++) { // перевірка чи немає двох сусідніх одиниць        
        if ((x & (x >> 1)) == 0) {
            for (int i = n - 1; i >= 0; i--)
                cout << ((x >> i) & 1);
            cout << endl;
            count++;
        }
    }

    cout << "Sum: " << count << endl;
    cout << "G(n) : " << G(n) << endl;
    return 0;
}