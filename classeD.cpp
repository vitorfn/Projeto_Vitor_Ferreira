class D{
    private:
    int D1;
    string D2;
    public:
    D();
    void MD1();
    void MD2();
};

D::D(){
    D1 = 0;
    D2 = "";
};

void D::MD1(){
    cout << "MD1" << endl;
}

void D::MD2(){
    cout << "MD2" << endl;
}