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
   
  int a[2]; // array of 2 size a[0] is for reading and a[1] is for writing over a pipe

  char buff[10];

  if(pipe(a)==-1) // opening of pipe using pipe(a)
   {
    perror("pipe"); // error in pipe 
    exit(1); // exit from the program
   }
   write(a[1],"code",5); // writing a string "code" in pipe
   read(a[0],buff,5); //reading pipe now buff is equal to "code"
   pf("%s",buff); // it will print "code"


}

