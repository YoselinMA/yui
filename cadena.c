#include <stdio.h>
#include <stdlib.h>
int main(void){
    int i, n;
    //char es para caracteres
    char *buffer, *p_buffer;
    

    printf("Teclea la longitud del arreglo");
    scanf("%d", &n);

    //buffer checa la cantidad 
    buffer = (char*) malloc((n)* sizeof(char));
    if (buffer==NULL) exit(1);

    p_buffer = buffer ;

   
        
    for(i=0; i<n; i ++){
        puts("Ingresa una palabra: ");
        scanf("%s", p_buffer++);
    }
         
    p_buffer = buffer +n-1 ;
    printf("\nLa palabra al reves es\n");
    for (int p = 0; p< n; p++) {
        printf("%c", *p_buffer--);
        
}
   
free(buffer);
   

}
