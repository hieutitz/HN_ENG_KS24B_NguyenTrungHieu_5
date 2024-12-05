#include <stdio.h>

int main(){
 int arr[100];
	int size=0;
	int choice;
	
	do{
		printf("\nMenu\n");
		printf("1. Nhap so phan tu va gia tri cho mang.\n");
		printf("2. In ra gia tri cac phan tu trong mang theo dang (arr[0]=1, arr[1]=5...)\n");
		printf("3. Dem so luong cac so hoan hao co trong mang.\n");
		printf("4. Tim gia tri nho thu 2 trong mang.\n");
		printf("5. Them mot phan tu vao vi tri dau tien trong mang.\n");
		printf("6. Xoa phan tu tai mot vi tri cu the\n");
		printf("7. Sap xep mang theo thu tu giam dan\n");
		printf("8. Tim kiem phan tu co trong mang hay khong\n");
		printf("9. Sap xep lai mang sao cho toan bo so le dung truoc so chan dung sau.\n");
		printf("10. Dao nguoc thu tu cua cac phan tu co trong mang va hien thi theo dang (arr[0]=1-le, arr[1]=2-chan.....)\n");
		printf("11. Thoat menu.\n");
		printf("Lua chon cua ban:");
		scanf("%d",&choice);
		
		switch (choice) {
		 case 1: {
                printf("Nhap so phan tu: ");
                scanf("%d", &size);
                for (int i = 0; i < size; i++) {
                    printf("Nhap phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
			}
		 case 2: {
		 	    for (int i = 0; i < size; i++) {
		 	    	printf("arr[%d]= %d ",i ,arr[i]);
                    printf("\n");
				 }
			    break;
		  }
		 case 3: {
		  	
			break;
		  }
		  case 4: {
		  	    int max = arr[0];
		  	    int max2 = 0;
		  	    for (int i = 1; i < size; i++){
		  	    	if (arr[i] > max){
		  	    		max2 = max;
		  	    		max = arr[i];
					  }
				  }
				  printf("so lon thu hai trong mang la %d\n", max2);
			break;
		  }
		  case 5: {
		  	     int value;
		  	     size++;
                 printf("Nhap phan tu vao vi tri dau tien: ");
                 scanf("%d", &value);
                 for(int i = size; i > 0; i--){
                 	arr[i]=arr[i-1];
				 }
                 arr[0] = value;
			break;
		  }
		  case 6: {
		  	    int deleteIndex;
		  	    printf("Nhap vi tri muon xoa phan tu: ");
		  	    scanf("%d",&deleteIndex);
		  	    for (int i = deleteIndex; i < size - 1; i++){
		  	    	arr[i] = arr[i + 1];
				  }
				 size--;
			break;
		  }
		  case 7: {
		  	    int j;
				int maxIndex;
				int temp;
		  	    for( int i = 0; i < size - 1; i++) {
                   maxIndex = i;
                   for(j = i + 1; j < size; j++) {
                       if(arr[j] > arr[maxIndex]) {
                       maxIndex = j;
                     }
                }
                  if(maxIndex != i) {
                  temp = arr[i];
                  arr[i] = arr[maxIndex];
                  arr[maxIndex] = temp;
                 }
             }
			break;
		}
		case 11: break;
            default: printf("Lua chon khong hop le\n");
	
	
}
}
while (choice != 11);
	

 return 0;
}
