#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <cstdlib>
#include<iostream>
using namespace std;

char letram(char cadena[]);
char letrau(char cadena[]);
char letrar(char cadena[]);
char letrac(char cadena[]);
char letrai(char cadena[]);
char letrae(char cadena[]);
char letral(char cadena[]);
char letraa(char cadena[]);
char letrag(char cadena[]);
char letrao(char cadena[]);

int main(){

    char cadena[100], caract1, caract2;
    int cont1;
    system("cls");
    cout<<"Inrese la frase a codificar: "<<endl;
    cin.getline(cadena,40);//obtiene cadena


    for(cont1=0; cont1<=strlen(cadena)-1;cont1++){//recorre cadena
        letram(cadena);
        letrau(cadena);
        letrar(cadena);
        letrac(cadena);
        letrai(cadena);
        letrae(cadena);
        letral(cadena);
        letraa(cadena);
        letrag(cadena);
        letrao(cadena);
    }    

    cout<<"La nueva cadena es: "<<cadena<<endl;

    return 0;
}

char letram(char cadena[]){
    char caract2;
    int cont1;
    for(cont1=0;cont1<=strlen(cadena)-1;cont1++){
        if(cadena[cont1]=='m'){
            caract2='0';
            cadena[cont1]=caract2;
        }
    }
    return cadena[cont1];
}

char letrau(char cadena[]){
    char caract2;
    int cont1;
    for(cont1=0;cont1<=strlen(cadena)-1;cont1++){
        if(cadena[cont1]=='u'){
            caract2='1';
            cadena[cont1]=caract2;
        }
    }
    return cadena[cont1];
}
char letrar(char cadena[]){
    char caract2;
    int cont1;
    for(cont1=0;cont1<=strlen(cadena)-1;cont1++){
        if(cadena[cont1]=='r'){
            caract2='2';
            cadena[cont1]=caract2;
        }
    }
    return cadena[cont1];
}
char letrac(char cadena[]){
    char caract2;
    int cont1;
    for(cont1=0;cont1<=strlen(cadena)-1;cont1++){
        if(cadena[cont1]=='c'){
            caract2='3';
            cadena[cont1]=caract2;
        }
    }
    return cadena[cont1];
}
char letrai(char cadena[]){
    char caract2;
    int cont1;
    for(cont1=0;cont1<=strlen(cadena)-1;cont1++){
        if(cadena[cont1]=='i'){
            caract2='4';
            cadena[cont1]=caract2;
        }
    }
    return cadena[cont1];
}
char letrae(char cadena[]){
    char caract2;
    int cont1;
    for(cont1=0;cont1<=strlen(cadena)-1;cont1++){
        if(cadena[cont1]=='e'){
            caract2='5';
            cadena[cont1]=caract2;
        }
    }
    return cadena[cont1];
}
char letral(char cadena[]){
    char caract2;
    int cont1;
    for(cont1=0;cont1<=strlen(cadena)-1;cont1++){
        if(cadena[cont1]=='l'){
            caract2='6';
            cadena[cont1]=caract2;
        }
    }
    return cadena[cont1];
}
char letraa(char cadena[]){
    char caract2;
    int cont1;
    for(cont1=0;cont1<=strlen(cadena)-1;cont1++){
        if(cadena[cont1]=='a'){
            caract2='7';
            cadena[cont1]=caract2;
        }
    }
    return cadena[cont1];
}
char letrag(char cadena[]){
    char caract2;
    int cont1;
    for(cont1=0;cont1<=strlen(cadena)-1;cont1++){
        if(cadena[cont1]=='g'){
            caract2='8';
            cadena[cont1]=caract2;
        }
    }
    return cadena[cont1];
}
char letrao(char cadena[]){
    char caract2;
    int cont1;
    for(cont1=0;cont1<=strlen(cadena)-1;cont1++){
        if(cadena[cont1]=='o'){
            caract2='9';
            cadena[cont1]=caract2;
        }
    }
    return cadena[cont1];
}