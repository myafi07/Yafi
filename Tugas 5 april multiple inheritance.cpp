#include <iostream>
using namespace std;
class Herbivora{
	public:
		void makanan1(string hewan){
			cout<<hewan<<" Pemakan Tumbuhan"<<endl;
		}
		void bentukGigi(string hewan){
			cout<<hewan<<" Memiliki gigi datar"<<endl;
		}
};
class Karnivora{
	public:
		void makanan2(string hewan){
			cout<<hewan<<" Pemakan Daging"<<endl;
		}
		void bentukGigi(string hewan){
			cout<<hewan<<" Memiliki gigi runcing"<<endl;
		}
};
class Omnivora : public Herbivora, public Karnivora{
	public:
		void makanan3(string hewan){
			cout<<hewan<<" Pemakan Segalanya"<<endl;
		}
		void bentukGigi(string hewan){
			cout<<hewan<<" Memiliki gigi datar dan runcing"<<endl;
		}
};
int main(){
	cout<<"Multiple Inheritance :"<<endl;
	Omnivora omn;
	omn.makanan1("Sapi");
	omn.makanan2("Harimau");
	omn.makanan3("Tikus");
	cout<<"\nOverriding :"<<endl;
	Herbivora her;
	Karnivora kar;
	her.bentukGigi("Sapi");
	kar.bentukGigi("Harimau");
	omn.bentukGigi("Tikus");
}
