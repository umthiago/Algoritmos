#include <stdio.h>

int main()
{
    int x,z ;
    int z_verdadeiro=0;
    int cont_x=0;
    int soma_x = 0;
    int index = 0;
    scanf("%d",&x);
    //scanf("%d",&z);
    
    while(1) {
        scanf("%d",&z);
        if (z > x){
            z_verdadeiro = z;
            break;
            
        }
    }
    //printf("%d\n",z_verdadeiro);
    while(1) {
        soma_x += x+index;
        //printf("SOMA %d",soma_x);
        index++;
        cont_x++;
        if (soma_x > z_verdadeiro){
            break;
        }
        
    }
    printf("%d\n",cont_x);

    return 0;
}
