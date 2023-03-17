# include <stdio.h>
void orden(int a, int b);
int cuadrados(int x);
void contenido(int x);
void Invertir(int a,int b);
int main(){
    int x;
    int y;
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &x, &y);
    printf("\nPRUEBA FUNCION CUADRADOS: ");
    int cuadrado= cuadrados(x);
    printf("\n  El cuadrado del primer numero es: %d", cuadrado);
    printf("\n\nPRUEBA CONTENIDO: ");
    contenido(x);
    printf("\n\nPRUEBA INVERTIR:");
    Invertir(x,y);
    printf("\n\nPRUEBA ORDEN: ");
    orden(x,y);


}
int cuadrados(int x){
    return(x*x);
}
void contenido(int x){
    printf("\n Contenido: %d", x);
    printf("\n Direccion: %p", &x);

}
void Invertir(int a,int b){
    int aux;
    aux=a;
    a=b;
    b=aux;
    printf("\nAhora, el valor de a es %d y el valor de b es %d",a,b);
}
void orden(int a, int b){
    int aux;
    if(b>a){
        aux = a;
        a = b;
        b= aux;
    }
    printf("El mayor valor es %d y el menor valor es %d",a, b);
}
