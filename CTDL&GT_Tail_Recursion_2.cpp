// nguon https://freetuts.net/de-quy-duoi-tail-recursion-2951.html
// vi du
#include <stdio.h>
 
int UCLN(int m, int n){
  int r;
  if(m<n) return UCLN(n,m);
  r = m % n;
  if(r == 0) return n;
  else return UCLN(n,r);
}
 
int main() {
  int kq,m,n;
  printf("nhap m : ");
  scanf("%d", &m);
  printf("nhap n : ");
  scanf("%d", &n);
  kq = UCLN(m,n);
  printf("ket qua la : %d" , kq );
}
