#include <iostream>

using namespace std;

int main () {
    int a,b,c,d,e;
    int par=0,imp=0,pos=0,neg=0;
    cin >>a;
    cin >>b;
    cin >>c;
    cin >>d;
    cin >>e;
    {
    if (a>0){
        pos++;}
    if (a%2==0){
        par++;}
    if (!(a%2==0)){
        imp++;}
    if (a<0){
        neg++;}
    if (b>0){
        pos++;}
    if (b%2==0){
        par++;}
    if (!(b%2==0)){
        imp++;}
    if (b<0){
        neg++;}
    if (c>0){
        pos++;}
    if (c%2==0){
        par++;}
    if (!(c%2==0)){
        imp++;}
    if (c<0){
        neg++;}
    if (d>0){
        pos++;}
    if (d%2==0){
        par++;}
    if (!(d%2==0)){
        imp++;}
    if (d<0){
        neg++;}
    if (e>0){
        pos++;}
    if (e%2==0){
        par++;}
    if (!(e%2==0)){
        imp++;}
    if (e<0){
        neg++;}
    }
    cout << par << " valor(es) par(es)"<<endl;
    cout << imp << " valor(es) impar(es)"<<endl;
    cout << pos << " valor(es) positivo(s)"<<endl;
    cout << neg << " valor(es) negativo(s)"<<endl;

    return 0;
}
