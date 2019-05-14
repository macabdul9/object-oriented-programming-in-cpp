/*
 * @author    : macab (macab@debian)
 * @file      : aggregation
 * @created   : Tuesday May 14, 2019 02:51:16 IST
*/
#include<bits/stdc++.h>
#define endl                  "\n"
#define merge(a, b)           a##b
#define loop(i,a,b)           for(int i=(int)a;i<(int)b;++i)
#define rloop(i,a,b)          for(int i=(int)a;i<=(int)b;++i)
#define loopl(i,a,b)          for(ll i=(ll)a;i<(ll)b;++i)
#define loopr(i,a,b)          for(int i=(int)a;i>=(int)b;--i)
#define MOD                   1000000007
#define MAX                   1e9
#define MIN                   -1e9
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define psi                   pair<string, int>
#define pci                   pair<char, int>
#define all(p)                p.begin(),p.end()
#define max(x,y)              (x>y)?x:y
#define min(x,y)              (x<y)?x:y
#define vi                    vector<int>
#define vll                   vector<long long int>
#define vs                    vector<string>
#define si                    set<int>
#define ss                    set<string>
#define sll                   set<long long int>
#define mii                   map<int, int>
#define mll                   map<long long int, long long int>
#define msi                   map<string, int>
#define umii                  unordered_map<int, int>
#define umsi                  unordered_map<string, int>
typedef long long int ll;
typedef unsigned int uint;
typedef unsigned long long int ull;
using namespace std;

class Address{
    string street, city , state;
    int pin;
    public:
    Address(string street, string city, string state, int pin){
        this->street = street;
        this->city = city;
        this->state = state;
        this->pin = pin;
    }

    void show(){
        cout << this->street << ", "<< this->city << ", " << this->state << ", " << this->pin << endl;
    }
};

class Employee{
    Address* address;

    string name;
    int salary;

    public:

    Employee(string name, int salary, Address* address){
        this->name = name;
        this->salary = salary;
        this->address = address;
    }
    void show(){
        cout << "name : " << this->name << endl;
        cout << "address :";
        address->show();
        cout << "salary : " << this->salary << endl;
    }

};

int main(){
	ios::sync_with_stdio(0);

    Address address("A-49, 4th Floor", "New Delhi", "Delhi", 110025);
    Employee e("Abdul", 125932343, &address);
    e.show();

	return 0;
}

