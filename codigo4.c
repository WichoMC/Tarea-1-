#include<stdio.h>
#include<stdlib.h>
int main()
{

    float **arreglo2d;
    int nren,ncol;
    system("cls");
    printf("numero de renglones bro");
    scanf("%d",&nren);
    printf("\nnumero de columnas bro");
    scanf("%d",&ncol);
    
    arreglo2d= (float **)malloc(nren*sizeof(int*));//reservas espacio para renglones

    for(int i=0; i<nren; i++)
        arreglo2d[i] = (float *)malloc(ncol*sizeof(int));//usa ciclo para reservar memoria 
    
    system("cls");//recorta el programa, cuando se ejecuta se elimina lo ejecutado 
    for(int i=0;i<nren;i++){//pedir al usuario los valores de la matriz
        for(int j=0;j<ncol;j++){
            printf("\nDame el valor del espacio[%d][%d]= ",i,j);
            scanf("%f",&arreglo2d[i][j]);
        }
    }
    printf("***************DATOS*****************\n");//imprime matriz
    for(int i=0;i<nren;i++){
        for(int j=0;j<ncol;j++){
            printf("%5.2f",arreglo2d[i][j]);
        }
        printf("\n");
    }
    free(arreglo2d);//libera memoria que reservaste con malloc
    system("pause");//pone pausa el programa  
    return 0;

    }
