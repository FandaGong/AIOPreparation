/*
 * Solution Template for Sunday Drive II
 *
 * Australian Informatics Olympiad 2026
 *
 * This file is provided to assist with reading of input and writing of output
 * for the problem. You may modify this file however you wish, or
 * you may choose not to use this file at all.
 */

#include <cstdio>
#include <vector>
#include <algorithm>

/* N is the length of the street. */
int N;
/* V contains the volume limits. The array starts from 0. */
int V[200005];

using namespace std;
long long answer;
int main(void)
{
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &V[i]);
    }

    std::vector<long long> F(N);
    std::vector<long long> B(N);

    long long prev = 0; // Volume before kilometre 0 is 0
    for (int i = 0; i < N; i++)
    {
        F[i] = std::min<long long>(V[i], prev + 1);
        prev = F[i];
    }
    long long next_val = V[N - 1];
    for (int i = N - 2; i >= 0; i--)
    {
        B[N - 1] = V[N - 1]; 
        B[i] = std::min<long long>(V[i], next_val + 1);
        next_val = B[i];
    }

    /*
     * Please note that the answer may exceed the maximum value
     * that can be stored in an "int" integer type.
     * Because of this, you should use the "long long" integer type
     * instead of "int" when computing your solution.
     */
    /* TODO: Compute the maximum enjoyment and store it in answer. */
    for (int i = 0; i < N; i++)
    {
        answer += std::min(F[i], B[i]);
    }
    /* Write the answer. */
    printf("%lld\n", answer);

    return 0;
}
