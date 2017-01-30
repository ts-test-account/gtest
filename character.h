//
//  character.h
//
//  Created by 白川 岳史 on 2015/06/29.
//  Copyright (c) 2015年 白川 岳史. All rights reserved.
//

#ifndef GAMETEST_CHARACTER_H_
#define GAMETEST_CHARACTER_H_

#include <memory>
#include "characterParameter.h"

class Character;
typedef std::shared_ptr<Character> ChrRef;

class Character {
    
protected:
    StatusData status;
    
public:
    //コンストラクタ
    Character();
    
    //引数付きコンストラクタ
    Character (const StatusData& st);
    
    //デストラクタ
    ~Character();
    
    //ここにゲッター、セッターが必要か再検討

    //純粋仮想関数
    virtual void attack(ChrRef target) = 0;
    virtual void attacked(int n) = 0; //子クラスの関数が引数を持つ場合、純粋仮想関数にも同じ引数を持たせる必要がある？
    virtual void choicePersonalAction() = 0;
    virtual void choiceTarget() = 0;
    virtual void viewUseableSkill() = 0; //enemyクラスには不要な実装なのでこの形が正しいかどうか後で検証
};

#endif /* defined(GAMETEST_CHARACTER_H_) */
