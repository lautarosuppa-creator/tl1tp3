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
void buscarNombre(int id, char * nombres[5]) {
    if (id != 0 && id <= 5)
    {
        printf("El nombre en el indice %d es: %s", id, nombres[id-1]);
    }
    else
    {
        puts("Indice invalido");
    }
    
}

void buscarNombreMain(char letra[20], char * nombres[5]) {
    int i=0, encontrado=0;
    while (i < 5){
        if (strstr(nombres[i], letra) != NULL)
        {
        printf("El nombre que contiene la letra %s es: %s", letra, nombres[i]);
        encontrado=1;
        }
    i++;
    }
    if (!encontrado)
    {
        puts("No se encontro el nombre, error -1");
    }
}

int main()
{
    char * nombres[5];
    CargarNombres(nombres);
    MostrarNombres(nombres);
    int id;
    puts("Ingrese el Id del nombre a buscar");
    scanf("%d", &id);
    buscarNombre(id, nombres);
    char letra[20];
    puts("Ingrese la letra de la palabra clave a buscar");
    scanf(" %s", letra);
    buscarNombreMain(letra, nombres);
    return 0;
}