//
//  player.cc
//
//  Created by ���� �x�j on 2015/06/29.
//  Copyright (c) 2015�N ���� �x�j. All rights reserved.
//

#include "player.h"
#include <iostream>


//�R���X�g���N�^
Player::Player():Character(statusdatabase[0]){
}

//�����t���R���X�g���N�^
Player::Player (const StatusData& statusdata):Character(statusdata){
}

//�f�X�g���N�^
Player::~Player (){}

void Player::getNumber(){
    std::cout << status.id << std::endl;
}