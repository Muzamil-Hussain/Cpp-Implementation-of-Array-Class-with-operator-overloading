#include "array.h"
int main()
{
	Array a1(5);
	cout<<"Taking input for array a1\n";
	cin>>a1;
	cout<<"Displaying array a1\n"<<a1<<endl;

	Array a2(a1.getArr(),a1.getSiz());
	cout<<"Displaying array a2\n"<<a2<<endl;

	Array a3(a2);
	cout<<"Displaying array a3\n"<<a2<<endl;

	a1[2]=5;
	cout<<"Displaying 2nd index element of a1: "<<a1[2]<<endl;

	a2=a1;
	cout<<"Displaying a2 after assigning a1 to it\n"<<a2<<endl;

    Array sum;
    sum=a2+a1;
    Array dif;
    dif=a2-a1;

	cout<<"Displaying sum of a2 and a1\n"<<sum<<endl;
	cout<<"Displaying difference of a2 and a1\n"<<dif<<endl;

	cout<<"Displaying a1 after pre-incrementing \n"<<++a1<<endl;
	cout<<"Displaying a1 after post-incrementing \n"<<a1++<<endl;
//	cout<<"Displaying a1 after post-decrementing \n"<<a1--<<endl;
//	cout<<"Displaying a1\n"<<a1<<endl;

	cout<<"Displaying a1\n"<<a1<<endl;
	cout<<"Displaying a2\n"<<a2<<endl;
	cout<<"it shows that a1 is not equal to a2\n"<<(a1==a2)<<endl;

	cout<<"it shows that a2 is equal to a2\n"<<(a2==a2)<<endl;

	cout<<"it shows that a2 is not empty\n"<<(!a2)<<endl;

	a2+=a1;
	cout<<"incremeting a1 in a2 and then displaying\n"<<a2<<endl;
	a2-=a1;
	cout<<"decrementing a1 in a2 and then displaying\n"<<a2<<endl;

	cout<<"It shows that value 1 at index 1 is removed: "<<a2(1,1);
	cout<<"Displaying a2 after removing value\n "<<a2<<endl;





}
