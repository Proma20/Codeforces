#include<bits/stdc++.h>

using namespace std;

int frequency[100005];
int prime[100005];

void SieveOfEratosthenes()
{
    for (int p = 3; p * p < 100005; p += 2)
    {
        if (prime[p] == 0)
        {
            for (int i = p*p; i < 100005; i += p)
                prime[i] = 1;
        }
    }

}

int main()
{
    SieveOfEratosthenes();
    int n, arr[100005], ans = 1;

    cin >> n;


    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        frequency[arr[i]]++;
    }

    for (int i = 2; i < 100005; i++)
    {
        int counter = 0;

        if (prime[i] == 1) continue;

        for (int j = i; j < 100005; j += i)
        {
            counter += frequency[j];
        }

        ans = max(ans, counter);
    }

    cout << ans << endl;

    return 0;
}
