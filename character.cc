//
//  character.cc
//
//  Created by 白川 岳史 on 2015/06/29.
//  Copyright (c) 2015年 白川 岳史. All rights reserved.
//

#include "character.h"

//コンストラクタ
Character::Character():status(statusdatabase[0]){}

//引数付きコンストラクタ
Character::Character(const StatusData& st):status(st){}

//デストラクタ
Character::~Character(){}