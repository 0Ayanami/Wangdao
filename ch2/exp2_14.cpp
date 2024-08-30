//
// Created by muyou on 2024/7/18.
//
#include "iostream"
#include "string"

using namespace std;

int keyboard[26] = {1, 2, 3,
                    1, 2, 3,
                    1, 2, 3,
                    1, 2, 3,
                    1, 2, 3,
                    1, 2, 3, 4,
                    1, 2, 3,
                    1, 2, 3, 4};

int main() {
    string input;
    while (cin >> input) {
        int time = 0;
        for (int i = 0; i < input.length(); ++i) {
            if (i != 0 && input[i] - input[i - 1] == keyboard[input[i] - 'a'] - keyboard[input[i - 1] - 'a'])
                time += 2;
            time += keyboard[input[i] - 'a'];
        }
        cout << time << endl;
    }
    return 0;
}