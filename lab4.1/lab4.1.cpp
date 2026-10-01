#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, i;
    double S;

    cout << "N = ";
    cin >> N;

    // 1. while
    S = 1;
    i = N;

    while (i <= 10)
    {
        S *= (i + 1.0 / (i * i)) / sqrt(1.0 + exp(1.0 / i));
        i++;
    }

    cout << "while: " << S << endl;


    // 2. do...while
    S = 1;
    i = N;

    do
    {
        S *= (i + 1.0 / (i * i)) / sqrt(1.0 + exp(1.0 / i));
        i++;
    } while (i <= 10);

    cout << "do while: " << S << endl;

    // 3. for зі збільшенням
    S = 1;

    for (i = N; i <= 10; i++)
    {
        S *= (i + 1.0 / (i * i)) / sqrt(1.0 + exp(1.0 / i));
    }

    cout << "for ++: " << S << endl;


    // 4. for зі зменшенням
    S = 1;

    for (i = 10; i >= N; i--)
    {
        S *= (i + 1.0 / (i * i)) / sqrt(1.0 + exp(1.0 / i));
    }

    cout << "for --: " << S << endl;

    return 0;
}