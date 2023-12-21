#include <stdio.h>


int main() {
    FILE *dosya;
    char karakter;
    dosya = fopen("pg45631.txt", "r");//okunabilr açıyoruz "r" ile

    int num_count=0;//karakter sayaçlarımız
    int upper_count=0;
    int lower_count=0;

    char str[13];//12 karakterli şifre tutucu
    str[12]='\0';
    
    while ((karakter = fgetc(dosya)) != EOF) {
        
        if(karakter>='A'&&karakter<='Z') {
            upper_count++;
            if(upper_count<=400&&upper_count%100==0){
                str[(upper_count/100-1)*3+0]=karakter;//0-3-6-9 nolu alanlara yerleşmeli
            }
        }
        if(karakter>='a'&&karakter<='z'){
            lower_count++;
            if(lower_count<=400&&lower_count%100==0){
                str[(lower_count/100-1)*3+1]=karakter;//1-4-7-10
            }
        }
        if (karakter>='0'&&karakter<='9') {
            num_count++;
            if(num_count<=400&& num_count%100==0){
                str[(num_count/100-1)*3+2]=karakter;//2-5-8-11
            }
        }
        if(num_count>400 && upper_count>400 && lower_count>400)break;
    }
    
    fclose(dosya);
    printf("%s",str);
    scanf("%d");
    return 0;
}
