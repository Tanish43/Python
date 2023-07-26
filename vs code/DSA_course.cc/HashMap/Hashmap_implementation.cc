#include<bits/stdc++.h>
using namespace std;

template<typename V>
class MapNode{

public:
    string key;
    V value;
    MapNode *next;

    MapNode(string key, V value){
        this->key = key;
        this->value = value;
        next = NULL;
    }
    ~MapNode(){
        delete next;
    }
};

template<typename V>
class mymap{
   private:
       MapNode<V>** buckets;
       int count;
       int numBuckets;

       int getBucketIndex(string key){
           int hashcode = 0;
           int base = 1;
           int p = 37;
           for(int i=key.size()-1;i>=0;i--){
                hashcode += key[i] * base;
                base = base * p;
                hashcode = hashcode%numBuckets;
                base = base%numBuckets;
           }
           return hashcode%numBuckets;
       }
   public:
    mymap(){
        count = 0;
        numBuckets = 5;
        buckets = new MapNode<V>*[numBuckets];
        for(int i=0;i<numBuckets;i++){
            buckets[i] = NULL;
        }
    }
    ~mymap(){
       for(int i=0;i<numBuckets;i++){
        delete buckets[i];
       }
       delete []buckets;
    }

    int size(){
       return count;
    }

    V getValue(string key){
        int bucketIndex = getBucketIndex(key);
        MapNode<V>* head = buckets[bucketIndex];
        while(head!=NULL){
            if(head->key == key){
                return head->value;
            }
            head = head->next;
        }
        return 0;
    }
    //Time Complexity to insert is T(n/b)where n is total no. of entries and b is bucket size
    // and n/b is called load factor where n/b should be less than 0.7. 
    void insert(string key, V value){
      int bucketIndex = getBucketIndex(key);
      MapNode<V>* head = buckets[bucketIndex];
      while(head!=NULL){
        if(head->key == key){
            head->value = value;
            return;
        }
        head = head->next;
      }
      MapNode<V>* node = new MapNode<V>(key,value);
      node->next = buckets[bucketIndex];
      buckets[bucketIndex] = node;
      count++;
    }

    V remove(string key){
        int bucketIndex = getBucketIndex(key);
        MapNode<V>* head = buckets[bucketIndex];
        MapNode<V>* prev = NULL;
        while(head!=NULL){
            if(head->key == key){
                if(prev == NULL){
                    buckets[bucketIndex] = head->next;
                }else{
                    prev->next = head->next;
                }
                V value = head->value;
                head->next = NULL;
                delete head;
                count--;
                return value;
            }
            
            prev = head;
            head = head->next;
        }
        return 0;
    }
};
int main(){
mymap<int> m;
    m.insert("Hello",67);
    m.insert("World",34);
    m.insert("Walt",23);
    m.insert("Jesse",43);
    cout<<"Jesse : "<<m.getValue("Jesse")<<endl;
    cout<<m.size();
  return 0;
}
