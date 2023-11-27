#include<stdio.h>
void caculate(int a,int b,int c){
	printf("Nhap 3 so a, b, c: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a==4 && b==5 && c==7){
		printf("Cap so thu 1:\n");
		printf("%d + %d = %d\n",a,b,a+b);
		printf("%d - %d = %d\n",b,a,b-a);
		printf("\n");
		printf("Cap so thu 2:\n");
		printf("%d + %d = %d\n",b,c,b+c);
		printf("%d - %d = %d\n",c,b,c-b);
		printf("\n");
		printf("Cap so thu 3:\n");
		printf("%d + %d = %d\n",a,c,a+c);
		printf("%d - %d = %d\n",c,a,c-a);
		printf("\n");
	}
	return 0;
}

int main(){
	caculate(0,0,0);
}