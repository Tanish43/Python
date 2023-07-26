#include<bits/stdc++.h>
using namespace std;

vector<int> remove_duplicates(int* arr, int n){
    vector<int> output;
    unordered_map<int,bool> map;
    for(int i = 0; i<n; i++){
        if(map.count(arr[i]) == 0){
            output.push_back(arr[i]);
            map[arr[i]] == true;
        }
    }
    return output;
}
int main(){
    
    unordered_map<string,int> mymap;
    pair<string,int> p("Tanish", 1);
    mymap.insert(p);
    cout<<mymap.at("Tanish")<<endl;//throws error if key is not present
    cout<<mymap["tanish"]<<endl;//insert value on its own if not present
    
    mymap["Sharma"] = 4;//general way of inserting
    //mymap.size() tells the size of the map
    /*mymap.count("key") tells whether key is present or not by giving value zero if not present*/
    if(mymap.count("ghi") > 0){
        cout<<"ghi is present"<<endl;
     }else{
        cout<<"not present"<<endl;
     }
    //mymap.erase("key") is use to erase the key
    
    int a[] = {1,2,1,1,3,5,2,3};
    int size = sizeof(a)/sizeof(a[1]);
    vector<int> v = remove_duplicates(a,size);
    for(int i = 0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    unordered_map<string , int > m;
    m["abc"] = 1;
    m["abd"] = 2;
    m["abf"] =17;
    m["abe"] = 17;
    m["abg"] = 12;
    cout<<endl;
    for(unordered_map<string,int>::iterator it =m.begin();it!=m.end();it++ ){
        cout<<"key: "<<it->first<<" value: "<<it->second<<endl;

    }
    //ordered map print in the order in which it is inserted
    map<string , int > m2;
    m2["abc"] = 1;
    m2["abd"] = 2;
    m2["abf"] =17;
    m2["abe"] = 17;
    m2["abg"] = 12;
    cout<<endl;
    for(map<string,int>::iterator it =m2.begin();it!=m2.end();it++ ){
        cout<<"key: "<<it->first<<" value: "<<it->second<<endl;

    }
    unordered_map<string,int>::iterator find =  m.find("abe");
    cout<<find->second;

    return 0;
}