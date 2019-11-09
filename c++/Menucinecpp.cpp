#include <iostream>
using namespace std;

void menu(){
    cout<<"\nMenu de cine: \n1. Peliculas\n2. Comida\n3. Salir\nEliga una opcion: ";
}
void menu2(){
    cout<<"\nPeliculas en carteleta: \n1. Titanic \n2. Joker \n3. Yo antes de ti \nEliga una opcion: ";
}

void horarios(int pelicula){
    switch(pelicula){
        case 1:
        cout<<"\nHorarios en cartelera: \n3:30pm\n8:00pm"<<endl;
        break;
        case 2:
        cout<<"\nHorarios en cartelera: \n4:30pm\n9:00pm"<<endl;
        break;
        case 3:
        cout<<"\nHorarios en cartelera: \n5:30pm\n10:00pm"<<endl;
        break;
        default:
        cout<<"\nOpcion invalida"<<endl;
        break;
    }
}

void comida(){
    cout<<"\nMenu de comida: \n1. Palomitas de maiz\n2. Hot dog\n3. Nachos\nQue precios desea ver (digite la opcion): ";
}

void precios(int opcioncomida){
    switch(opcioncomida){
        case 1:
        cout<<"\nPequeña: $3.50\nMediana: $4.50\nGrande: $5.50"<<endl;
        break;
        case 2:
        cout<<"\n$3.50"<<endl;
        break;
        case 3:
        cout<<"\nOrden pequeña: $2.50\nOrden mediana: $3.50\nOrden grande: $4.50"<<endl;
        break;
        default:
        cout<<"\nOpcion invalida"<<endl;
        break;
    }
}
int main()
{
    int opcion=0, pelicula, opcioncomida;
    menu();
    cin>>opcion;
    while(opcion!=3){
        switch(opcion){
            case 1:
            menu2();
            cin>>pelicula;
            horarios(pelicula);
            break;
            case 2:
            comida();
            cin>>opcioncomida;
            precios(opcioncomida);
            break;
        }
        if(opcion>3){
            cout<<"\nOpcion invalida"<<endl;
        }
        menu();
        cin>>opcion;
    }
    if(opcion==3){
        cout<<"\nSalida exitosa"<<endl;
    }

    return 0;
}
