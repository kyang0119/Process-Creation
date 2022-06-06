
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

int main (){
   int pid1, pid2;
   printf("Before fork\n");
   pid1= fork();
   if (pid1==0) {
       // child process
       printf("This is child process!\n");
       exit (0);
   }
   else {
        wait(0);
        printf("This is the admin process!\n Admin: returned-pid: %d PID: %d\n", pid1, getpid()) ;
        
        }
     
    printf("Fork another process to run exe.c\n");
    pid2 = fork();
    if (pid2==0){
        execl("./cal.exe","","cal.in",NULL );
        } 
    else{ 
        wait(0);
        exit(0);
    }
         //_execl("  c:\user \kyang\cal.exe", 
          //      c:\user \kyang\cal.exe",
                 // "cal.in", NULL);
       
   } 


