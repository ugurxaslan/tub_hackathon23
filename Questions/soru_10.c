#include <stdio.h>
#include <stdlib.h>
//10.soru
int aralarindaAsalmi(int a,int b){
    int big,small;
    if(a<b){big=b;small=a;}//büyük küçük belirleme
    else {big=a;small=b;}
    if(a==b)return 0;//aralarında asal değiller ortak bölenleri var
    for(int i=1;i<=small;i++){//2-küçüksayı  kadar tüm sayıları denicez ortak bölen varmı

        int kalan=big%i;
        if(kalan>0)//kalan varsa i büyük sayıyı bölememiştir diğerine bakmaya gerek yok
            continue;

        kalan=small%i;
        if(kalan==0&&i!=1)//demekki büyük bölündü küçük sayıda bölünürse ortak bölen vardır
            return 0;//aralarında asal değiller ortak bölenleri var
    }
    return 1;//aralarında asallar sadece 1 e bölünüyolar ortak olarak
}

int matrisKararlimi(int n,int matris[n][n]){
    for(int i=0;i<n-1;i++){
    /*son satıra bakmaya gerek yok bu yüzden n-1 eleman kontrol et; çünkü
    n-2 satırında gezerken alt komşu olarak n-1'i kontrol edicez*/
        for(int j=0;j<n-1;j++){
        /*satırın sonuna bakmaya gerek yok bu yüzden n-1 eleman kontrol et; çünkü
        n-2. elemanda sağ komşu olarak n-1'i kontrol edicez*/

            /*her elemanın sağ ve alt komşusu varmı
            diye kontrol edersek tüm elemanları birbiriyle
            kontrol etmiş oluruz bu yüzden üst ve sağ komşuya
            bakmaya gerek yok*/
            if(i+1<=n){//sağ komşusu varmı
                if(0==aralarindaAsalmi(matris[i][j],matris[i][j+1]))
                    return 0;
            }
            if(j+1<=n){//alt komşusu varmı
                if(0==aralarindaAsalmi(matris[i][j],matris[i+1][j]))
                    return 0;
            }
        }
    }
    return 1;
}


int main()
{
    printf("soru : 10");
    printf("\nbu kod 1'den kucukk sayilar ile calismaz");
    printf("\nmatrisin boyutunu giriniz : ");
    int n;
    scanf("%d",&n);
    int matris[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("[%d,%d] giriniz : ",i,j);
            scanf("%d",&matris[i][j]);
        }
    }
    //print  matris
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%4d",matris[i][j]);
        }
        printf("\n");
    }

    if(matrisKararlimi(n,matris))
        printf("matris kararli");
    else
        printf("matris kararli degil");
    scanf("%d",&n);
    return 0;
}