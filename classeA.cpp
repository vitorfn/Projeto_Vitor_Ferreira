class A{
   private:
      int A1;
      float A2;
   public:
      int getA1();
      void setA1(int valor1);
      float getA2();
      void setA2(float valor2);
      void MA1();
      void MA2();
      void MA3();
};

A::A(){
  A1 = 0;
  A2 = 0;
}

int A::getA1(){
  return A1;
}

void A::setA1(int valor1){
  A1 = valor1;
}

float A::getA2(){
  return A2;
}

void A::setA2(float valor2){
  A2 = valor2;
}

void A::MA1(){
  cout << A1 << endl;
}

void A::MA2(){
  cout << A2 << endl;
}

void A::MA3(){
  cout << "Alteração a classe A partir do clone" << endl;
}