//Pedir tres números al usuario y decir cuál es el mayor. 
//Realizar una función llamada int EstMayor(int a, int b, int c) que devuelva el mayor de los 3 números.

#include<iostream>
using namespace std;

int EstMayor(int a, int b, int c){

int mayor;
 if(a>b && b>c && c<a){
 	mayor=a;
 }
if(a>c && c>b && b<a){
 	mayor=a;
 }
if(b>a && a>c && c<b){
 	mayor=b;
 }
 if(b>c && c>a && a<b){
 	mayor=b;
 }
 if(c>a && a>b && b<c){
 	mayor=c;
 }
 if(c>b && b>a && a<c){
 	mayor=c;
 }
 return mayor;
}
int main () {
int n1, n2, n3;
int mayor3;

cout<<"ingrese un numero: ";
cin>>n1;

cout<<"ingrese un otro numero: ";
cin>>n2;	
	
cout<<"ingrese un numero mas: ";
cin>>n3;	
	
mayor3 = EstMayor(n1, n2, n3);

cout<<"el mayor de los tres numeros es "<<mayor3;
	return 0;
}
