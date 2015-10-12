#include <stdio.h>

int stream_attribute(FILE *fp)
{
	if(fp->_flags & _IO_UNBUFFERED){
		printf("This is unbuffered \n");//这是无缓冲的模式，一般strerr是此种模式
	}else if(fp->_flags & _IO_LINE_BUF){
		printf("This is line buf \n");//这个是行缓冲的模式，一般标准输入stdio和标准输出stdout是这种模式
	} else if(fp->_flags & _IOFBF) {
		printf("This is full buffer \n");//这个是全缓冲模式
	}

	printf("The io size = %d\n",(int)( fp->_IO_buf_end - fp->_IO_buf_base));

	return 0;
}

int main()
{
	FILE *fp;
	getchar();
	stream_attribute(stdin);
	printf("\n");

	stream_attribute(stdout);
	printf("\n");

	stream_attribute(stderr);
	printf("\n");
	
	fp = fopen("test.txt", "w+");

	stream_attribute(fp);
	
	fputc('a', fp);
	printf("________________________________________________\n");
	stream_attribute(fp);
	return 0;
	
	

}
