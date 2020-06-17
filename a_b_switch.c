#include<stdio.h>

//A computer program receives two integers, a and b, as input. 
//If a is greater than b, values of a and b are swapped.
//Values of variables a and b are displayed, before and after swapping. 

int main(){
	
	int a,b;
	
	printf("Please enter two integers:");
	scanf("%d%d",&a,&b);
	
	if(a>b){
		
		swapp(&a,&b);
	}
    else{
    	printf("a=%d and b=%d",a,b);
	}
	return 0;
}
void swapp(int *pa,int *pb){
	
	int temp;
	
	printf("Before switch:a=%d and b=%d\n",*pa,*pb);
	
	temp=*pa;
	*pa=*pb;
	*pb=temp;
	
	printf("After switch:a=%d and b=%d",*pa,*pb);
	
}

