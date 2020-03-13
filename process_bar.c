/*进度条程序*/
#include <stdio.h>
#include <unistd.h>
int main(int argc,char* argv[])
{
	char a[10]={0};
	int i=0;
	
	for(i=0;i<10;i++){
		a[i]='-';
		// 回车符，每次从刚开头的位置打印
		printf("%s\r",a);
		//刷新标准输出缓冲区
		fflush(stdout);
		usleep(100000);
	}
	return 0;

}
