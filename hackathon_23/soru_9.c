
#include <stdio.h>
#include <stdlib.h>
//soru 9
int SIZE;

int yesil_alan_toplami(int matris[SIZE][SIZE]){
    int n=SIZE;
    int toplam=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>j&&i+j<n-1  ||  i<j&&i+j>n-1)
                toplam+=matris[i][j];
        }
    }
    return toplam;
}

int main()
{
    printf("soru : 9\n");
    printf("matris boyutunu giriniz : ");
    scanf("%d",&SIZE);
    int n = SIZE;
    int matris[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           matris[i][j]=rand()%10;
           printf("%3d",matris[i][j]);
        }
        printf("\n");
    }
    printf("yesil alan toplami = %d",yesil_alan_toplami(matris));
    scanf("%d");
    return 0;
}
