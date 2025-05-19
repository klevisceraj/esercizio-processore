#include<pthread.h>
#include<stdio.h>

void* stampa_x (void* non_usato)
{
    while (1)
      fputc('x',stderr);
      return NULL;
    
}

int main ()
{
    pthread_t id_thread;
    
    pthread create (&id_thread,NULL, &stampa_x,NULL);
    
    while (1)
      fptuc ('o',stderr);
    return 0;
}
