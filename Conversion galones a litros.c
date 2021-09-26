#include <stdio.h>
int main ()
{
	float galones, litros;
	int conv;
	
	printf("Coversion galones a litros y litros a galones");
	printf("Galones a litros-->1\nLitros a galones-->2\n:");
	scanf("%d",&conv);
	if(conv==1){
	printf("\nIntroduzca su volumen:");
	scanf("%f", &galones);
	litros = galones * 3.785;
	printf ("\nLa cantidad en litros es:%1.2f", litros);
	}
	else if(conv==2){
		printf("\nIntroduzca su volumen:");
		scanf("%f", &litros);
		galones = litros / 3.785;
		printf ("\nLa cantidad en galones es:%1.2f", galones);
	}
		
	
	return 0;
}
