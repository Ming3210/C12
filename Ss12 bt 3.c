#include<stdio.h>
void findPrimeNumber(int n,int m){
	printf("Nhap so phan tu mang 1:");
	scanf("%d",&n);
	int nums1[n];
	printf("Nhap cac phan tu:\n");
	for(int i=0;i<n;i++){
		printf("nums1[%d]=",i);
		scanf("%d",&nums1[i]);
	}
	printf("Nhap so phan tu mang 2:");
	scanf("%d",&m);
	int nums2[m];
	printf("Nhap cac phan tu:\n");
	for(int i=0;i<m;i++){
		printf("nums2[%d]=",i);
		scanf("%d",&nums2[i]);
	}
	printf("Cac snt mang 1: ");
	for(int i=0;i<n;i++){
		int b=0;
		for(int j=nums1[i];j>0;j--){
			if(nums1[i]%j==0){
				b++;
			}
		}
		if(b==2){
			printf("%d\t",nums1[i]);
		}
	}
	printf("\n");
	printf("Cac snt mang 2: ");
	for(int i=0;i<m;i++){
		int b=0;
		for(int j=nums2[i];j>0;j--){
			if(nums2[i]%j==0){
				b++;
			}
		}
		if(b==2){
			printf("%d\t",nums2[i]);
		}
	}
}
int main(){
	findPrimeNumber(0,0);
}