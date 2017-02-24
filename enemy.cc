//
//  enemy.cc
//
//  Created by 白川 岳史 on 2015/06/29.
//  Copyright (c) 2015年 白川 岳史. All rights reserved.
//

#include "enemy.h"
#include <iostream>
#include "battle_rand.h"


//コンストラクタ
Enemy::Enemy():Character(statusdatabase[0]){
}

//引数付きコンストラクタ
Enemy::Enemy (const StatusData& statusdata):Character(statusdata){
}

//デストラクタ
Enemy::~Enemy (){}

//攻撃値の算出
int Enemy::calculateAttackPoint(){
    return BattleRand(1, status.str);
}

//プレイヤーの攻撃処理
void Enemy::attack(ChrRef target) {
    std::cout << status.name <<"の攻撃" << std::endl;
    target->attacked(calculateAttackPoint());
}

//ダメージ値の算出
int Enemy::calculateDamagePoint(int attackpoint){
    int damagepoint = status.ac - attackpoint;
    if (damagepoint <= 0) {
        return 1;
    }
    return damagepoint;
}

//プレイヤーが攻撃を受ける
void Enemy::attacked(int n) {
    int damagepoint = calculateDamagePoint(n);
    status.hp = status.hp - damagepoint;
    std::cout << status.name << "に" << damagepoint << "のダメージ" << std::endl;

    if (status.hp <= 0) {
        std::cout << status.name <<"は倒れた" << std::endl;
    }
}

// //技を選択
// void Enemy::choicePersonalAction(){
//     std::cout << this->name << "の技を選択して下さい" << std::endl;
//     std::cin >> this->personalaction;
// }

// //ターゲットを選択
// void Enemy::choiceTarget(){
//     std::cout << this->name << "のターゲットを選択して下さい" << std::endl;
//     std::cin >> this->target;
// }

// //使用可能な技を表示する
// void Enemy::viewUseableSkill(){
//     //全ビットをスキャン
//     int tokugiindex = 0;
//     for (int i = 1; i != 0; i <<= 1){
//         if ((skill & i) != 0) {
//             std::cout << actions[tokugiindex].id << ":" << actions[tokugiindex].name << std::endl;
//         }
//         tokugiindex++;
//     }

// }
