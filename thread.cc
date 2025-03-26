#include<iostream>
#include<thread>
#include <vector>
void thread_function(){
    for(int i = 0; i < 10; i++){
        std::cout <<std::this_thread::get_id()<< "---->" << i<<std::endl;
    }
}


int main(){

    int numth=4;
    std::cout<<std::this_thread::get_id()<<std::endl;

    std::vector<std::thread> th;
    for(int i = 0; i < numth; i++){
        th.emplace_back(thread_function);
    }


    for (auto &t : th) {
        if(t.joinable()){
        t.join();  // Ensure all threads complete before exiting
    }
}
    return 0;
}