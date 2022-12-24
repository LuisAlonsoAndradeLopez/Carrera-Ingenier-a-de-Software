/*
Escribir un programa que cuenta cuantas letras de cada una hay en una palabra. Ejemplo: Casa: C:1, A:2, S:1.
*/
#include <iostream>
using namespace std;
int main(){
    string Palabra;
    int Contador;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
    cout<<"Dime una palabra"<<endl;
    cin>>Palabra;
    cout<<"Las letras que hay son: "<<endl;
    for(Contador=0;Contador<Palabra.size();Contador++){
        switch(Palabra[Contador]){
            case 'a':
                a++;
                break;
            case 'b':
                b++;
                break;
            case 'c':
                c++;
                break;
            case 'd':
                d++;
                break;
            case 'e':
                e++;
                break;
            case 'f':
                f++;
                break;
            case 'g':
                g++;
                break;
            case 'h':
                h++;
                break;
            case 'i':
                i++;
                break;
            case 'j':
                j++;
                break;
            case 'k':
                k++;
                break;
            case 'l':
                l++;
                break;
            case 'm':
                m++;
                break;
            case 'n':
                n++;
                break;
            case 'o':
                o++;
                break;
            case 'p':
                p++;
                break;
            case 'q':
                q++;
                break;
            case 'r':
                r++;
                break;
            case 's':
                s++;
                break;
            case 't':
                t++;
                break;
            case 'u':
                u++;
                break;
            case 'v':
                v++;
                break;
            case 'w':
                w++;
                break;
            case 'x':
                x++;
                break;
            case 'y':
                y++;
                break;
            case 'z':
                z++;
                break;
            case 'A':
                a++;
                break;
            case 'B':
                b++;
                break;
            case 'C':
                c++;
                break;
            case 'D':
                d++;
                break;
            case 'E':
                e++;
                break;
            case 'F':
                f++;
                break;
            case 'G':
                g++;
                break;
            case 'H':
                h++;
                break;
            case 'I':
                i++;
                break;
            case 'J':
                j++;
                break;
            case 'K':
                k++;
                break;
            case 'L':
                l++;
                break;
            case 'M':
                m++;
                break;
            case 'N':
                n++;
                break;
            case 'O':
                o++;
                break;
            case 'P':
                p++;
                break;
            case 'Q':
                q++;
                break;
            case 'R':
                r++;
                break;
            case 'S':
                s++;
                break;
            case 'T':
                t++;
                break;
            case 'U':
                u++;
                break;
            case 'V':
                v++;
                break;
            case 'W':
                w++;
                break;
            case 'X':
                x++;
                break;
            case 'Y':
                y++;
                break;
            case 'Z':
                z++;
                break;
        }
    }
    if(a>0){
        cout<<"A: "<<a<<endl;
    }
    if(b>0){
        cout<<"B: "<<b<<endl;
    }
    if(c>0){
        cout<<"C: "<<c<<endl;
    }
    if(d>0){
        cout<<"D: "<<d<<endl;
    }
    if(e>0){
        cout<<"E: "<<e<<endl;
    }
    if(f>0){
        cout<<"F: "<<f<<endl;
    }
    if(g>0){
        cout<<"G: "<<g<<endl;
    }
    if(h>0){
        cout<<"H: "<<h<<endl;
    }
    if(i>0){
        cout<<"I: "<<i<<endl;
    }
    if(j>0){
        cout<<"J: "<<j<<endl;
    }
    if(k>0){
        cout<<"K: "<<k<<endl;
    }
    if(l>0){
        cout<<"L: "<<l<<endl;
    }
    if(m>0){
        cout<<"M: "<<m<<endl;
    }
    if(n>0){
        cout<<"N: "<<n<<endl;
    }
    if(o>0){
        cout<<"O: "<<o<<endl;
    }
    if(p>0){
        cout<<"P: "<<p<<endl;
    }
    if(q>0){
        cout<<"Q: "<<q<<endl;
    }
    if(r>0){
        cout<<"R: "<<r<<endl;
    }
    if(s>0){
        cout<<"S: "<<s<<endl;
    }
    if(t>0){
        cout<<"T: "<<t<<endl;
    }
    if(u>0){
        cout<<"U: "<<u<<endl;
    }
    if(v>0){
        cout<<"V: "<<v<<endl;
    }
    if(w>0){
        cout<<"W: "<<w<<endl;
    }
    if(x>0){
        cout<<"X: "<<x<<endl;
    }
    if(y>0){
        cout<<"Y: "<<y<<endl;
    }
    if(z>0){
        cout<<"Z: "<<z<<endl;
    }
    return 0;
}