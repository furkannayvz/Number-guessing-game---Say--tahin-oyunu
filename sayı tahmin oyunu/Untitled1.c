#include <stdio.h>
#include <time.h>


int main(){
	
	int sayi,i=1,tahmin;
	printf(" \n\n  *****1-100 ARASINDA SAYI TAHMIN ETME OYUNU***** \n\n");
	while(1)
	{
		
		srand(time(NULL));
		sayi=rand()%100+1;
		printf(" 8 hakkiniz var. Sayiyi tahmin edin: ");
		scanf("%d",&tahmin);
		
		for(i=1;;i++)
		{
			if(tahmin<sayi)
			{
				printf(" Daha buyuk sayi giriniz: ");
				scanf("%d",&tahmin);
				
				if(i==7)
				{
					printf(" Hakkiniz doldu :( ");
					break;
				}
				
			}
			
			else if(tahmin>sayi)
			{
				
				printf(" Daha kucuk sayi giriniz: ");
				scanf("%d",&tahmin);
				
				if(i==7)
				{
					printf(" Hakkiniz doldu :(");
					break;
				}
			
			}
			
		else if (sayi==tahmin)
		{
			
			printf(" TEBRIKLER SAYIYI BULDUNUZ <3 :) ");
			break;
	
		}
			
	}
		break;
	}

	return 0;
}





