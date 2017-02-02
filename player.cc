//
//  player.cc
//
//  Created by 白川 岳史 on 2015/06/29.
//  Copyright (c) 2015年 白川 岳史. All rights reserved.
//

#include "player.h"
#include <iostream>
#include "battle_rund.h"


//コンストラクタ
Player::Player():Character(statusdatabase[0]){
}

//引数付きコンストラクタ
Player::Player (const StatusData& statusdata):Character(statusdata){
}

//デストラクタ
Player::~Player (){}

void Player::getNumber(){
    std::cout << status.id << std::endl;
}

//プレイヤーの攻撃
void Player::attack(ChrRef target) {
    std::cout << status.name <<"の攻撃" << std::endl;
    
    int damagepoint = BattleRand(1, status.str) - target->getAc();

    //攻撃値がゼロ以下になる場合は1にする
    if (damagepoint <= 0) {
        damagepoint = 1;
    }
    std::cout << target->getName() << "に" << damagepoint << "のダメージ" << std::endl;
    target->attacked(damagepoint);
}

//プレイヤーが攻撃を受ける
void Player::attacked(int n) {
    setHp(getHp() - n);
    
    if (getHp() <= 0) {
        std::cout << name <<"は倒れた" << std::endl;
    }
}

//技を選択
void Player::choicePersonalAction(){
    std::cout << this->name << "の技を選択して下さい" << std::endl;
    std::cin >> this->personalaction;
}

//ターゲットを選択
void Player::choiceTarget(){
    std::cout << this->name << "のターゲットを選択して下さい" << std::endl;
    std::cin >> this->target;
}

//使用可能な技を表示する
void Player::viewUseableSkill(){
    //全ビットをスキャン
    int tokugiindex = 0;
    for (int i = 1; i != 0; i <<= 1){
        if ((skill & i) != 0) {
            std::cout << actions[tokugiindex].id << ":" << actions[tokugiindex].name << std::endl;
        }
        tokugiindex++;
    }

}
