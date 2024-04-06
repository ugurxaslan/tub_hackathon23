#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){



    long long kirk_bit_max_value=1;
    for(int i=0;i<40;i++){
        kirk_bit_max_value*=2;
    }
    kirk_bit_max_value-=1;//2**40-1 sayısı 40 bitle temsil edilen en büyük sayidir
    long long sayi=kirk_bit_max_value;
    printf("sayi = %lld",kirk_bit_max_value);//lld=long long d anlamında
    for(long long j=sayi;j>0;j-=2){
        int flag=0;
        for(long long i=3;i<sqrt(j);i+=2){
            if(j%i==0){
                printf("\nbreak oldu = %lld,%lld",j,i);
                flag=1;
                break;
            }
        }
        if(flag==1){
                continue;
        }
        else {
            sayi=j;
            break;//buraya gelmişse üstteki forda break olmamıştır ve gelen sayi asaldır
        }
    }
    printf("\naranan asal = %lld",sayi);
    scanf("%d");
    return 0;
}
