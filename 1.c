#include <stdio.h>
#define COL 10
#define FILAS 10

int main() {
    int M[COL][FILAS], i, j, col, filas, check=0;
    printf("\nDame el numero de columnas: ");
    scanf("%d", &col);
    printf("\nDame el numero de filas: ");
    scanf("%d", &filas);

    for(i = 0; i<filas ; i++) {
        for(j = 0; j<col ; j++) {
            printf("fila %d dime un numero para la columna %d: ", i+1, j+1);
            scanf("%d", &M[i][j]);
        }
    }
    for(i = 0; i<filas && check==0 ; i++) {
    for(j = 0; j<col && check==0 ; j++) {

            if(j == col-1 && i != filas-1) { // última columna de la fila
                if(M[i][j] <= M[i+1][j])
                    check=0;
                else {
                    check=1;
                    printf("\n\t\t %d no es menor o igual a %d, la matriz no es creciente", M[i][j], M[i+1][j]);
                }
            } else if(i == filas-1 && j != col-1) { // Última fila
                if(M[i][j] <= M[i][j+1])
                    check=0;
                else {check=1;
                    printf("\n\t\t %d no es menor o igual a %d, la matriz no es creciente", M[i][j], M[i][j+1]);
                }
            } else if ((j == col-1)&&(i == filas-1)) // Último
                check=0;
            else{
                if(M[i][j] <= M[i+1][j] && M[i][j] <= M[i][j+1])
                    check=0;
                else check=1;
            }

        }
    }
    if(check==0) printf("\n\t La matriz es creciente!");

    return 0;
}
