#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf("��J�褸�~��:");
	scanf("%d",&a);
	if(a%4==0)
	{if(a%100==0)
	{if(a%400==0)
	printf("�褸%d�O�|�~\n",a);
	else
	printf("�褸%d���O�|�~\n",a);
	}
	else
	printf("�褸%d���O�|�~\n",a);
	}
	else
	printf("�褸%d���O�|�~\n",a);
	system("pause");
	return 0;
}
