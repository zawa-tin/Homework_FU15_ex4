#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main() {
    srand((unsigned)time(NULL));

    cout << "Who are you?" << endl << "> ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;
    cout << "Tossing a coin..." << endl;
    int cnt[] = {0, 0};
    for (int i = 1 ; i <= 3 ; i++) {
        int t = rand() % 2;
        cnt[t]++;
        cout << "Round " << i << ": ";
        cout << (t ? "Heads" : "Tails") << endl;
    }
    cout << "Heads: " << cnt[1] << ", Tails: " << cnt[0] << endl;
}
