#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

static void
mySigHandler(int sig)
{
    printf("in signal handler\n");
}

int
main(int argc, char *argv[])
{
    if (signal(SIGINT, mySigHandler) == SIG_ERR) {
        printf("替换信号处理器异常\n");
        exit(1);
    }

    printf("Hello World!\n");

    while (1) {
        sleep(300);
    }
}
