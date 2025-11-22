#include<stdio.h>
#include<string.h>
int main(){
    int height[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=sizeof(height)/sizeof(height[0]);
    int result=trap(height,n);
    printf("Water trapped = %d\n",result);
    return 0;
}
int trap(int height[],int n){
    int left=0,right=n-1,leftmax=0,rightmax=0,water=0;
    while(left<right){
        if (height[left] < height[right]) {
            if (height[left] >= leftmax) {
                leftmax = height[left];
            } else {
                water += leftmax - height[left];
            }
            left++;
        } else {
            if (height[right] >= rightmax) {
                rightmax = height[right];
            } else {
                water += rightmax - height[right];
            }
            right--;
        }
    }
    return water;
}