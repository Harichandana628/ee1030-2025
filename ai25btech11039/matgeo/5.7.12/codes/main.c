#include <stdio.h>

int main() {
    // given matrix A
    int A[2][2] = {{4, 2}, {-1, 1}};

    // Step 1: form (A - 2I)
    int A2I[2][2] = {
        {A[0][0] - 2, A[0][1]},
        {A[1][0], A[1][1] - 2}
    };

    // Step 2: form (A - 3I)
    int A3I[2][2] = {
        {A[0][0] - 3, A[0][1]},
        {A[1][0], A[1][1] - 3}
    };

    // Step 3: multiply (A - 2I)(A - 3I)
    int P[2][2];
    P[0][0] = A2I[0][0]*A3I[0][0] + A2I[0][1]*A3I[1][0];
    P[0][1] = A2I[0][0]*A3I[0][1] + A2I[0][1]*A3I[1][1];
    P[1][0] = A2I[1][0]*A3I[0][0] + A2I[1][1]*A3I[1][0];
    P[1][1] = A2I[1][0]*A3I[0][1] + A2I[1][1]*A3I[1][1];

    // Step 4: print all results
    printf("A = [[%d, %d], [%d, %d]]\n", A[0][0], A[0][1], A[1][0], A[1][1]);
    printf("A - 2I = [[%d, %d], [%d, %d]]\n", A2I[0][0], A2I[0][1], A2I[1][0], A2I[1][1]);
    printf("A - 3I = [[%d, %d], [%d, %d]]\n", A3I[0][0], A3I[0][1], A3I[1][0], A3I[1][1]);
    printf("(A - 2I)(A - 3I) = [[%d, %d], [%d, %d]]\n",
           P[0][0], P[0][1], P[1][0], P[1][1]);

    // Step 5: check if result is zero matrix
    if (P[0][0]==0 && P[0][1]==0 && P[1][0]==0 && P[1][1]==0)
        printf(" Verified: (A - 2I)(A - 3I) = 0 (Zero matrix)\n");
    else
        printf(" Not zero — check calculations.\n");

    return 0;
}
