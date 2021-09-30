#include <stdio.h>
int main ()
{
	float galones, litros;
	int conv, opc;
	do{
		printf("Coversion galones a litros y litros a galones");
		printf("\nGalones a litros-->1\nLitros a galones-->2\n:");
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
		else{
			printf("ERROR Digite correctamente que conversion desea realizar");
		}
		printf("\nMarque 1 para CONTINUAR --- Marque 2 para SALIR: ");scanf("%d",&opc);
		printf("\n----------------------------------\n");
	}while(opc==1);
	return 0;
}
