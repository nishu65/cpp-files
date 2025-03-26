#include<iostream>
#include<vector>
#include<string>
class Solution {
    public:
        bool isValid(std::string s) {
            if(s.empty()){
                return false;
            }
            std::cout<<"st: "<<s<<"\n";
            std::vector<int> stack;
            for(int i=0;i<s.size();i++){
                if(stack.empty()){
                    stack.push_back(int(s[i]));
                    std::cout<<"s int e:"<<int(s[i])<<"\n";
                }
                 else{
                    std::cout<<"s int ne:"<<int(s[i])<<"\n";
                    if(stack.back()+1==int(s[i])||stack.back()+2==int(s[i])){
                        std::cout<<"pop :"<<int(s[i])<<"\n";
                        stack.pop_back();
                        i++;
                    }
                    stack.push_back(int(s[i]));
                }
                
            }
            if(stack.empty()||stack.front()==0){
                std::cout<<"xxxx"<<std::endl;
                return true;
            }else{
                std::cout<<"back"<<stack.back()<<"\n";
                std::cout<<"yyyyyy"<<std::endl;
                return false;
            }
            
            
        }
    };
int main(){
   std::string s="()";
   Solution a;
   std::cout<<a.isValid(s);
}