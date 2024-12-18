#include <stdio.h>
#include<stdlib.h>
void nhapMang(int *arr, int n);	
void inMang(int *arr, int n);
//void hoanDoi(int *arr,int n,int value,int pos);
void search(int *arr,int n,int value,int pos);
int main() {
    int *arr;
    int n;
    int value;
    int pos;
    printf("nhap kich thuoc cua mang:");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    nhapMang(arr,  n);
    inMang(arr, n);
//    printf("gia tri moi can hoan doi:");
//    scanf("%d",&value);    
//    printf("vi tri can doi:");
//    scanf("%d",&pos);
//    hoanDoi(arr, n, value, pos);
    printf("nhap gia tri can tim kiem:");
    scanf("%d",&value);
    search(arr, n, value, pos);
    
}
void nhapMang(int *arr, int n){
	for (int i = 0; i < n; i++) {
        printf("arr[%d]= ", i);
        scanf("%d",(arr+i));
    }
}
void inMang(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\n", *(arr + i));
    }
}
//void hoanDoi(int *arr,int n,int value,int pos){
//	if (pos>=1&&pos<n){
//		*(arr+pos-1)=value;
//	}
//}
void search(int *arr,int n,int value,int pos){
	for (int i = 0; i < n; i++){
		if(value==*(arr+i)){
			printf("%d o vi tri %d",value,i+1);
		}
	}
}
