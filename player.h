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

};

#endif /* defined(GAMETEST_PLAYER_H_) */

