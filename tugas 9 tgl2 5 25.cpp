#include <iostream>
using namespace std;


int main ()
{
	int umur;
	cout<<"masukan umur :";
	cin>>umur;
	
	if(umur<=18){
		if(umur<=10){
		cout<<"anak-anak"<<endl;
	}else{
		cout<<"remaja"<<endl;
	}
	}else{
	cout<<"bukan usia anak maupun remaja"<<endl;
}
}  
