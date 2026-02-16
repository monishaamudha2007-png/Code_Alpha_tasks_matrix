#include <stdio.h>

void add(int A[2][2], int B[2][2]) {
    int i,j,C[2][2];

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            C[i][j]=A[i][j]+B[i][j];

    printf("\nMatrix Addition:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }
}

void multiply(int A[2][2], int B[2][2]) {
    int i,j,k,C[2][2]={0};

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            for(k=0;k<2;k++)
                C[i][j]+=A[i][k]*B[k][j];

    printf("\nMatrix Multiplication:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }
}

void transpose(int A[2][2]) {
    int i,j;

    printf("\nTranspose of Matrix A:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
            printf("%d ",A[j][i]);
        printf("\n");
    }
}

int main() {
    int A[2][2], B[2][2];
    int i,j;

    printf("Enter Matrix A:\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&A[i][j]);

    printf("Enter Matrix B:\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&B[i][j]);

    add(A,B);
    multiply(A,B);
    transpose(A);

    return 0;
}