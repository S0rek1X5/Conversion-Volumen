#include<iostream>
using namespace std;
int main(){
	float galones, litros;
	int conv, opc;
	cout<<"------BIENVENIDO------\n"<<endl;
	do{
		cout<<"Coversion galones a litros y litros a galones";
		cout<<"\nGalones a litros-->1\nLitros a galones-->2\n: ";cin>>conv;
		if(conv==1){
			cout<<"\nIntroduzca su volumen: ";cin>>galones;
			litros = galones * 3.785;
			cout<<"\nLa cantidad en litros es: "<<litros;
		}
		else if(conv==2){
			cout<<"\nIntroduzca su volumen: ";cin>>litros;
			galones = litros / 3.785;
			cout<<"\nLa cantidad en galones es: "<<galones;
		}
		else{
			cout<<"ERROR Digite correctamente que conversion desea realizar";
		}
		cout<<"\nMarque 1 para CONTINUAR --- Marque 2 para SALIR: ";cin>>opc;
		cout<<"\n----------------------------------\n";
	}while(opc==1);
	return 0;
}
