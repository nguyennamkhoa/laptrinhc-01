#include<iostream>
using namespace std;
main(){
	int a, nam;
	cout<<"nhap so thang can kiem tra: ";
	cin>>a;
	cout<<"Nhap nam ";
		cin>>nam;
		if(nam % 4 == 0 && nam % 100 != 0 || nam % 400==0){
			cout<<"Thang 2 co 29 ngay";
			}else {
			cout<<"Thang 2 co 28 ngay";
			}
	if(a <= 1 && a<= 12){
	if(a==1||a==3||a==5||a==7||a==8||a==10||a==12){
		cout<<"co 31 ngay ";
	}
	if(a==4||a==6||a==9||a==11){
		cout<<"co 30 ngay ";
		}
		}
} 
