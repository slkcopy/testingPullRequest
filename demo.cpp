class demoInterface{
    public:
    getResults(int a, int b)=0;

};

class demoClass: demoInterface{
    private:
    int a;
    int b;
    public:
    demoClass(int a, int b){
        this->a = a;
        this->b = b;
    }
    getResults(int a, int b){
        auto x = add(a,b);
        auto y = sub(a,b);
    };
    int add(int a, int b){
        return a+b;
    };
    

}