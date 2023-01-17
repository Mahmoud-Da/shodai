#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {  //挑戦者が二度目に選ぶ扉を変える場合
     int i;  //for文の制御変数
     int n_win = 0, n_lose = 0;  //（左から）勝ちの回数，負けの回数
     int prize, select_1, select_2, opendoor;  //扉は0,1,2．出力するときは1,2,3
         //（左から）商品の扉，挑戦者が最初に選ぶ扉，挑戦者が二度目に選ぶ扉，モンティホールが開く扉
     int n_game = 10;  //ゲームの回数
     srand(time(NULL));

     for (i = 1; i <= n_game; i++) {
          prize = rand() %3;  //商品の扉をランダムに決める
          select_1 = rand() %3;  //挑戦者が最初に選ぶ扉をランダムに決める

          if (prize == select_1){  //最初に選んだ扉に商品がある場合
               opendoor = (select_1 + (rand() % 2 + 1)) % 3;  //モンティホールは残りの二つの扉から開く扉をランダムに決める
          } else {  //最初に選んだ扉に商品がない場合
               opendoor = 3 - (prize + select_1);  //モンティホールは残りの二つの扉のうち，商品のない扉を開く
          }
          select_2 = 3 - (opendoor + select_1);  //挑戦者が二度目に選ぶ扉を変える

          if (select_2 == prize){  //挑戦者が二度目に選んだ扉に商品がある場合
               n_win += 1;  //勝ちの回数を1だけ増やす
            //    printf(" 賞品の扉=%1d 　|   1回目の扉=%1d,  開く扉=%1d,  2回目の扉=%1d --> 当たり\n", prize+1, select_1+1, opendoor+1, select_2+1);
          } else {  //挑戦者が二度目に選んだ扉に商品がない場合
               n_lose += 1;  //負けの回数を1だけ増やす
            //    printf(" 賞品の扉=%1d 　|   1回目の扉=%1d,  開く扉=%1d,  2回目の扉=%1d --> はずれ\n", prize+1, select_1+1, opendoor+1, select_2+1);
          }
     }
     printf("\n ===選ぶ扉を変更する場合（%d回中）===\n", n_game);  //全ゲームの結果を出力
     printf("　　当たりの回数 = %d\n", n_win);
     printf("　　はずれの回数 = %d\n", n_lose);
}
