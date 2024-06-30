#include<iostream>

using namespace std;
#include<deque>

int main()
{
    deque<int>d;
    
    d.push_back(1);
    d.push_front(2);

    // for(int i:d)
    // {
    //     cout<<i<<" ";
    // }
    // d.pop_front();
    // cout<<endl;

    cout<<"print first index ->"<<d.at(1)<<endl;
    cout << "front element" << d.front() << endl;
    cout << "back element" << d.back() << endl;
    
    cout<<"empty or not ->"<<d.empty()<<endl;
    cout<<"before erase ->"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase ->"<<d.size()<<endl;
    for(int i:d) 
    {
        cout<<i<<" ";
    }

}