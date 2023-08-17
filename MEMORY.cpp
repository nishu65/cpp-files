#include<iostream>
using namespace std;
int main(){
int size;
cout<<"ENTER SIZE OF ARRAY : ";
cin>>size;
int *ptr=(int*)malloc(size*sizeof(int));
if(ptr==NULL){
    cout<<"MEMORY NOT ALLOCATED"<<endl;
    return 0;
}
else{
cout<<"memory allocated."<<endl;
};
for(int i=0;i<size;i++){
    int a;
    cout<<"enter array at index "<<i;
    cin>>a;
    ptr[i]=a;

}
cout<<"ARRAY : ";
for(int b=0;b<size;b++){
cout<<ptr[b]<<",";
}


free(ptr);
};