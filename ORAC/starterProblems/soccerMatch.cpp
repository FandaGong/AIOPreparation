/*
 * Solution Template for Soccer Match
 * 
 * Australian Informatics Olympiad 2025
 * 
 * This file is provided to assist with reading of input and writing of output
 * for the problem. You may modify this file however you wish, or
 * you may choose not to use this file at all.
 */

#include <cstdio>

/* N is the number of goals. */
int N;

/*
 * G contains the goals. Note that the array starts from 0, and so the values
 * are G[0] to G[N-1].
 */
int G[200005];

int main(void) {
  /* Read the value of N and the sequence of goals. */
  scanf("%d", &N);
  int t1 = 0, t2 = 0;
  for (int i = 0; i < N; i++) {
    scanf("%d", &G[i]);
    if (G[i] == 1) {
      t1++;
    } else {
      t2++;
    }
    if(t1 > t2) {
        printf("YES\n");
        return 0;
    }
  }

  if (!(t1 > t2)) {
    printf("NO\n");
  }

  /*
   * TODO: This is where you should compute your solution. You should output
   * YES or NO depending on whether there was any point during the game where
   * Team 1 had more goals than Team 2. An example of how to output YES is
   * shown below.
   */

  return 0;
}
