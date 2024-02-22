#include<iostream>
#include<list>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
/*
    p-pointer
    iterator list:p++,p--
                ==,!=
*/     
void display(list<string> &names)
{
    cout<<endl;
    for(string e:names)
        cout<<e<<" ";
}

template<class T>
void display1(T &names)
{
    cout<<endl;
    for(auto e:names)
        cout<<e<<" ";
}

//in list we cannot use STL sort algorithm for that list provides function sort()
int main()
{
    list<string> names;
    //inserting at front and rear
        names.push_back("murali");
        names.push_front("vijay");
        names.push_back("samba");
        names.push_front("chandra");
        names.push_front("ravi");
        // for(string e:names)
        //     cout<<e<<" ";
        //display(names);


    //deleting at front and rear
        //names.pop_back();
        // names.pop_front();
        // cout<<endl;
        // // for(string e:names)
        // //     cout<<e<<" ";
        // display(names);

     //max_element   
        // list<string>::iterator it=max_element(names.begin(),names.end());----->//iterator
        // cout<<*it;

    //sort(names.begin(),names.end())//not possible in list


    //sort() function
        // names.sort();//alterante for sort algorithm for list
        // display(names);
    

    /*
        iterator vector:pointer+int,p-int,p-p,p++,p--
                >,<,>=,<=,==,!=
        p-pointer
        iterator list:p++,p--
                     ==,!=
        
        whille doing comparision we always use != operator  in list and vector because < operator is not available in list
    */
        // vector<string> vn={"ravi","vijay","murali"};
        // list<string> ln={"varma","uday","chnadra"};
        // display1(vn);
        // display1(ln);
        // auto itv=vn.begin();
        // auto itl=ln.begin();
        // vn.push_back("harsha");
        // itv=vn.begin();
        // ln.push_back("bhanu");
        // cout<<*itv<<endl;
        // cout<<*itl<<endl;
        // // itv=itv+1;
        // // cout<<*itv;
        // while(itv!=vn.end())
        // {
        //     cout<<*itv<<" ";
        //     itv++;
        // }
        // cout<<"\n";
        // while(itl!=ln.end())
        // {
        //     cout<<*itl<<" ";
        //     itl++;
        // }

        //it is not possible  pointer cannot add to an integer
            // itl=itl+1;
            // cout<<*itl;
    //=========================================================================================
    //find algorithm
        // list<string>::iterator it=find(begin(names),end(names),"mu");
        // if(it==end(names))
        //     cout<<"not found"<<endl;
        // else
        //     cout<<*it<<endl;
    


    return 0;
}