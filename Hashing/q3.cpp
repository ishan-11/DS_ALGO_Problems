//open adressing technique for hashing for insert search erase
#include<bits/stdc++.h>
using namespace std;

struct Myhash
{
    int *arr;
    int cap,size;

    Myhash(int c)
    {
        cap=c;
        size=0;
        arr=new int[cap];
        for(int i=0;i,cap;i++)
        arr[i]=-1;
    }

    int hash(int key)
    {
        return key%cap;
    }

    bool insert(int key)
    {
         if(size==cap)
            return false;
        int i=hash(key);
        while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key)
            i=(i+1)%cap;
        if(arr[i]==key)
            return false;
        else{
            arr[i]=key;
            size++;
        
               return true;
    }
    }
    
}