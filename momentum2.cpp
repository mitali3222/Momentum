#include<stdio.h>

main()
{
	double unit,s,ans,p;
	printf("enter unit ;");
	scanf("% if",&unit);
	if(unit<=50){
		s=unit*0.5;
	}else if(unit<=150){
		s=(unit-50)*0.75+25;
	}else if(unit<=250){
		s=(unit-150)*1.50+100;
	}else{
		s=(unit-250)*1.50+225;
	}
	p=s*0.20;
	ans=s+p;printf("BILL=%.2lf",ans);
	
}
