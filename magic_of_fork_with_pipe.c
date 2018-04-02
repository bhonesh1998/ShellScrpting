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
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include<errno.h>
#include<sys/wait.h>
#include <unistd.h>
#define pf printf
#define sf scanf

int main(){
   
  int a[2];  // array of 2 size a[0] is for reading and a[1] is for writing over a pipe
  char buff[10];
  pipe(a); // opening of a pipe

  if(!fork()) // using fork to replicate current process
  {
      pf("\n child is writing \n");
      write(a[1],"hackerrank",11); // a string is written in pipe 
      exit(0);
  }

  else
  {
      pf("parent is reading \n");
      read(a[0],buff,11); // reading from pipe now buff will become "hackerrank"
      pf("\n parent has got the string : %s\n",buff);
      wait(NULL);
  }







}

