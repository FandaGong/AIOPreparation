/*
 * Solution Template for Jump on Platforms
 * 
 * Australian Informatics Olympiad 2026
 * 
 * This file is provided to assist with reading of input and writing of output
 * for the problem. You may modify this file however you wish, or
 * you may choose not to use this file at all.
 */

#include <cstdio>

/* N is the number of platforms. */
int N;
/*
 * P contains the platform positions. The array starts from 0, so the positions
 * are P[0] to P[N-1].
 */
int P[200005];

int first;
int second;

int answer;
int newAnswer;
int main(void) {
  /* Read the number of platforms and their positions. */
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    scanf("%d", &P[i]);
  }

  for (int i = 0; i < N; i++) {
    first = P[i];
    second = P[i + 1];
    answer = second - first;
    if (newAnswer > answer) {
      answer = newAnswer;
    } else {
        newAnswer = answer;
    }
  }

  /*
   * TODO: Compute the length of the longest required jump and store it in
   * answer.
   */

  /* Write the answer. */
  printf("%d\n", answer);

  return 0;
}
