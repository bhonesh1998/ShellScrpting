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
#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define pf printf
#define sf scanf

void *sol(void *tn)
{
    long tn1 = (long)tn;
    sleep(2);
    pf("hello this is %ld\n",tn1);
    pthread_t self_id;
    self_id=pthread_self();
    pf("hello from thread %ld \n",self_id);
    pthread_exit(NULL);
}


int main()
{

  pthread_t threads[3];
  int ret ;
  long i;
  for(i=0;i<3;i++)
  {
      //pf("thread are creating %ld \n",i);
      sleep(1);

      ret = pthread_create(&threads[i],NULL,sol,(void *)i);

      if(ret)
        pf("error\n");

  }

 pthread_exit(NULL);


}
