#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int main(){

int hour,minute,sec;
hour=minute=sec=0;
while(1)
{
system("clear"); //clear screen
printf(" %02d : %02d : %02d",hour,minute,sec);  //two digit timer
fflush(stdout);  //clear output buffer
sec++;
if (sec==60)
{
minute+=1;
sec=0;
}
if (minute==60)
{
hour+=1;
minute=0;
}
if (hour==24)
{
minute=hour=sec=0;
}
sleep(1); // wait 1 sec
}
return 0;
}

//starts from 00 and keeps on going
