#include<stdio.h>
int main()
{
	char *a[3]={"bye","hello","goodbye"};
	printf("%s",(*(a+2)+3));
}
