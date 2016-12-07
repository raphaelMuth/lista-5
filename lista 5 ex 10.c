using namespace std;

int fun(){

    int k = 4;
    return k*2;
}

int main(){

    int a, b;
    a = 10;
    b = a + fun();
    printf("Com a chamada a função pela direita, ");
    printf("b = %d\n", b);
    a = 10;
    b = fun() + a;
    printf("Com a chamada a função pela esquerda, ");
    printf("b = %d\n", b);

}
