#include <stdio.h>
int main(){
  int i,j;
  scanf("%d",&j);
  unsigned long long x, count;

  for (i=0;i<j;i++){
    scanf("%llu",&x);
    count = 0;
    while(x>0){
    if((x%10)==4)
    {
        count++;
    }
    x /= 10;
    }
    printf("%llu\n",count);  
  }  

return 0;
}