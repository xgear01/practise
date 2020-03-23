//friend functions
#include <iostream>
using namespace std;
//////////
class beta;  //need fo frifunc declaration
class teta;
class alpha {
	private:
		int data;
	public:
		alpha():data(3) {
		}
		friend int frifunc(alpha, beta,teta); //friend function
		
};
////////
class beta{
	private:
		int data;
	public: 
	beta():data(7) {
	}
	friend int frifunc(alpha, beta,teta); //friend functipn
	
};
//////////
class teta{
	private:
		int data;
	public: 
	teta():data(13) {
	}
	friend int frifunc(alpha, beta,teta); //friend functipn
	
};
/////////////
int frifunc(alpha a, beta b, teta t) {
	return (a.data + b.data+t.data);
}
////////////
int main() {
	alpha aa;
	beta bb;
	teta tt;
	cout<<frifunc(aa, bb,tt)<<endl; //call the function
	return 0;
}








