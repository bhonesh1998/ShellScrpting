/*
***********************************************************
***********************************************************
NAME-BHONESH CHAWLA
REGNO-20164017
BATCH-CS-1
CONTACT-+918619127663
EMAIL-rajachawla778@gmail.com
***********************************************************
***********************************************************
*/

// A c program to set priority of a thread
#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/resource.h>
#define pf printf
#define sf scanf

void *sol(void *tn)
{
    
    int pri = 10; // setting a priority to 10
    int tid = getpid(); 
    pf("old pri is %d \n",getpriority(PRIO_PROCESS,tid)); // printing old priority
    setpriority(PRIO_PROCESS,tid,pri); // setting new priority
     pf("new pri is %d \n",getpriority(PRIO_PROCESS,tid));// printing new priority that should be 10
     pthread_exit(NULL);

}


int main()
{

 pthread_t th1;
 pthread_create(&th1,NULL,sol,NULL); // creating a thread
 pthread_join(th1,NULL);
 return 0;


}
