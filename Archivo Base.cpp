#include<iostream>
#include<cstdlib> //Usat getline
#include<iomanip> //usar setw
using namespace std;

void ingresar(struct alumno est[50], int numero);
void mostrarnombre(struct alumno est[50], int numero);
void aprobados(struct alumno est[50], int numero);
void reprobados(struct alumno est[50], int numero);
void notamayor(struct alumno est[50], int numero);
int numero;

int mayor;

struct alumno{
	int ID;
	char nombre[50];
	int nota;
};

int main ()
{
	struct alumno est[50];
	int numero;
	cout<<"Numero de Estudiantes: ";
	cin>>numero;
	
	ingresar(est, numero);
	cout<<"\n";
	
	mostrarnombre(est, numero);//Muestra listado de alumnos
	cout<<"\n\n";
	aprobados(est, numero);//Muestra listado de alumnos aprobados
	cout<<"\n\n";
	reprobados(est, numero);//Muestra listado de alumnos reprobados
	cout<<"\n\n";
	notamayor(est, numero);//Muestra la nota mayor
	cout<<"\n\n";

	return 0;	
}

void ingresar(struct alumno est[50], int numero){
	
	for(int i=0; i<numero; i++){
		system ("CLS");
		est[i].ID = i + 1;
		cout<<"ID: "<<est[i].ID<<endl;
		cin.ignore();
		cout<<"Nombre del Alumno: ";
		cin.getline(est[i].nombre,50);
		cout<<"Nota: ";
		cin>>est[i].nota,50;
	}
}

//Mostrar listado de alumnos
void mostrarnombre(struct alumno est[50], int numero){
	cout<<"Listado General de Alumnos "<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<setw(7)<<"ID"<<setw(20)<<"Nombre del Alumno"<<endl;	
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	
	for(int i=0; i<numero; i++){
		cout<<setw(7)<<est[i].ID<<setw(20)<<est[i].nombre<<endl;
	}
}

//Alumnos que Aprobaron
void aprobados(struct alumno est[50], int numero){
	cout<<"***** Listado de Alumno Aprobaron ***** "<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<setw(7)<<setw(20)<<"Nombre del Alumno"<<setw(15)<<"Nota"<<endl;	
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	
	for(int i=0; i<numero; i++){
		if(est[i].nota>65)
			{
				cout<<setw(7)<<setw(20)<<est[i].nombre<<setw(15)<<est[i].nota<<endl;
			}
	}
}

//Alumnos Reprobados
void reprobados(struct alumno est[50], int numero){
	cout<<"***** Listado de Alumno que Reprobados ***** "<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<setw(7)<<"Nombre del Alumno"<<setw(15)<<"Nota"<<endl;	
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	
	for(int i=0; i<numero; i++){
		if(est[i].nota<65)
			{
				cout<<setw(7)<<setw(20)<<est[i].nombre<<setw(15)<<est[i].nota<<endl;
			}
	}
}

//Alumno con nota mayor
void notamayor(struct alumno est[50], int numero){
	cout<<"***** Alumno con nota mayor ***** "<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<setw(7)<<"Nombre del Alumno"<<setw(10)<<"Nota"<<endl;	
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	
	for(int i=0; i<numero; i++){
			
		if(est[i].nota>mayor)
		{
			mayor = est[i].nota;
			
			cout<<setw(7)<<est[i].nombre<<setw(15)<<est[i].nota<<endl;
		}
	}
}

