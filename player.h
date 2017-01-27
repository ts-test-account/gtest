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
    virtual ~Player ();
    
    //ゲッター、セッターが必要か再検討

    //戦闘処理用関数
    void attack(ChrRef target);
    void attacked(int n);
    void choicePersonalAction();
    void choiceTarget();
    void viewUseableSkill();
};

#endif /* defined(GAMETEST_PLAYER_H_) */

