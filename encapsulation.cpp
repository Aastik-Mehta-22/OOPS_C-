#include<bits/stdc++.h>
using namespace std;
 //This is what encapsulation 
class Account{
private:
    double salary;
    string password; // data hiding  (data hidden from outside world)

public:
    string accountId;
    string username;

    void setaccountId(string id){
        accountId = id;
    }


};
int main()
{
    Account a1;
    a1.setaccountId("1234");
    cout<<a1.accountId<<endl; // 1234
    return 0;
}