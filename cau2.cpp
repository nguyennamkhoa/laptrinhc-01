#include<iostream>
using namespace std;
main(){
	int s,a, b, c, d;
	cout<<"Nhap ten sinh vien: ";
	cin>>a;
	cout<<"Nhap diem toan: ";
	cin>>b;
	cout<<"Nhap diem ly: ";
	cin>>c;
	cout<<"Nhap diem hoa: ";
	cin>>d;
	if(s>=8){
		cout<<"xep loai xuat sac";
		}
	if(7<=s<8){
		cout<<"xep loai gioi";
	}
	if(6<=s<7){
		cout<<"xep loai kha";
	}
	if(5<=s<6){
		cout<<"xep loai trung binh";
	}
	if(s<5){
		cout<<"xep loai yeu";
	}
	
	
	
	
}
