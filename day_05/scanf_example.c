#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kullanıcıdan 2 adet sayı ve isminin baş harfini alınız ilk sayim bu
    // 2. sayım bu ismimim baş harfi bu şeklinde ekrana bastırınız

    int ilksayim;
    float ikincisayim;
    char basharf;


    printf("Lutfen isminizin bas harfini giriniz\n");
    scanf("%c",&basharf);

    printf("Lutfen ilk sayiyi giriniz\n");
    scanf("%d",&ilksayim);

    printf("Lutfen ikinci sayiyi giriniz\n");
    scanf("%f",&ikincisayim);


    printf("Ilk sayim:%d Ikinci sayim:%f Isminizin bas harfi %c",ilksayim,ikincisayim,basharf);


    return 0;
}
