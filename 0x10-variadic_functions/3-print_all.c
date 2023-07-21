#include <stdarg.h>
#include <stdio.h>
#include <string.h>

void print_all(const char * const format, ...);
/**
* print_all - main function
* @format: parameter holding
* @...: some param
*/

void print_all(const char * const format, ...)
{
	va_list list;
	int len = strlen(format);
	int i = 0;
	char *s;
	int flag = 0;

	va_start(list,format);
	while (i < len)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c",va_arg(list,int));
				flag =1;
				break;
			case 'i':
                		printf("%d",va_arg(list,int));
                		flag =1;
                		break;
            		case 'f':
                		printf("%f",va_arg(list,double));
                		flag =1;
                		break;
            		case 's':
                		s= va_arg(list,char *);
                		flag =1;
                		if (s == NULL)
                		{
                   			printf("(nil)");
                   			break;
                		}
                		printf("%s",s); 
                		break;
            		default:
                	break;
        }
        if (i != len -1 && flag != 0)
        {
            printf(", ");
        }
        flag = 0;
        i++;
    }
     printf("\n");
}
