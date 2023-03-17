# include <stdio.h>
int main(){
    printf("Hola mundo");
    int x = 7;
    int * px = &x;
    printf("\nContenido del puntero(%d)", (*px));
    printf("\ndireccion de memoria almacenada por el punter %p", &x);
    printf("\nDireccion de memoria puntero: %p", &px);
    printf("\nTamanio de memoria utlizado por esa variable: %i",sizeof(px));
    printf("\nDireccion de memoria almacenada por el puntero %p", px);
    return(0);
}
