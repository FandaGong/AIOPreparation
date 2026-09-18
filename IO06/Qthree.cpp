/*
 * Solution Template for Discount Destinations
 *
 * Australian Informatics Olympiad 2026
 *
 * This file is provided to assist with reading of input and writing of output
 * for the problem. You may modify this file however you wish, or
 * you may choose not to use this file at all.
 */

#include <cstdio>
#include <algorithm>
#include <vector>

/* N is the number of travel days. */
int N;
/* K is the window length and D is its spending cap. */
int K;
int D;
/* A contains the undiscounted daily costs. The array starts from 0. */
int A[200005];

long long answer = 0;

int main(void)
{
    /* Read N, K, D, and the daily costs. */
    scanf("%d%d%d", &N, &K, &D);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    std::vector<long long> x(N, 0);
    long long currentsum = 0;

    for (int i = 0; i < N; i++)
    {
        long long maxallowed = D - currentsum;
        x[i] = std::max(0LL, std::min((long long)A[i], maxallowed));
        
        answer += x[i];
        currentsum += x[i];

        if (i >= K - 1)
        {
            currentsum -= x[i - K + 1];
        }
    }

    printf("%lld\n", answer);

    return 0;
}
