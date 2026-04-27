#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void CargarNombres(char * nombres[5]) {
    for (int i = 0; i < 5; i++)
    {
        char buff[50];
        puts("Ingrese el nombre");
        scanf("%s", buff);
        int tamCadena = strlen(buff);
        char * cadena = (char *) malloc(tamCadena * sizeof(char)+1);
        if (cadena != NULL)
        {
            strcpy(cadena, buff);
            nombres[i] = cadena; 
        }
    }
}
void MostrarNombres(char * nombres[5]) {
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", nombres[i]);
    }
}

int main()
{
    char * nombres[5];
    CargarNombres(nombres);
    MostrarNombres(nombres);
}