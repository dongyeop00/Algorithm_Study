#include <iostream>

using namespace std;

int N;
int children[10] = { 0, };
int after[10] = { 0, };
int half[10] = { 0, };
int phase;

void makeEven() {
    for (int i = 0; i < N; i++) {
        if (children[i] % 2 != 0) {
            children[i]++;
        }
    }
}

void makeHalf() {
    for (int i = 0; i < N; i++) {
        half[i] = children[i] / 2;
    }
}

void play() {
    for (int i = 0; i < N; i++) {
        after[(i + 1) % N] += half[i];
        children[i] -= half[i];
    }
    for (int i = 0; i < N; i++) {
        children[i] += after[i];
        after[i] = 0;
    }
}

bool isEqual() {
    int temp = children[0];
    for (int i = 1; i < N; i++) {
        if (children[i] != temp) {
            return false;
        }
    }
    return true;
}

int main() {
    int testCase;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        cin >> N;
        phase = 0;

        for (int j = 0; j < N; j++) {
            cin >> children[j];
        }

        if (N == 1) {
            cout << phase << endl;
            continue;
        }

        while (true) {
            makeEven();
            if (isEqual()) {
                cout << phase << endl;
                break;
            }

            makeHalf();
            play();
            phase++;
        }
    }

    return 0;
}
