#include<iostream>
#include<cmath>


using namespace std;

int suma(int);
void Ejercicio_1();
void Ejercicio_2();
float Ejercicio_3();

int main(){
	int menu;
 	do{
		cout<<endl;
		cout<<"1)- Ejercicio 1\n"<<
		"2)- Ejercicio 2\n"<<
		"3)-  Ejercicio 3\n"<<
		"4)- Salir\n"<<
		"Ingrese Numero de Ejercicio: ";
		cin>>menu;
		switch (menu){
			case 1: Ejercicio_1();
				break;
			case 2: 
				Ejercicio_2(); 
				break;
			case 3:
				cout<<"La distancia entre los puntos es "<<Ejercicio_3()<<endl;
				break;	
	}
	}while(menu !=4);
	 cout<<"Salio del Programa!";	
	return 0;
}
void Ejercicio_1(){
	int n1, n2;
	cout<<"Ingrese el primer numero: ";
	cin>>n1;
	cout<<"Ingrese el segundo numero: ";
	int suma_1=1, suma_2=1;
	cin>>n2;
	suma_1=suma(n1);
	suma_2=suma(n2);
	if((suma_1==n2)&&(suma_2==n1)){
		cout<<"Los numeros "<<n1<<" y "<<n2<<" son Amigos";
	}else{
		cout<<"los numeros "<<n1<<" y "<<n2<<" no son amigos";
	}
	
}
int suma(int n1){
	int n2=1;
	for(int i=2;i<n1;i++){
		if(n1 % i==0){
			n2+=i;
		}
	}
	return n2;
}
void Ejercicio_2(){
	int n;
	cout<<"Ingrese Cantidad de Iteraciones: ";
	cin>>n;
	int cant_impa=1;
	int cant_impa2=1;
	int sum=13;
	int acum=1;
	int sum2=0;
	for(int i=1;i<=n;i++){
		cout<<sum<<"=";
		while(cant_impa2<=cant_impa){
			cout<<acum<<"+";
			sum2=acum;
			acum+=2;
			cant_impa2++;	
		}
		cant_impa2=1;
		cout<<"="<<pow(i,3)<<endl;
		cant_impa++;
		sum+=10;
	}
}

float Ejercicio_3(){
	float x1,x2,y1,y2;
	cout<<"Ingrese X1: ";
	cin>>x1;
	cout<<"Ingrese X2: ";
	cin>>x2;
	cout<<"Ingrese Y1: ";
	cin>>y1;
	cout<<"Ingrese Y2: ";
	cin>>y2;
	return sqrt(pow((x2-x1),2)+pow((y2-y1),2));
}
