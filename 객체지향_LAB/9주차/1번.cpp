class T {
   static int a;
   int b;
public:
   T() { a++; }
   int f() { return a; }         //맞음, non-static 멤버함수는 static 멤버변수에 접근 가능
   int g() { return b; }         //맞음, non-static 멤버함수는 non-static 멤버변수에 접근 가능
   static int h() { return a; }  //맞음, static 멤버함수는 static 멤버변수에 접근 가능
   static int s() { return b; }  //틀림, static 멤버함수는 non-static 멤버변수에 접근 불가능
};
