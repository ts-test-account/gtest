//
//  enemy.h
//
//  Created by 白川 岳史 on 2015/06/29.
//  Copyright (c) 2015年 白川 岳史. All rights reserved.
//

#ifndef GAMETEST_ENEMY_H_
#define GAMETEST_ENEMY_H_

#include "character.h"

class Enemy : public Character {

public:
    //コンストラクタ
    Enemy();
    //引数付きコンストラクタ
    Enemy (const StatusData& statusdata);
    //デストラクタ
    ~Enemy ();
    
    int calculateAttackPoint();
    void attack(ChrRef target);
    int calculateDamagePoint(int attackpoint);
    void attacked(int n); //子クラスの関数が引数を持つ場合、純粋仮想関数にも同じ引数を持たせる必要がある？
    // void choicePersonalAction();
    // void choiceTarget();
    // void viewUseableSkill();
};

#endif /* defined(GAMETEST_ENEMY_H_) */

