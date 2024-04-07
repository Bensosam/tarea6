 #include <iostream>
 using namespace std;
 
 int suma (int num1, int num2, int num3){
 	int resultado = 0;
 	num1+=1;
 	num2+=1;
 	num3+=1;
 	resultado = num1 + num2 + num3;
 	cout <<resultado<<endl;
 }
 
 void suma (int &num1, int &num2){
 	int resultado = 0;
 	num1+=1;
 	num2+=1;
 	resultado = num1 + num2;
 	cout <<resultado<<endl;
 }
main () {
	int a=10, b=20;
	suma(a,b);
	cout <<"a: "<<a<<endl;
	cout <<"e "<<a<<endl;
	
	
	system ("pause");
	
	
	
}