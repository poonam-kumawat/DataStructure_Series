#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>mp;
    mp[1]="HEllo";//o(logn)
    mp[5]="Poonam";
    mp[2]="Hey";

    //inserting in different way
    mp.insert({4,"Poonam"});
    

    for(auto i:mp){

        //first will print the key and second will print the value in map
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<" finding 5  "<<mp.count(5)<<endl;//o(logn)

    //After erase
    mp.erase(4);//o(logn)
    cout<<" after erase "<<endl;
    for(auto i:mp){

        //first will print the key and second will print the value in map
        cout<<i.first<<" "<<i.second<<endl;
    }

    //find

    auto it=mp.find(5);
    for(auto i=it;i!=mp.end();i++){
        cout<<(*i).first<<endl;
    }
}
