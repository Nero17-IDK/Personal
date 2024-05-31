#include <stdio.h>
#include <string.h>
#include <string>

// Se crea la función para conjugar el verbo dependiendo del tiempo
void conjugar (const char* verbo, char tiempo)
{
    // Conjugar para tiempo presente
    if (tiempo == 'A')
    {
        // Calcula la cantidad de letras del verbo
        char tamaño = strlen(verbo);
        if (tamaño >= 2)
        {
            // Establece la posición de las 2 útimas letras del verbo
            char ultima = verbo[tamaño - 1];
            char penu = verbo[tamaño - 2];
                       
           // Escoge como imprimir la conjugación dependiendo de las últimas dos letras del verbo
            if ((ultima == 'r' && penu == 'a') || (ultima == 'r'&& penu == 'e') || (ultima == 'r'&& penu == 'i'))
            {
                char conjugado[20];
                // Se quitan las 2 ultimas letras del verbo
                strncpy (conjugado, verbo, tamaño - 2);
                
                // Imprime la conjugación para cada sujeto
                printf ("yo %so \n", conjugado);
                printf ("tu %sas \n", conjugado);
                printf ("el/ella %sa \n", conjugado);
                printf ("nosotros/nosotras %samos \n", conjugado);
                printf ("vosotros/vosotras %sais \n", conjugado);
                printf ("ellos/ellas %san \n", conjugado);
            }
        }
    }
    // Conjugar para tiempo preterito perfecto simple
    else if (tiempo == 'P')
    {
        // Calcula la cantidad de letras del verbo
        char tamaño = strlen(verbo);
        if (tamaño >= 2)
        {
            // Establece la posición de las 2 útimas letras del verbo
            char ultima = verbo[tamaño - 1];
            char penu = verbo[tamaño - 2];
                       
           // Escoge como imprimir la conjugación dependiendo de las últimas dos letras del verbo
            if ((ultima == 'r' && penu == 'a') || (ultima == 'r'&& penu == 'e') || (ultima == 'r'&& penu == 'i'))
            {                
                char conjugado[20];
                // Se quitan las 2 ultimas letras del verbo
                strncpy (conjugado, verbo, tamaño - 2);

                // Imprime la conjugación para cada sujeto
                printf ("yo %se \n", conjugado);
                printf ("tu %saste \n", conjugado);
                printf ("el/ella %so \n", conjugado);
                printf ("nosotros/nosotras %samos \n", conjugado);
                printf ("vosotros/vosotras %sasteis \n", conjugado);
                printf ("ellos/ellas %saron \n", conjugado);
            }
        }
    }
    // Conjugar para tiempo futuro
    else if (tiempo == 'F')
    {
        // Calcula la cantidad de letras del verbo
        char tamaño = strlen(verbo);
        if (tamaño >= 2)
        {
            // Establece la posición de las 2 útimas letras del verbo
            char ultima = verbo[tamaño - 1];
            char penu = verbo[tamaño - 2];

            // Escoge como imprimir la conjugación dependiendo de las últimas dos letras del verbo     
            if ((ultima == 'r' && penu == 'a') || (ultima == 'r'&& penu == 'e') || (ultima == 'r'&& penu == 'i'))
            {                
                char conjugado[20];
                // Se quitan las 2 ultimas letras del verbo
                strncpy (conjugado, verbo, tamaño - 2);

                // Imprime la conjugacion para cada sujeto
                printf ("yo %sare \n", conjugado);
                printf ("tu %saras \n", conjugado);
                printf ("el/ella %sara \n", conjugado);
                printf ("nosotros/nosotras %saremos \n", conjugado);
                printf ("vosotros/vosotras %sareis \n", conjugado);
                printf ("ellos/ellas %saran \n", conjugado);
            }
        }
    }
}

int main ()
{
    // Define las variables verbo y tiempo como una cadena
    char verbo[20];
    char tiempo;

    // Para que se repita el programa siempre
    while (1)
    {
        // Ingresar el verbo y el tiempo para conjugar
        printf ("\nIngrese en verbo en mayuscula, excepto las dos ultimas letras: ");
        scanf ("%s", &verbo);
        printf ("\nIngrese un tiempo para conjugar:\n- 'A' para Presente\n- 'P' para Preterito Perfecto Simple\n- 'F' para Futuro\n- 'T' para terminar el programa\n");
        scanf (" %c", &tiempo);
        printf ("\n");

        // Verifica si el tiempo ingresado es correcto
        if (tiempo == 'A' || tiempo == 'P' || tiempo == 'F' || tiempo == 'T') 
        {
            // Si al ingresar el tiempo para conjugar se ingresa 'T', el programa se termina
            if (tiempo == 'T')
            {
                break;
            }  
        } 
        // Si el tiempo no es correcto, muestra el mensaje en pantalla
        else 
        {
            printf ("Entrada no valida. Ingrese un tiempo A, P, F (o T para terminar)\n");
        }

        // Usa la función 'conjugar' para conjugar el verbo en el tiempo ingresado
        conjugar (verbo, tiempo);
    }
}       // Fin del programa