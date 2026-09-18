/*
 * Solution Template for IGM
 *
 * Australian Informatics Olympiad 2026
 *
 * This file is provided to assist with reading of input and writing of output
 * for the problem. You may modify this file however you wish, or
 * you may choose not to use this file at all.
 */

#include <cstdio>

/* N is the number of delegates. */
int N;
/* A contains the delegates' importance values. The array starts from 0. */
int A[200005];

int main(void)
{
    /* Read the number of delegates and their importance values. */
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int less = 0;
    int nextIndex = 0;
    for (int i = 0; i < N; i++)
    {
        nextIndex = (i + 1) % N;
        if (A[i] >= A[nextIndex])
        {
            less++;
        }
    }

    /*
     * TODO: Determine whether a valid starting delegate exists. Output YES or
     * NO. An example YES output is shown below.
     */
    if (less <= 1)
    {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
