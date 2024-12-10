/*MENU
 1. Nhập số phần tử cần nhập và giá trị các phần tử
 2. In ra giá trị các phần tử đang quản lý
 3. Thêm một phần từ vào vị trí chỉ định
 4. Sửa một phần từ ở vị trí chỉ định
 5. Xóa một phần từ ở vị trí chỉ định
 6. Sắp xếp các phần tử ( Khi lựa chọn menu cha thì hiển thị menu con )
       a. Giảm dần
       b. Tăng dần
 7. Tìm kiếm phần tử nhập vào
       a. Tìm kiếm tuyến tính
       b. Tìm kiếm nhị phân
 8. Thoát
*/

#include <stdio.h>
int input(int ar[],int length){
    for(int i=0;i<length;i++){
        printf("hãy nhập phần tử cho mảng : ");
        scanf("%d",&ar[i]);
    }
    return 0;
}
void print(int length,int ar[]){
    for(int i=0;i<length;i++){
        printf("%d\n",ar[i]);
    }
}
void addItem(int ar[],int index,int size){
    int a;
    for(int i = size;i>index;i--){
        ar[i]=ar[i-1];
    }
    printf("hãy nhập phần tử bạn muốn thêm : ");
    scanf("%d",&a);
    ar[index]=a;
}
void repairItem(int ar[],int index){
    int a;
    printf("hãy nhập phần tử bạn muốn sửa : ");
    scanf("%d",&a);
    ar[index] =a;
}
void deleteIndex(int ar[],int index,int length){
    for(int  i = index;i<length;i++){
        ar[i]=ar[i+1];
    }
}
void sort_01(int a[],int length){
    for(int i=0;i<length-1;i++){
        for(int j=0;j<length-1-i;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void sort_02(int a[],int length){
    for(int i=0;i<length-1;i++){
        for(int j=0;j<length-1-i;j++){
            if(a[j]<a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void searchNumber(int a[],int length,int number){
    for(int i = 0;i<length;i++){
        if(a[i]==number){
            printf("phần tử ở vị trí a[%d]",i);
        }
    }
}
int main(int argc, const char * argv[]) {
    int choice;
    int arr[100];
    int addIx;
    int repairIx;
    int deleteIx;
    int add=0;
    int size=sizeof(arr)/sizeof(int);
    while(choice<8){
        printf("Menu\n");
        printf("1. Nhập số phần tử cần nhập và giá trị các phần tử\n");
        printf("2. In ra gái trị các phần tử đang quản lý\n");
        printf("3. Thêm một phần tử vào vị trí chỉ định\n");
        printf("4. Sửa một phần tử ở vị trí chỉ định\n");
        printf("5. Xóa một phần tử ở vị trí chỉ định\n");
        printf("6. Sắp xếp các phần tử\n");
        printf("7. Tìm kiếm phần tử\n");
        printf("8. Thoát\n");
        printf("Mời bạn nhập lựa chọn : ");
        scanf("%d",&choice);
       
        switch (choice) {
            case 1:
                printf("hãy nhập độ dài mảng : ");
                scanf("%d",&size);
                input(arr, size);
                break;
            case 2:
                print(size, arr);
                break;
            case 3:
                
                printf("hãy nhập vị trí bạn muốn thêm phần tử : ");
                scanf("%d",&addIx);
                addItem(arr, addIx, size);
                size++;
                break;
            case 4:
                printf("hãy nhập vị trí bạn muốn sửa : ");
                scanf("%d",&repairIx);
                repairItem(arr, repairIx);
                break;
            case 5:
                printf("hãy nhập vị trí bạn muốn xóa : ");
                scanf("%d",&deleteIx);
                deleteIndex(arr, deleteIx, size);
                size--;
            case 6:
                printf("1. tăng dần\n2. giảm dần\nhãy chọn kiểu sắp xếp của bạn : ");
                int sortt;
                scanf("%d",&sortt);
                if(sortt==1){
                    sort_01(arr, size);
                }if(sortt==2){
                    sort_02(arr, size);
                }
            case 7 :
                printf("hãy nhập phần tử bạn muốn tìm kiếm : ");
                int number;
                scanf("%d",&number);
                searchNumber(arr, size, number);
                
            default:
                break;
        }
    }
    return 0;
}
