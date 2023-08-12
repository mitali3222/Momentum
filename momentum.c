#include<stdio.h>

main()
{
	char a;
	printf("Enter any char:");
	scanf("%c",&a);
	
	if(a>='a'&& a<='z'){
		printf("alpha");
	}else if(a>='A'&& a<'Z'){
		printf("ALPHA");
	}else if (a>='0'&& a<'9'){
		printf("number");
	}else{
		printf("special char");
	}
	}
	
	

