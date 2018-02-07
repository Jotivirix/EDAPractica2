/* Descripción: Curso 2017-2018. Asignatura: Estructuras de datos y algoritmos. Practica 2. Solución a la parte 1 de dicha práctica.
* Autor: 
*/

/* LIBRERÍAS ESTÁNDAR*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <locale.h>


/* ZONA DE DECLARACIÓN DE CONSTANTES*/


#define NOM_FICHERO "conjuntos.txt"
#define NOM_FICH_RESULTADOS "resultados.txt"
#define MAX_CARACTERES 1500
#define N 45
#define M 100
#define MAX_CONJUNTOS 3
#define ERROR_LECT_FICHERO 1
#define CORRECTO 0
#define MAX_NOMBRE_CONJUNTO 20


/* ZONA DE DECLARACIÓN DE TIPOS*/

typedef enum {FALSE, TRUE} tBoolean;

typedef struct {
    char Nombre[MAX_NOMBRE_CONJUNTO];
    unsigned short int Elementos[N];
    short int Ultimo;
} tConjunto;

/* ZONA DE DECLARACIÓN DE PROTOTIPOS DE FUNCIONES */

/* Función: Menu
* Devuelve la opción de menú escogida.
* Parámetros de entrada: 
* no tiene.
* Precondiciones: 
* no tiene 
* Parámetros de salida: 
* Opción de menú escogida. Valor devuelto por la función.
*/
int Menu (void);

int Menu (void);
/* Funcion: IniCjtos
* Inicializa la variable que guardará los conjuntos que se leeran
* del fichero.
* Parámetros de entrada: 
* no tiene 
* Precondiciones: 
* no tiene 
* Parámetros de salida: 
* Conjuntos. Valor devuelto por referencia.
*/
void IniCjtos (tConjunto *Conjuntos);

/* Función: LeeFichero
* Lee un fichero con la información de los conjuntos y almacena la
* información.
* Parámetros de entrada: 
* Nombre de fichero. 
* Precondiciones: 
* no tiene 
* Parámetros de salida: 
* Conjuntos. Valor devuelto por referencia.
* Resultado de la operación. Valor devuelto por la función.
*/
int LeeFichero (char *NomFichero, tConjunto *Conjuntos);

/* Funcion: CjtoVacio
* Construye un conjunto vacio. 
* Parámetros de entrada: 
* no tiene.
* Precondiciones: 
* no tiene 
* Parámetros de salida: 
* Conjunto. Valor devuelto por la función.
*/
tConjunto CjtoVacio (void);

/* Función: Aniadir
* AÒade un elemento a un conjunto.Comprueba que el elemento pertenece al *conjunto universal, es decir es un número primo ubicado en el intervalo *(0, 100). El elemento que se aÒada se situa a continuación del último *elemento del conjunto.
* Parámetros de entrada: 
* Elemento a aÒadir.
* Conjunto al que se desea aÒadir el elemento.
* Precondiciones: 
* no tiene 
* Parámetros de salida: 
* Conjunto. Valor devuelto por la función.
*/
tConjunto Aniadir (short int Elemento, tConjunto X);

/* Función: Quitar
* Quita un elemento a un conjunto. Para llenar el hueco que se deja al 
* quitar un elemento, colocará allÌ el último elemento.
* Parámetros de entrada: 
* Elemento a quitar.
* Conjunto al que se desea quitar el elemento.
* Precondiciones: 
* no tiene 
* Parámetros de salida: 
* Conjunto. Valor devuelto por la función.
*/
tConjunto Quitar (short int Elemento, tConjunto X);

/* Función: Unit
* Construye un conjunto unitario. La función omprueba que el elemento 
* pertenece al conjunto universal, es decir es un número primo ubicado 
* en el intervalo (0, 100).
* Parámetros de entrada: 
* Elemento del conjunto.
* Conjunto al que se desea quitar el elemento.
* Precondiciones: 
* no tiene 
* Parámetros de salida: 
* Conjunto unitario. Valor devuelto por la función.
*/
tConjunto Unit (short int Elemento);

/* Función: Esta
* Comprueba si un elemento está en un conjunto.
* Parámetros de entrada: 
* Elemento cuya existencia se va a comprobar.
* Conjunto donde se chequea la existencia del elemento.
* Precondiciones: 
* no tiene 
* Parámetros de salida: 
* Si existe o no en el conjunto. Valor devuelto por la función.
*/
tBoolean  Esta (short int Elemento, tConjunto C);

