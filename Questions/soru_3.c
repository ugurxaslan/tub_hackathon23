#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("calisan sayisini giriniz : ");
    int n;scanf("%d",&n);
    int kombinasyon=0;
    for(int k=1;k<n/2+1;k++){//k ekip lideri sayısı n çalışan sayısı
        //her ekipte 1 çalışan olmalı k!=n olmalı bu yüzden
        if((n-k)%k==0){
            printf("%d ekip lideri ;her ekipte %d calisan\n",k,(n-k)/k);
            kombinasyon++;
        }
    }
    printf("%d farkli ekip olusturulabilir\n",kombinasyon);
    scanf("%d");
    return 0;
}
