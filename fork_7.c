#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
main(){
       pid_t pid;
       int i,n;
       do{
           printf("Immettere un numero da 1 a 3:   ");
           scanf("%d",&n);
       }while((n<1)||(n>3));
       printf("\nsono il padre (PID: %d)\n",getpid());
       for(i=0;i<n;i++){
            pid=fork();
            if(pid==0){
                sleep(1);
// messo i questo specifico punto la sleep fa si che i processi padri abbiano tutti  PID 1;
// questo perché il padre termina prima e i figli vengono adottati da INIT.
                printf("sono il padre (PID: %d),",getppid());
                printf("mio figlio ha PID: %d\n",getpid());
            }
       }
       exit(0);
}
