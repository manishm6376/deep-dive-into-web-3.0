#include <bits/stdc++.h>

using namespace std;


class borrower1{
    public:
    string name;
    string f_name;
    int adhar_no;
    string city;
    int amount;
    int annual_income;
    
    //constructor
    borrower1(string a,string b, int k,string c,int l,int m ){
        name=a;
        f_name=b;
        adhar_no=k;
        city=c;
        amount=l;
        annual_income=m;
    }
};

 class lender2{
    public:
    string b_name;
    int total_amt;
    
     lender2(string w,int x){
        b_name=w;
        total_amt=x;
    }
};

class loan_service{
    public:
    int g;
    int h;
    int i;
    
    
    loan_service (int u,int v,int z){
        g=u;
        h=v;
        i=z;
        
    }
    
    void serve(){ 
      if(g<h){
        cout<<"we can not give you loan";
    }
    else if(g>h&&i>h){
        cout<<"we can give you loan and amount is:"<<endl;
        cout<<h;
    }
    else if(g>h && i<h){
        cout<<"we give you loan and amount is:"<<endl<<(i/2);
    }
   }
};

int main()
{
 
 cout<<"enter the borrower details-name,father name,city,adhar no,loan amount,annual income"<<endl;
 string a;string ba;string c;
 cin>>a >> ba >> c;
 int k,l,m;
 cin>>k>>l>>m;
 
borrower1 b(a,ba,k,c,l,m);
 
 cout<<"enter the lender details- name,his total amount"<<endl;
 
string w;int x;
cin>>w;
cin>>x;


 lender2 le(w,x);
 
  
  loan_service qq(x,l,m);
  qq.serve();
 

    return 0;
}