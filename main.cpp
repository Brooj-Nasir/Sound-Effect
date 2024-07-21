#include<iostream>
#include<conio.h>
#include <iostream>
#include <windows.h>
#include<mmsystem.h>
using namespace std;

using namespace std;
int main(){
	
	int n;
	cout<<"Enter integer=";
	cin>>n;
	switch (n%2){
		case 0:
				cout<<"Displaying music:";
			PlaySound(TEXT("like-a-boss-136519.wav"),NULL,SND_SYNC);
			break;
		case 1 :
			cout<<"odd";
			break;
		default:
			cout<<"Invalid";
			break;
	}
	return 0;
}
