#include <iostream>

using namespace std;

int main(){
    int i, f, s, type, ptr;
    int ptr,i,type;
    if(ptr[i].type==type){

        s+=ptr[i].qty*ptr[i].price;
        f=1;
    }
}
int i, ptr, type, s,f
    if(f==0){
        cout<<"There are no products whose type is equal to "<<type<<endl;
        return;

    cout<<"Total asset of products of type "<<type<<" is "<<s<<endl
    }


    void calculate_totalasset(product* ptr,int n){
        double s=0;

        for(int i=0;i<n;i++){

            s+=ptr[i].qty*ptr[i].price;
        }

        cout<<"Total asset of grocery shop is "<<s<<endl;

    }

    int main(){

    int n;

    cout<<"How many products you want to store: ";
    cin>>n;
    product *ptr;

    ptr=new product[n];
    int c=0;


    cout<<"Enter details of product:\n";


    product *pt=ptr;

    while(c<n){
        cout<<"Id: ";
        cin>>pt->id;

        cout<<"Name: ";
        cin>>pt->name;

        cout<<"Brand Name: ";
        cin>>pt->brand;

        cout<<"Type: ";
        cin>>pt->type;

        cout<<"Quantity: ";
        cin>>pt->qty;

        cout<<"Price: ";
        cin>>pt->price;

        cout<<endl;

        pt++;
        c++;
    }


    displayabove40(ptr,n);cout<<endl;

    string brand;
    cout<<"Enter the brand of product whose information is to be displayed: ";
    cin>>brand;
    displayby_brandname(ptr,n,brand);cout<<endl;

    string type;
    cout<<"Enter the type of product whose total asset is to be calculated: ";
    cin>>type;
    calculateassetby_type(ptr,n,type);cout<<endl;

    calculate_totalasset(ptr,n);

    return 0;
    }

