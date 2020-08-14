#include <unistd.h>
#include <stdio.h>
#include <sys/syscall.h>
int main(){
   write(1, "Hello\n", 7);
   return 0;
 
}
