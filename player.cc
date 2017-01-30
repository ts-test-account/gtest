//
//  player.cc
//
//  Created by ���� �x�j on 2015/06/29.
//  Copyright (c) 2015�N ���� �x�j. All rights reserved.
//

#include "player.h"


//�R���X�g���N�^
Player::Player():Character(statusdatabase[0]){
}

//�����t���R���X�g���N�^
Player::Player (const StatusData& statusdata):Character(statusdata){
}

//�f�X�g���N�^
virtual Player::~Player (){
}

