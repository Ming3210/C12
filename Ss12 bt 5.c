#include<stdio.h>
#include<stdlib.h>
int main(){
	int row,col,prime;
	int choice;
	printf("Nhap so cot:");
	scanf("%d",&row);
	printf("Nhap so hang:");
	scanf("%d",&col);
	int mulArray[row][col];
	do{
		printf("\nMENU\n");
		printf("1. Nhap gia tri cac phan tu cua mang\n");
		printf("2. In ra cac phan tu cua mang\n");
		printf("3. In ra cac phan tu nam o goc\n");
		printf("4. In ra cac phan tu nam tren duong bien\n");
		printf("5. In ra cac phan tu nam tren duong cheo chinh, duong cheo phu\n");
		printf("6. In ra cac phan tu la so nguyen to\n");
		printf("7. Thoat\n");
		printf("Lua chon cua ban:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				for(int i=0; i<row ;i++){
					for(int j=0;j<col; j++){
						printf("mulArray[%d][%d]=",i,j);
						scanf("%d",&mulArray[i][j]);
					}
				}
				break;
			case 2 :
				for(int i=0;i<row;i++){
					for(int j=0;j<col;j++){
						printf("mulArray[%d][%d]=%d\t",i,j,mulArray[i][j]);
					}
					printf("\n");
				}
				break;
			case 3:
				printf("Cac phan tu o goc\n");
				for(int i=0;i<row;i++){
					for(int j=0;j<col;j++){
						if(i==0){
							if(j==0){
								printf("mulArray[%d][%d]=%d",i,j,mulArray[i][j]);
							}else if(j==col-1){
								printf("mulArray[%d][%d]=%d",i,j,mulArray[i][j]);
							}
						}else if(i==row-1){
							if(j==0){
								printf("mulArray[%d][%d]=%d",i,j,mulArray[i][j]);
							}else if(j==col-1){
								printf("mulArray[%d][%d]=%d",i,j,mulArray[i][j]);
							}
						}
					}
				}
				break;
			case 4:
				printf("Cac phan tu nam tren duong bien:\n");
				for(int i=0;i<col;i++)
				{
					for(int j=0;j<row;j++)
					{
						if(i==0 || i==col-1){
							printf("%d\n",mulArray[i][j]);
						}else{
							if(j==0){
								printf("%d\n",mulArray[i][0]);
							}
							if(j==col-1){
								printf("%d\n",mulArray[i][row-1]);
							}
						}
					}
				}
				break;
			case 5:
				printf("Cac phan tu nam tren duong cheo chinh:\n");
				for(int i=0;i<row;i++){
					for(int j=0;j<col;j++){
					}
					printf("mulArray[%d][%d]=%d\n",i,i,mulArray[i][i]);
				}
				break;
			case 6:
				printf("Cac so nguyen to:\n");
				for(int i = 0;i<row;i++){
					for(int j=0;j<col;j++){
						prime = 0;
						for(int k=mulArray[i][j];k>0;k--){
							if(mulArray[i][j] % k == 0){
								prime++;
							}
						}
					if(prime == 2){
						printf("mulArray[%d][%d]=%d\n",i,j,mulArray[i][j]);
						}
					}
				}
				break;
			case 7:
				exit(0);
			}
	}while(1==1);
}