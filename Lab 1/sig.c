/* Sample program to handle system signals */
#include <signal.h>
#include <stdio.h>
void * signal_handler(int signumber)
{
	switch(signumber){
		case 2: printf("\nDont you dare try to interupt ME!!!!!\n\n"); break;
		case 3: printf("\nOhhhh NO... OHHHH NO youo are looking for a whipping boooyyy\n\n"); 
				//int magnetshowdotheywork = 10/0; 
				break;
		case 4: printf("\nLook I've had a really rough day at work OK.\n\n"); break;
		case 8: printf("\nMaaaan just give it a break, Why are you like this.\n\n"); 
				int death = raise(4);
				break;
		case 11: printf("\nI should've finished college...\n\n"); break;
		case 15: printf("\nMy mother told being a signal handler was the wrong choice.\n\n");
				//*(int*)0=0;

 				break;
		default: break;
	}   	







}
int main()
{
   	signal( SIGINT, (void *)  signal_handler );
	signal( SIGQUIT, (void *)  signal_handler );
	signal( SIGTERM, (void *)  signal_handler );
	signal( SIGFPE, (void *)  signal_handler );
	signal( SIGSEGV, (void *)  signal_handler );
	signal( SIGILL, (void *)  signal_handler );
	signal( SIGBUS, (void *) SIG_IGN);
   	while(1) {
		printf("Doing Nothing...\n");
		
		sleep(1000);
		
   	}
}
