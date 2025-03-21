#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicialitza el generador de nombres aleatoris amb una llavor basada en el temps actual
    srand(time(NULL));
    
    // Genera un nombre aleatori
    int randomNumber = rand();
    
    // Imprimeix el nombre aleatori generat
    printf("Nombre aleatori: %d\n", randomNumber);
    
    return 0;
}
