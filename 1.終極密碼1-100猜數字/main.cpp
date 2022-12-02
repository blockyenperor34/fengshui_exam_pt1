#include <iostream>
#include <cstdlib>
#include <ctime> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main()
{
	int randNum,ans=0,counter=0,front=1,rear=100;
	srand(time(NULL));
	randNum=(rand()%100)+1;
	
	while(randNum!=ans){
		counter++;
		cout <<"(" << counter << ").請輸入 "<<front<<"~"<<rear<<"之間的數(輸入0結束遊戲) : ";
		cin >> ans;
		if (ans > rear || ans < front){
			cout << "超出範圍("<<front<<"~"<<rear<<")了喔!" << endl;
			counter--;
			continue; }
		if (ans==0) break;
		if (ans>randNum){
				cout << "\t數值要再小一點喔!" << endl;
				rear=ans;}
		if (ans<randNum){
				cout << "\t數值要再大一點喔!" << endl;
				front=ans;}
	}
			if (ans!=0) 
			 cout << "bingo! 你只花了 "<< counter << "次就猜對了。答案就是" <<randNum<< endl;
			else
			 cout << "正確答案為 "<< randNum << endl; 
			 
	return 0;
}