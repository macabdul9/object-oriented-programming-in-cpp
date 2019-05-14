/*
 * @author    : macab (macab@debian)
 * @file      : inheritance
 * @created   : Tuesday May 14, 2019 01:44:44 IST
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

class Account{
    protected:
        int salary;

};

class Developer : private Account{
    public :
            int bonus;
};

class DjangoDeveloper: public Developer{
    string profile;
    public:
            DjangoDeveloper(string profile, int salary, int bonus){
                this->profile = profile;
                this->salary = salary;
                this->bonus = bonus;

            }

            void show(){
                cout << "profile : " << this->profile << endl;
                cout << "salary : " << this->salary << endl;
                cout << "bonus : " << this->bonus << endl;
            }
};


int main(){
	ios::sync_with_stdio(0);


    DjangoDeveloper dd("Senior Developer", 3535454, 38545);

    dd.show();


	return 0;
}

