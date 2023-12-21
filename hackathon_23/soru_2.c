#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int OFF=-2000000000;
int main()
{
    int dizi[22]={1,1,1,1,2,2,2,2,2,2,3,3,3,8,8,8,8,8,10,10,10,11};
    int uzunluk=sizeof(dizi)/sizeof(dizi[0]);
    int iter=1;

    for(int i=0;i<uzunluk-1;i++){//null yapma

        while(dizi[i]==dizi[i+iter]){//kendinden sonraki aynılarını null yapar
            dizi[i+iter]=OFF;
            iter++;
        }
        i=i+iter-1;
        iter=1;
    }//for + while = n kez çalışır n*n değil

    iter=1;
    for(int i=0;i<uzunluk;i++){//görülen ilk null değerine görülen ilk tam sayıyı atama
        if(dizi[i]==OFF){
            while(iter<uzunluk-1&&dizi[iter]==OFF)iter++;
            dizi[i]=dizi[iter];
            dizi[iter]=OFF;//atadığımızı silme
        }
    }//for + while = n kez çalışır n*n değil
    for(int i=0;i<uzunluk;i++){
        printf("%d ",dizi[i]);
    }
    scanf("%d");
    return 0;
}
