//
//  player.h
//
//  Created by 白川 岳史 on 2015/06/29.
//  Copyright (c) 2015年 白川 岳史. All rights reserved.
//

#ifndef GAMETEST_PLAYER_H_
#define GAMETEST_PLAYER_H_

#include "character.h"

class Player : public Character {
    
public:
    //コンストラクタ
    Player();
    //引数付きコンストラクタ
    Player (const StatusData& statusdata);
    //デストラクタ
    ~Player ();
    
    //テスト用関数 後で削除
    void getNumber();

    //アタックポイントの算出
    int calculateAttackPoint();

    void attack(ChrRef target);
    void attacked(int n); //子クラスの関数が引数を持つ場合、純粋仮想関数にも同じ引数を持たせる必要がある？
    void choicePersonalAction();
    void choiceTarget();
    void viewUseableSkill();
};

#endif /* defined(GAMETEST_PLAYER_H_) */

