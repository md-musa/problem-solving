#include "stdio.h"

int main() {
    int T;
    scanf("%d", &T);

    while(T--) {
        int length;
        scanf("%d", &length );
        int arr[length];

        for(int i= 0; i < length; i++) {
            scanf("%d", &arr[i]);

            for(int j = 0; j < i; j++) {
                if(arr[i] < arr[j]) {
                    int tem = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tem;
                }
            }
        }


        int unique = 0;
        for(int i = 0; i < length; i++) {
            if(arr[i] != arr[i+1]) unique++;
        }

        printf("%d", unique);

    }
    return 0;
}



