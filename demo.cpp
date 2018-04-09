class demoInterface{
    public:
    getResults(int a, int b, int c)=0;

};

class demoClass: demoInterface{
    private:
    int a;
    int b;
    int c;
    public:
    demoClass(int a, int b, int c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
    getResults(int a, int b, int c){
        auto x = add(a,b, c);
        auto y = sub(a,b, c);
        
    };
    int add(int a, int b, int c){
        return a+b+c;
    };
    
    int sub(int a, int b){
        return a-b;
    };

};
