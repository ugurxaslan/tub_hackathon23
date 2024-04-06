#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int SIZE=100;
int COUNT=0;

int basamak_kareleri_toplami(int a){
    int toplam=0;
    while(a>0){
        toplam+=(a%10)*(a%10);
        a=a/10;
    }
    return toplam;
}

int dizide_ara(int dizi[SIZE],int aranan){
    for(int i=0;i<COUNT;i++){
        if(dizi[i]==aranan)return 1;
    }
    return 0;
}

int main()
{
    printf("n tam sayisini giriniz : ");
    int n;scanf("%d",&n);
    int dizi[SIZE];
    dizi[COUNT]=n;//ilk elemanı yazdım listeye
    COUNT++;
    int temp1=n;
    while(1){
        int temp2=basamak_kareleri_toplami(temp1);
        printf("%d->%d\n",temp1,temp2);
        if(1==temp2){//sonuç 1 ise mutlu
            printf("%d mutlu sayidir.",n);
            return 0;
        }
        if(dizide_ara(dizi,temp2)){//listede varsa mutlu değil
            printf("%d mutlu sayi degildir.",n);
            return 0;
        }
        else{//listeye ekle devam
            dizi[COUNT]=temp2;
            COUNT++;
            temp1=temp2;
        }
    }
    return 0;
}