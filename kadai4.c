#include <stdio.h>
#define ENTRY 10

int main()
{
  /* 10人の点数をまず二つの配列a[]、b[]に格納する。
  配列b[]を点数順に並び変える。
  点数順の配列b[]で9番目の点数を変数ninthに保存。
  エントリー順の配列a[]の中からninthと同じ点数を探す。
  a[]の中でのその点数の順位（エントリー順位）を表示
   */

  int a[ENTRY];     /* エントリー順の配列 */
  int b[ENTRY];     /* 点数順に並べる予定の配列 */
  int i,j,ninth,tmp;

  /*10人の点数を入力*/
  for(i=0; i<ENTRY; i++){    /* iは0から始まって9までで合計10人*/
    printf("entry No.%d's score :", i+1);
    scanf("%d", &a[i]);      /* 例えば10番目の人の点数はa[9]に収められる*/
    b[i] = a[i];             /* 一旦b[]にも同様に保存、このあと点数順に並び替え*/
  }

  /* 点数が高い順にb[]を並び替え */
  for(i=0; i<ENTRY; i++){
    for(j=i+1; j<ENTRY; j++){
      if(b[i] < b[j]){
        tmp = b[i];
        b[i] = b[j];
        b[j] = tmp;
      }
    }
  }

  /* 点数を高い順に出力（検算用、なくてもよい）*/
  printf("\nscore order :");
  for(i=0; i<ENTRY; i++){
    printf("%d ",b[i]);
  }

 /* 点数順位９番目の人の点数a[8]を配列b[i]の中から探す。
    見つかった時のiがエントリー順位です */
  for(i=0; i<ENTRY; i++){
    if(a[i] == b[8]){       /* a[0]から始まっているから9番目の点数はa[8] */
      ninth = i+1;
      printf("\n\n9th applicant is entry No.%d\n",ninth);
    }
  }
  return 0;
}