/* Función: EsCjtoVacio
* Comprueba si un conjunto está vacio.
* Parámetros de entrada: 
* Conjunto.
* Precondiciones: 
* no tiene 
* Parámetros de salida: 
* Si está vacio o no. Valor devuelto por la función.
*/
tBoolean EsCjtoVacio (tConjunto C);

/* Función: Union
* Realiza la unión de dos conjuntos y devuelve el resultado.
* Parámetros de entrada: 
* Conjunto X.
* Conjunto Y.
* Precondiciones: 
* no tiene 
* Parámetros de salida: 
* Conjunto resultante de la unión. Valor devuelto por la función.
*/
tConjunto Union (tConjunto X, tConjunto Y);

/* Función: Intersección
* Realiza la intersección de dos conjuntos y devuelve el resultado.
* Parámetros de entrada: 
* Conjunto X.
* Conjunto Y.
* Precondiciones: 
* no tiene 
* Parámetros de salida: 
* Conjunto resultante de la intersección. Valor devuelto por la función.
*/
tConjunto Interseccion(tConjunto X, tConjunto Y);

/* Función: Complementario
*  Obtiene el complementario de un conjunto y devuelve el resultado.
* Parámetros de entrada: 
* Conjunto.
* Precondiciones: 
* no tiene 
* Parámetros de salida: 
* Conjunto complementario. Valor devuelto por la función.
*/
tConjunto Complementario (tConjunto X);

/* Función: Diferencia
* Realiza la diferencia de dos conjuntos y devuelve el resultado.
* Parámetros de entrada: 
* Conjunto X.
* Conjunto Y.
* Precondiciones: 
* no tiene 
* Parámetros de salida: 
* Conjunto resultante de la diferencia. Valor devuelto por la función.
*/
tConjunto Diferencia (tConjunto X, tConjunto Y);

/* Función: ImprimeCjto
* Imprime el conjunto que se le pasa como parámetro, en la salida standard o en un fichero.
* Parámetros de entrada: 
* Conjunto.
* Valor que indica si se escribe en la salida stardard (FALSE) o en un 
* fichero (TRUE).
* Precondiciones: 
* no tiene 
* Parámetros de salida: 
* no tiene.
*/
void ImprimeCjto (tConjunto C, tBoolean);

/* Función: CalcCjtoV
* Obtiene el conjunto universal.
* Parámetros de entrada: 
* no tiene.
* Precondiciones: 
* no tiene 
* Parámetros de salida: 
* Conjunto universal. Valor devuelto por la función.
*/
tConjunto CalcCjtoV (void);

/* Función: CalcCardinal
* Obtiene el cardinal del conjunto que se le pasa como parámetro.
* Parámetros de entrada: 
* Conjunto.
* Precondiciones: 
* no tiene 
* Parámetros de salida: 
* Cardinal. Valor devuelto por la función.
*/
int CalcCardinal(tConjunto C);

/* Función: AlmOpe
* Almacena las operaciones 1 a 5 en un archivo.
* Parámetros de entrada: 
* Conjunto.
* Precondiciones: 
* no tiene 
* Parámetros de salida: 
* no tiene.
*/
void AlmOpe(tConjunto Cjtos[MAX_CONJUNTOS]);


/* PROGRAMA PRINCIPAL */

