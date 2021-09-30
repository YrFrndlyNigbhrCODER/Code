#include <stdio.h>
#include<stdlib.h>

 void func(){
 	static int i = 0;
 	i++;
 	printf("i = %d\n",i);
 }
int main(void){
	func();	
	func();
	func();
	func();
}