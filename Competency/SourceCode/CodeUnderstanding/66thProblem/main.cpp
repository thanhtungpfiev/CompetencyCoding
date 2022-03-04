#include <iostream>
#include <algorithm>
using namespace std;

int N; // Number of executable code data
int M; // Number of virus data
int A[20000 + 10]; // Executable code data
int B[10 + 10]; // Virus data

int sol; // Correct answer

void InputData(void)
{
    int i;

    cin >> N >> M;

    for (i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (i = 0; i < M; i++) {
        cin >> B[i];
    }
}

void OutputData(void)
{
    cout << sol;
}

int Find(int start)
{
    int i;
    int diff = B[0] - A[start];
    for (i = 1; i < M; i++) {
        if (B[i] != A[start + i] + diff) return 0;
    }
    return 1;
}

void Solve(void)
{
    int i;
    sort(B, B + M);
    do {
        for (i = 0; i <= N - M; i++) {
            sol += Find(i);
        }
    } while (std::next_permutation(B, B + M));
}

int main(void)
{
    InputData(); // Input

    Solve(); // Problem solving

    OutputData(); // Output

    return 0;
}
