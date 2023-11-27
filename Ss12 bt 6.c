#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,number,index,temp,fix,del,findNumber;
	int left=0;
	int right = n-1;
	int count =0;
	int nums[100];
	int choice,select;
	do{
		printf("\nMENU\n");
		printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
		printf("2. In ra gia tri cac phan tu dang quan li\n");
		printf("3. Them 1 phan tu vao bi tri chi dinh\n");
		printf("4. Sua 1 phan tu o vi tri chi dinh\n");
		printf("5. Xoa 1 phan tu o vi tri chi dinh\n");
		printf("6. Sap xep cac phan tu\n");
		printf("9. Sap xep phan tu nhap vao\n");
		printf("10. Thoat\n");
		printf("Lua chon cua ban:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap so phan tu muon nhap:");
				scanf("%d",&n);
				printf("Cac phan tu cua mang:\n");
				for(int i=0;i<n;i++){
					printf("nums[%d]=",i);
					scanf("%d",&nums[i]);
				}
				break;
			case 2:
				printf("Cac phan tu cua mang:\n");
				for(int i=0;i<n;i++){
					printf("nums[%d]=%d\n",i,nums[i]);
				}
				break;
			case 3:
				printf("Phan tu muon them:");
				scanf("%d",&number);
				printf("Vi tri muon them:");
				scanf("%d",&index);
				n++;
				for(int i=n;i>index;i--){
					nums[i]=nums[i-1];
				}
				nums[index]=number;
				for(int i=0;i<n;i++){
					printf("nums[%d]=%d\n",i,nums[i]);
				}
				break;
			case 4:
				printf("Nhap vi tri muon sua:");
				scanf("%d",&fix);
				printf("Nhap so muon doi:");
				scanf("%d",&number);
				nums[fix]=number;
				break;
			case 5:
				printf("Nhap vi tri muon xoa:");
				scanf("%d",&del);
				for(int i=del;i<n;i++){
					nums[i]=nums[i+1];
				}
				n--;
				break;
			case 6:
				printf("Sap xep cac phan tu:\n");
				printf("7. Giam dan:\n");
				printf("8. Tang dan:\n");
				printf("Lua chon:");
				scanf("%d",&select);
				if(select==7){
					for(int i=0;i<n;i++){
						for(int j=i+1;j<n;j++){
							if(nums[i]<nums[j]){
								temp=nums[i];
								nums[i]=nums[j];
								nums[j]=temp;
								}
							}
						}
						printf("Sap xep:");
						for(int i=0;i<n;i++){
							printf("%d\t",nums[i]);
						}
					}else if(select==8){
						for(int i=0;i<n;i++){
							for(int j=i+1;j<n;j++){
								if(nums[i]>nums[j]){
									temp=nums[i];
									nums[i]=nums[j];
									nums[j]=temp;
								}
							}
						}
						printf("Sap xep:");
						for(int i=0;i<n;i++){
							printf("%d\t",nums[i]);
						}
					}else{
						break;
					}
					break;
			case 9:
				{
					for(int i=0;i<n;i++){
						if(nums[i]<nums[i+1]){
							printf("Nhap gia tri tim kiem:");
							scanf("%d",&findNumber);
							int mid;
							while(left<=right){
							mid = (left+right)/2;
							if(nums[mid] == findNumber){
								break;
							}else if(nums[mid]<findNumber){
								left=mid+1;
							}else{
								right=mid-1;
							}
							}
						printf("Phan tu nums[%d] = %d la gia tri tim kiem.",mid,nums[mid]);
						}else{
							printf("Nhap gia tri tim kiem:");
							scanf("%d",&findNumber);
							for(int i=0;i<n;i++){
								if(nums[i]==findNumber){
									printf("Phan tu nums[%d] = %d la gia tri tim kiem\n",i,nums[i]);
								}else{
									count++;
								}
						}
						if(count==n){
							printf("Khong co gia tri duoc tim kiem\n");
						}
							}
						}
					}
				break;
			case 10:
				break;
			default:
				printf("Nhap lai lua chon:");
				break;
		}
	}while(0<choice<6 ||6<choice<10 ||choice != 6);
}