int main() {

#define OPCION_UNO 1
#define OPCION_DOS 2
#define OPCION_TRES 3
#define OPCION_CUATRO 4
#define OPCION_CINCO 5
#define OPCION_SEIS 6
#define OPCION_SIETE 7
#define OPCION_OCHO 8
#define OPCION_NUEVE 9
#define OPCION_DIEZ 10
#define OPCION_ONCE 11
#define SALIR 12
#define OPCION_TRECE 13


    tConjunto Conjuntos[MAX_CONJUNTOS];
    tConjunto ConjuntoZ;
    char NomConjunto[MAX_NOMBRE_CONJUNTO];
    short int Elemento;
    tBoolean FlgSalir;


    int Opcion;
    setlocale(LC_ALL,"spanish");

    IniCjtos(Conjuntos);
    LeeFichero (NOM_FICHERO, Conjuntos);
    FlgSalir=FALSE;
    while(!FlgSalir)
    {
        Opcion = Menu();
        switch (Opcion)
        {
            case OPCION_UNO: /* 1. A Union B; A Union C; B Union C */
                /* A RELLENAR POR EL ALUMNO */
                break;
            case OPCION_DOS: /* 2. A Interseccion B; A Interseccion C; B Interseccion C.*/
                /* A RELLENAR POR EL ALUMNO */
                break;
            case OPCION_TRES: /* 3. A - B; A - C; B - C */
                /* A RELLENAR POR EL ALUMNO */
                break;
            case OPCION_CUATRO: /* 4.Complementario (A); Complementario(B); Complementario(C).*/
                /* A RELLENAR POR EL ALUMNO */
                break;
            case OPCION_CINCO: /* 5.(A Interseccion B ) Union Complementario (( B Interseccion C )).*/
                /* A RELLENAR POR EL ALUMNO */
                break;
            case OPCION_SEIS: /* 6.Crear conjunto vacio. */
                /* A RELLENAR POR EL ALUMNO */
                break;
            case OPCION_SIETE: /* 7. Anadir elemento. */
                /* A RELLENAR POR EL ALUMNO */
                break;
            case OPCION_OCHO: /* 8.Quitar elemento. */
                /* A RELLENAR POR EL ALUMNO */
                break;
            case OPCION_NUEVE: /* 9. Crear conjunto unitario. */
                /* A RELLENAR POR EL ALUMNO */
                break;
            case OPCION_DIEZ: /* 10.Comprobar existencia.*/
                /* A RELLENAR POR EL ALUMNO */
                break;
            case OPCION_ONCE: /* 11.	Calcular cardinal de conjunto. */
                /* A RELLENAR POR EL ALUMNO */
                break;
            case SALIR: /* 12.	Salir. */
                FlgSalir=TRUE;
                break;
            case OPCION_TRECE: /*13.	Almacenar los resultados de las opciones 1, 2, 3, 4 y 5 en un archivo. */
                /* A RELLENAR POR EL ALUMNO */
                break;

            default:
                printf("Opcion no valida\n");

        }
    }
    return CORRECTO;

}

int Menu (void)
{
    int opcion;


    printf ("\n 1. A Union B; A Union C; B Union C");
    printf ("\n 2. A Interseccion B; A Interseccion C; B Interseccion C");
    printf ("\n 3. A - B; A - C; B - C");
    printf ("\n 4. Complementario(A); Complementario(B); Complementario(C)");
    printf ("\n 5. (A Interseccion B ) Union Comp(( B Interseccion C ))");
    printf ("\n 6. Crear conjunto vacio");
    printf("\n 7. Anadir elemento");
    printf("\n 8. Quitar elemento");
    printf("\n 9. Crear conjunto unitario");
    printf("\n 10. Comprobar existencia");
    printf ("\n 11. Calcular cardinal de conjunto");
    printf ("\n 12. Salir");
    printf("\n 13. Almacenar los resultados de las opciones 1, 2, 3, 4 y 5 en un archivo");
    printf ( "\n Elija opcion");
    scanf("%d", &opcion);

    return opcion;
}

tConjunto CalcCjtoV (void)
{
    /* A RELLENAR POR EL ALUMNO */
}

tConjunto CjtoVacio (void)
{
    /* A RELLENAR POR EL ALUMNO */
}

void IniCjtos (tConjunto *Conjuntos)
{
    /* A RELLENAR POR EL ALUMNO */
}

void ImprimeCjto (tConjunto C, tBoolean Flg)
{
    /* A RELLENAR POR EL ALUMNO */

}

int LeeFichero (char *NomFichero, tConjunto *Conjuntos)
{
    /* A RELLENAR POR EL ALUMNO */
}

tBoolean Esta(short int Elemento, tConjunto C)
{
    /* A RELLENAR POR EL ALUMNO */
}

tConjunto Union (tConjunto X, tConjunto Y)
{
    /* A RELLENAR POR EL ALUMNO */
}

tConjunto Interseccion(tConjunto X, tConjunto Y)
{
    /* A RELLENAR POR EL ALUMNO */
}


tConjunto Diferencia (tConjunto X, tConjunto Y)
{
    /* A RELLENAR POR EL ALUMNO */
}

tConjunto Complementario (tConjunto X)
{
    /* A RELLENAR POR EL ALUMNO */
}

tConjunto Aniadir (short int Elemento, tConjunto X)
{
    /* A RELLENAR POR EL ALUMNO */
}

tConjunto Quitar (short int Elemento, tConjunto X)
{
    /* A RELLENAR POR EL ALUMNO */
}

tConjunto Unit (short int Elemento)
{
    /* A RELLENAR POR EL ALUMNO */
}

int CalcCardinal(tConjunto C)
{
    /* A RELLENAR POR EL ALUMNO */

}

void AlmOpe(tConjunto Cjtos[MAX_CONJUNTOS])
{
    /* A RELLENAR POR EL ALUMNO */

}






  

 