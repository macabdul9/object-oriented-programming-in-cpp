/*
 * @author    : macab (macab@debian)
 * @file      : friendClass
 * @created   : Tuesday May 14, 2019 01:31:22 IST
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

class Student{
    private:
            string sname;
            int rollNo;
    public:
            Student(string sname, int rollNo){
                this->sname = sname;
                this->rollNo = rollNo;
            }
            friend class Computer;
            // if we write like this
            // friend class Computer:: show();
};

class Computer{
    public:
    void show(Student &s){
        cout << s.sname << " " << s.rollNo << endl;
    }
};

int main(){
	ios::sync_with_stdio(0);

    Student s("abdul", 196407218);

    Computer c;
    c.show(s);


	return 0;
}

