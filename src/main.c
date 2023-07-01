//主模块
#include<stdio.h>
#include<stdlib.h>
#include"server.h"

int main(int argc,char* argv[]) {

    if(argc < 2)
        printf("usag: sudo ./webserver (port) (path)\n");

    // ./a.out 80 ../source
    //初始化服务器
    if(initServer(argc < 2 ? 80 : atoi(argv[1])) == -1) {
        return -1;
    }
    //运行服务器
    if(runServer(argc < 3 ? "../source" : argv[2]) == -1) {
        return -1;
    }
    //终结化服务器
    deinitServer();
    return 0;
}
