#include <stdio.h>
#include <stdarg.h>

int var_args(int count,...)// kind of params stuff in C#
{
	va_list var_list;//va_list va_list_initialize
	int sum=0;
	va_start(var_list,count);//va_start(va_list_initialize,type);
	for(int i=0;i<count;i++)
		sum+=va_arg(var_list,int);// va_arg(va_list_initialize,type);
	va_end(var_list);// va_end(va_list_initialize);
	return sum;
}


int main()
{
	printf("%d",var_args(3,1,2,3));
	return 0;
}
