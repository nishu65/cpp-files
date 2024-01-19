int pow(int a,int b){
    int i;
    int c=a;
    if(b==0){
        return 1;
    }
    for (i=1;i<b;i++){
        c=c*a;
    }
    return c;

}