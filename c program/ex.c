#include<stdio.h>
int sum (int a, int b){
    return a+b;
} 

int square(int a){
    return a*a;
}
int main(){
    int a =10, b =20,c,d;
    c = sum(a,b);
    d = square(a);
    printf("sum is: %d\n",c);
    printf("SQuare of a: %d\n",d);
    return 0;
}



//create multiple files for main, fucntion and prototype and compile it

//gcc file1 file2 file3 -c (we'll recieve obj file)
// link obj file and get the executable file
//gcc obj1 obj2 obj3 -o all.out
//./all.out

// rm *.o.all.out(removes the obj files)


//#ifndef
//#define

//func declaration

//#endif


//dependencies  :  MakeFile (create makefile)