#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{

int ret;
printf("I am Parent\n");
ret = fork();
printf("Return Value: %d\n", ret);



	return 0;
}


