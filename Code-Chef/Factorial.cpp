#include <stdio.h>
int main(){
  int i,j;
  scanf("%d",&j);
  unsigned long long x, result;

  for (i=0;i<j;i++){
    scanf("%llu",&x);
    result = 0;
    while(x>0){
    x /= 5;
    result += x;
    }
    printf("%llu\n",result);  
  }  

return 0;
}