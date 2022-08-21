#include <iostream>
#include <curses.h> //reemplaze por conio.h
#include <string.h>

using namespace std;
//==========================prototipos de las funciones==========================
int leedatoe(int x);
float leedatof(float x);
char leedatoc(char x);
char leedatob(char intgs);
//prototipos de void
void menu();
void pregunta();
void caratula();

//==========================estructuras==========================
struct basquetbolista{
    char nombreEquipo[50];
    char nombre[50];
    char apellidos[50];
    int edad;
    float altura;
    char posicionJuego[50];
    int cantidadFaltas;
}jugadores[100][100];

/*
struct equipo{
    char nombreEntrenador[50];
    char apellidoPaternoEntrenador[50];
    struct basquetbolista infojugador;
}equipos[100];
*/
struct portada{
char intgs[50];

}presentacion[100];

//==========================funcion main==========================
void caratula() {
printf("================INGENIERIA DE SOFTWARE================\n");
printf("================UNIVERSIDAD CONTINENTAL PERU================\n");
printf("Integrantes:\n");	
printf("Angie Guanoluisa \n");		
printf("Yancarlos Pacha\n\n\n");	
};
	
int main()
{
    int datoe=0,cantEquipos=0;
    float datof=0;
    char datoc='0',opcion,respuesta,equipoConsulta[50],jugadorConsulta[50],temporal[50];
    caratula();
    do{
    menu();
    opcion=leedatoc(datoc);
    switch(opcion)
        {
        case '1':
        printf("Ingrese la cantidad de equipos presentes\t");
        cantEquipos=leedatoe(datoe);
        for(int i=0;i<cantEquipos;i++)
        {
            printf("Ingrese el nombre del equipo");
            scanf(" %s",temporal);
            for(int j=0;j<12;j++)
            {
                fflush(stdin);
                printf("AGREGAR DATOS DE UN BASQUETBOLISTA\n");
                strcpy(jugadores[i][j].nombreEquipo,temporal);
                printf("Ingrese el nombre del basquetbolista\n");
                scanf(" %s",jugadores[i][j].nombre);
                printf("Ingrese el apellido paterno del basquetbolista\n");
                scanf(" %s",jugadores[i][j].apellidos);
                printf("Ingrese la edad del basquetbolista\n");
                jugadores[i][j].edad=leedatoe(datoe);
                printf("Ingrese la altura del basquetbolista\n");
                jugadores[i][j].altura=leedatof(datof);
                printf("Ingrese la posicion del basquetbolista\n");
                scanf(" %s",jugadores[i][j].posicionJuego);
                printf("Ingrese la cantidad de faltas del basquetbolista\n");
                jugadores[i][j].cantidadFaltas=leedatoe(datoe);
                
            }
        }
        break;
            
        case '2':
        for(int i=0;i<cantEquipos;i++){
        	for(int j=0;j<12;j++){
        	printf("NOMBRE EQUIPO: %s\n",jugadores[i][j].nombreEquipo);
            printf("NOMBRE: %s %s\n",jugadores[i][j].nombre,jugadores[i][j].apellidos);
        	printf("EDAD: %d\n",jugadores[i][j].edad);
			printf("ALTURA: %f\n",jugadores[i][j].altura);
			printf("POSICION: %s\n",jugadores[i][j].posicionJuego);
			printf("FALTAS: %d\n",jugadores[i][j].cantidadFaltas);
		    }
        }
			 break;	
				
        case '3':
            fflush(stdin);
            printf("Ingrese el nombre del equipo a consultar\n");
            scanf(" %s",equipoConsulta);
            for(int i=0;i<cantEquipos;i++)
            {
                
                	for(int j=0;j<12;j++){
                	    if(strcmp(jugadores[i][j].nombreEquipo,equipoConsulta)==0)
                    {
                    	printf("NOMBRE EQUIPO: %s\n",jugadores[i][j].nombreEquipo);
                        printf("NOMBRE: %s %s\n",jugadores[i][j].nombre,jugadores[i][j].apellidos);
                    	printf("EDAD: %d\n",jugadores[i][j].edad);
            			printf("ALTURA: %f\n",jugadores[i][j].altura);
            			printf("POSICION: %s\n",jugadores[i][j].posicionJuego);
            			printf("FALTAS: %d\n",jugadores[i][j].cantidadFaltas);
            		}
            		else
                    {
                        printf(" ");
                    }
                }
                
            }
            
            break;
        
        case '4':
            fflush(stdin);
            printf("Ingrese el nombre del equipo a consultar\n");
            scanf(" %s",jugadorConsulta);
            for(int i=0;i<cantEquipos;i++)
            {
                
                	for(int j=0;j<12;j++){
                	    if(strcmp(jugadores[i][j].nombre,jugadorConsulta)==0)
                    {
                    	printf("NOMBRE EQUIPO: %s\n",jugadores[i][j].nombreEquipo);
                        printf("NOMBRE: %s %s\n",jugadores[i][j].nombre,jugadores[i][j].apellidos);
                    	printf("EDAD: %d\n",jugadores[i][j].edad);
            			printf("ALTURA: %f\n",jugadores[i][j].altura);
            			printf("POSICION: %s\n",jugadores[i][j].posicionJuego);
            			printf("FALTAS: %d\n",jugadores[i][j].cantidadFaltas);
            		}
            		else
                    {
                        printf(" ");
                    }
                }
                
            }
            
            break;
        
        default :
            break;
        
        }
	pregunta();
    respuesta=leedatoc(datoc);
	
    }while(respuesta=='1');
    
	return 0;
 }
  


//========================funciones y procedimientos==========================
//leer dato entero
int leedatoe(int x){
    scanf("%d",&x);
    return x;
}

//leer dato float
float leedatof(float x){
    scanf("%f",&x);
    return x;
}


//leer dato char
char leedatoc(char x){
    scanf(" %c",&x);
    return x;
}

void menu(){
    printf("=====================MENU=====================\n");
    printf("\t OPCION 1: AGREGAR\n");
    printf("\t OPCION 2: VISUALIZAR\n");
    printf("\t OPCION 3: CONSULTAR EQUIPO\n");
    printf("\t OPCION 4: CONSULTAR JUGADOR\n");
    printf("\t OPCION 5: SALIR\n");
    printf("=====================**=====================\n");
    printf("Ingrese una opcion \t");
}

void pregunta(){
    printf("** Desea continuar usando el programa------ 1:Si - 2: No");
}