/*#include<stdio.h>
int main()
{
	int x=20;
	int *ptr;
	ptr = &x;
	printf("value is %d\n",*ptr);
	printf("value is %p",ptr);


	return 0;
}
*/


/*
#include<stdio.h>
int main()
{
	double var=15;
	double* ptr;
	ptr =&var;
	printf("value is %lf",*ptr);
	return 0;
}*/

/*
#include<stdio.h>
int main()
{
	char y[6]="yamini";
	char *ptr = y;
	printf("name is %c\n",*ptr);
	printf("name is %c\n",*(ptr + 1));
	printf("name is %c\n",*(ptr + 2));
	printf("name is %c\n",*(ptr + 3));
	printf("name is %c\n",*(ptr + 4));
	printf("name is %c\n",*(ptr + 5));
	printf("name is %c\n",*(ptr + 6));
	return 0;
}
*/

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char str[7];
	char str1[7];
	printf("enter a name:");
	scanf("%s",str);
 	strcpy(str1, str);
	printf("%s",str1);
	return 0;
}*/

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="we are working";
	printf("%lu",strlen(str));              //length of the string =14(incl                                                   uding spaces)

	return 0;
}
*/

/*
#include<stdio.h>
#include<string.h>
int main()
{
        char str[]="we are working";         //length of the string=14+null val                                               ue is 1 = 15)
        printf("%lu",sizeof(str));

        return 0;
}
*/

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="yamini";           //asci value of y=121,h=104
					//compare two strings it willmatchs return 0 if not, the first non-match alphabets 121-104=17
	char str2[]="hai";
	char str3[]="hai";
	printf("%d\n",strcmp(str3,str2));   
	printf("%d\n",strcmp(str1,str2));
	return 0;
}

*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100]="my name is";       //it combine two strings 
					   //array size should mention 
					   
	char str2[]="yamini";
	strcat(str1,str2);
	printf("%s\n",str1);
	printf("%s\n",str2);
	
	return 0;
}
*/
