#include<stdio.h>
#include<pthread.h>

int a,b;

void *perimetro(){
        int perimetro;
        perimetro=a*b;
        printf("\nIl valore dell perimetro e': %d\n",perimetro);
}
void *area(){
        int area;
        area=(a+b)*2;
        printf("Il valore dell'area e': %d\n",area);
}
int main(){
        pthread_t t1,t2;
        do{
                printf("\nImettere il valore della base: ");
                scanf("%d",&a);
        }while(a<0);
        do{
                printf("\nImmettere il valore dell'altezza: ");
                scanf("%d",&b);
        }while(b<0);
        pthread_create(&t1,NULL,&perimetro,NULL);
        pthread_create(&t2,NULL,&area,NULL);
        pthread_join(t1,NULL);
        pthread_join(t2,NULL);
}
