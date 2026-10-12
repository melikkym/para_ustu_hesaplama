#include <stdio.h>

int main()
{
    float urunTutari, odenenPara;  
    int kurus;                     
    int tl200, tl100, tl50, tl20, tl10, tl5, tl1;  
    int k50, k25, k10, k5, k1;               
    int toplam;                             
    printf("urun tutarini girin (TL): ");
    scanf("%f", &urunTutari);

    printf("odenen parayi girin (TL): ");
    scanf("%f", &odenenPara);

    kurus = (int)((odenenPara - urunTutari) * 100 + 0.5);
    printf("\nPara ustu: %d kurus\n\n", kurus);

    tl200 = kurus / 20000;
    kurus = kurus % 20000;

    tl100 = kurus / 10000;
    kurus = kurus % 10000;

    tl50 = kurus / 5000;
    kurus = kurus % 5000;

    tl20 = kurus / 2000;
    kurus = kurus % 2000;

    tl10 = kurus / 1000;
    kurus = kurus % 1000;

    tl5 = kurus / 500;
    kurus = kurus % 500;

    tl1 = kurus / 100;
    kurus = kurus % 100;

    k50 = kurus / 50;
    kurus = kurus % 50;

    k25 = kurus / 25;
    kurus = kurus % 25;

    k10 = kurus / 10;
    kurus = kurus % 10;

    k5 = kurus / 5;
    kurus = kurus % 5;

    k1 = kurus;

    toplam = tl200 + tl100 + tl50 + tl20 + tl10 + tl5 + tl1 + k50 + k25 + k10 + k5 + k1;

    printf("200 TL : %d adet\n", tl200);
    printf("100 TL : %d adet\n", tl100);
    printf("50 TL  : %d adet\n", tl50);
    printf("20 TL  : %d adet\n", tl20);
    printf("10 TL  : %d adet\n", tl10);
    printf("5 TL   : %d adet\n", tl5);
    printf("1 TL   : %d adet\n", tl1);
    printf("50 kr  : %d adet\n", k50);
    printf("25 kr  : %d adet\n", k25);
    printf("10 kr  : %d adet\n", k10);
    printf("5 kr   : %d adet\n", k5);
    printf("1 kr   : %d adet\n", k1);

    printf("\nMusteriye verilen toplam kupur sayisi: %d\n", toplam);

    return 0;
}