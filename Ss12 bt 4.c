#include<stdio.h>
void checkReverse(int n,int m){
	int check;
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
	for(int i = 0; i < n/2; i++)
	{
		if(nums1[i] != nums1[n - i - 1])
		{
			check = 0;
		}
	}
	check = 1;
	if(check==1){
		printf("Mang 1 la mang doi xung\n");
	}else if(check == 0){
		printf("Mang 1 khong la mang doi xung\n");
	}
	for(int i = 0; i < n/2; i++)
	{
		if(nums2[i] != nums2[n - i - 1])
		{
			check =0;
		}
	}
	check = 1;
	if(check==1){
		printf("Mang 2 la mang doi xung\n");
	}else if(check == 0){
		printf("Mang 2 khong la mang doi xung\n");
	}
}
int main(){
	checkReverse(0,0);
}