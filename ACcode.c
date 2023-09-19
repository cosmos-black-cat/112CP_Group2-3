#include <stdio.h>
int main(){
	int r,x,y;
	scanf("%d%d%d",&r,&x,&y);
	if( x*x + y*y > r*r ){
		printf("out of range");
	}
	else if( x*x + y*y > (r*r)/4 ){
		printf("difficult");
	}
	else{
		printf("ideal");
	}
	return 0;
}
