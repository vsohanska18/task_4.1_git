#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, k;
    double P;

    cout << "N = "; cin >> N;

    // 1) while
    P = 1;
    k = 1;
    while (k <= N)
    {
        P *= (1.0 * k * k / (1.0 * N * N)) * cos(1.0 * N * N / (1.0 * k * k));
        k++;
    }
    cout << P << endl;

    // 2) do...while
    P = 1;
    k = 1;
    do {
        P *= (1.0 * k * k / (1.0 * N * N)) * cos(1.0 * N * N / (1.0 * k * k));
        k++;
    } while (k <= N);
    cout << P << endl;

    // 3) for (k збільшується)
    P = 1;
    for (k = 1; k <= N; k++)
    {
        P *= (1.0 * k * k / (1.0 * N * N)) * cos(1.0 * N * N / (1.0 * k * k));
    }
    cout << P << endl;

    // 4) for (k зменшується)
    P = 1;
    for (k = N; k >= 1; k--)
    {
        P *= (1.0 * k * k / (1.0 * N * N)) * cos(1.0 * N * N / (1.0 * k * k));
    }
    cout << P << endl;

    return 0;
}