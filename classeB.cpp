class B{
   private:
      int B1;
      float B2;
   public:
      int getB1();
      void setB1(int valor1);
      float getB2();
      void setB2(float valor2);
      void MB1();
      void MB2();
      void MB3();
};

B::B(){
  B1 = 0;
  B2 = 0;
}

int B::getB1(){
  return B1;
}

void B::setB1(int valor1){
  B1 = valor1;
}

float B::getB2(){
  return B2;
}

void B::setB2(float valor2){
  B2 = valor2;
}

void B::MB1(){
  cout << B1 << endl;
}

void B::MB2(){
  cout << B2 << endl;
}

void B::MB3(){
  cout << "Alteração a classe B partir do clone" << endl;