# include <stdio.h>
int main(){
    printf("Hola mundo");
    int x = 7;
    int * px = &x;
    printf("\n  _Contenido del puntero(%d)", (*px));
    printf("\n  _direccion de memoria almacenada por el punter %p", &x);
    printf("\n  _Direccion de memoria puntero: %p", &px);
    printf("\n  _Tamanio de memoria utlizado por esa variable: %i",sizeof(px));
    printf("\n  _Direccion de memoria almacenada por el puntero %p", px);
    return(0);
}