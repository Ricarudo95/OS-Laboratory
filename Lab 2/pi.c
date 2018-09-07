#include <pthread.h> 
#include <stdio.h>
double pi; /* this data is shared by the thread(s) */
void * runner(void * param); /* the thread */
int main(int argc, char * argv[]) {
        /* the thread identifier */
	
        /* set of attributes for the thread */
	pthread_t thread1;


        if (argc != 2) {
            fprintf(stderr, "usage: a.out <integer value>\n");
            /*exit(1);*/
            return -1;
        }
        if (atoi(argv[1]) < 0) {
            fprintf(stderr, "Argument %d must be non-negative\n ",atoi(argv[1]));
                /*exit(1);*/
                return -1;
            }
            /* get the default attributes */
            
            /* create the thread */
		thrd = pthread_create(&thread1,NULL, runner, void*);
            
            /* now wait for the thread to exit */
           
            printf("pi = %.15f\n", pi);
        }
        /**
         * The thread will begin control in this function
         */
        void * runner(void * param) {
            int upper = atoi(param);
            pi = 2 * calculate(upper);


            //complete function


            pthread_exit(0);
        }


double calculate (int i) {
    return 1 + i / (2.0 * i + 1) * calculate(i + 1);
}
