#include<iostream>
#include<vector>
class permutation{
    public:
    void display(std::vector<int>perv,int index){
        if(index==perv.size()){
            for(int i:perv){
                std::cout<<i;
            }
            std::cout<<std::endl;
            return;
        }
        for(int i= index;i<perv.size();i++){
            std::swap(perv[index],perv[i]);
            display(perv,index+1);
            std::swap(perv[index],perv[i]);
        }
    }
};
int main(){
    int n;
std::cout<<"enter size of n:";
std::cin>>n;
std::vector<int>per(n);
for(int i=1;i<=n;i++){
    per[i-1]=i;
}
permutation p;
p.display(per,0);


}