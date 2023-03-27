#include <iostream>
using namespace std;

void numberBend(int v)
{
	int out = 9999;
	out = out - v;
	cout<<"Dex:"<<out<<endl;
}

int main(){
	int prediction,f_output, num1, num2;
	cout<<"My Name is Dex!\n";
	cout<<"Enter desired output (5 digits):";
	cin>>prediction;
	 switch(prediction)
	 {
	 	case 10000 ... 19999:
	 		f_output = (prediction - 10000) + 2;
	 		break;
	 	case 20000 ... 29999:
	 		f_output = (prediction - 20000) + 2;
	 		break;
	 	case 30000 ... 39999:
	 		f_output = (prediction - 30000) + 2;
	 		break;
	 	case 40000 ... 49999:
	 		f_output = (prediction - 40000) + 2;
	 		break;
	 	
	 	case 50000 ... 59999:
	 		f_output = (prediction - 50000) + 2;
	 		break;
	 	
	 	case 60000 ... 69999:
	 		f_output = (prediction - 60000) + 2;
	 		break;
	 	
	 	case 70000 ... 79999:
	 		f_output = (prediction - 70000) + 2;
	 		break;
	 	case 80000 ... 89999:
	 		f_output = (prediction - 80000) + 2;
	 		break;
	 	case 90000 ... 99999:
	 		f_output = (prediction - 90000) + 2;
	 		break;
	 	
	 	
	 	
	 }
	cout<<"\n\n Enter 4 digit number \n";
	cout<<"Dex:"<<f_output<<endl;
	cout<<"You:";
	cin>>num1;
	numberBend(num1);
	cout<<"You:";
	cin>>num2;
	numberBend(num2);
	
	cout<<"\n\n The sum is your desired output:"<<prediction;
	
	
	return 0;
	
}
