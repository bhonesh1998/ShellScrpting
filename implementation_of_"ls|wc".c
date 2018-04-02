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
  
 if(!fork())
	{
				close(1); // closing normal stdout 
				dup(a[1]); // making stdout same as a[1]
				close(a[0]); // closing reading part of pipe we don't need of it at this time 
				execlp("ls","ls",NULL); // executing ls 

	}
	else
	{
		close(0); // closing normal stdin
		dup(a[0]); // making stdin same as a[0]
		close(a[1]); // closing writing part in parent , we don't need of it at this time
		execlp("wc","wc",NULL); // executing wc
	}







}

