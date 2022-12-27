#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	int sinifsecim,koltuksecim,i,j;
	int koltuklar[10]={};
	char isim[50];
	char soyisim[50];
	printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
	printf("    UCUS REZERVASYON UYGULUMASINA HOS GELDINIZ ");
	printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");

	for (j=0; j<10; j++)
	{
		printf("    Isminiz: ");
		scanf("%s",isim);
		printf("    Soyadiniz: ");
		scanf("%s",soyisim);
	    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
		printf("   Hangi sinifta ucmak istersiniz ?\n\n   [1] Business Class\n   [2] Economic Class\n\n");
		printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
		printf("   Secim: ");
		scanf("%d",&sinifsecim);
		switch(sinifsecim)
		{
		case 1:
		    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
			printf("   Business class\n\n");
			printf("   Musait Koltuklar\n     |1|2|3|4|5|\n     |6|7|8|9|10|\n");
			printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
			do
			{
                printf("   Koltuk secin: ");
                scanf("%d",&koltuksecim);
                koltuklar[j]=koltuksecim;
			    for (i=0; i<j; i++)
			    {
                    if (koltuklar[j]==koltuklar[i])
                    {
                        printf("\n\n   Bu koltuk baskasi tarafindan alinmis.\n\n");
                        break;
                    }
			    }
            }
            while (i!=j);
                if(koltuklar[j] <= 10)
                {
                    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    printf("\n");
                    printf("\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd BILET \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    printf("   Isim : %s\n",isim);
                    printf("   Soyisim : %s\n",soyisim);
                    printf("   Sinif: Business class\n");
                    printf("   Koltuk numarasi : %d\n",koltuklar[j]);
                    printf("\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    printf("\n");
                    system("pause");
                    system("cls");
                }
                else
                printf("\nHatali sayi! Boyle bir koltuk numarasi bulunmamakta!\n\n");
            break;
		case 2:
			printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
			printf("   Economical class\n\n");
			printf("   Musait Koltuklar\n    |11|12|13|14|15|\n\n");
			printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
			do
			{
                printf("   Koltuk secin: ");
                scanf("%d",&koltuksecim);
                koltuklar[j]=koltuksecim;
			    for (i=0; i<j; i++)
			    {
                    if (koltuklar[j]==koltuklar[i])
                    {
                        printf("\n\n   Bu koltuk baskasi tarafindan alinmis.\n\n");
                        break;
                    }
			    }
            }
            while (i!=j);
                if(koltuklar[j] >= 11)
                {
                    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    printf("\n");
                    printf("\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd BILET \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    printf("   Isim : %s\n",isim);
                    printf("   Soyisim : %s\n",soyisim);
                    printf("   Sinif: Economical class\n");
                    printf("   Koltuk numarasi : %d\n",koltuklar[j]);
                    printf("\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    printf("\n");
                    system("pause");
                    system("cls");
                }
                else
                printf("\nHatali sayi! Boyle bir koltuk numarasi bulunmamakta!\n\n");
            break;
        default:
                break;
        }
    }
	return 0;
}
