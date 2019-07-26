#include <stdio.h>

int particiona(int *v,int inicio,int fim);

void quick_sort(int *v,int inicio,int fim){
      int divisor = 0;

      if(inicio < fim){
        divisor = particiona(v,inicio,fim);
        quick_sort(v,inicio,divisor-1);
        quick_sort(v,divisor+1,fim);
      }
}

int particiona(int *v,int inicio, int fim){
      int pivo = v[inicio];
      int esq = inicio+1;
      int dir = fim;
      int temp = 0;
      int divisor;

      while(esq < dir){
        while(v[esq] <= pivo && esq <= fim)esq++;
        while(v[dir] > pivo && dir >= inicio)dir++;

        if(esq<=dir){
            temp = v[esq];
            v[esq] = v[dir];
            v[dir] = temp;
        }
      }
      divisor = dir;

      if(v[inicio] > v[divisor]){
          temp = v[inicio];
          v[inicio] = v[divisor];
          v[divisor] = temp;
      }
      return (divisor);
}






























int main(){
  int v[10]={90,-20,8,-4,-200,19,100,4,1,800};

 quick_sort(v, 0, 9);

  int i=0;
  for(i=0;i<10;i++)
    printf("%d \n",v[i]);
  return(0);
}
