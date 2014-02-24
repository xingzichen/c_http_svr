#include "chttp.h"

int main ( int argc, char *argv[] )
{
	  // 创建文件夹,并设置读写权限
    if(-1 == (mkdir(WEB_SITE, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH)))
    {
        if(ENOSPC == errno)
        {
            perror ( "disk do not have enough space!\n" );
            exit(1);
        }
    }
    chdir(WEB_SITE);
    create_socket();
    return 0;
}
