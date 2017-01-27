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

//�v���C���[�̍U��
void Player::attack(ChrRef target) {
    std::cout << name <<"�̍U��" << std::endl;
    
    int damagepoint = dunRand(1, getStr()) - target->getAc();

    //�U���l���[���ȉ��ɂȂ�ꍇ��1�ɂ���
    if (damagepoint <= 0) {
        damagepoint = 1;
    }
    std::cout << target->getName() << "��" << damagepoint << "�̃_���[�W" << std::endl;
    target->attacked(damagepoint);
}

//�v���C���[���U�����󂯂�
void Player::attacked(int n) {
    setHp(getHp() - n);
    
    if (getHp() <= 0) {
        std::cout << name <<"�͓|�ꂽ" << std::endl;
    }
}

//�Z��I��
void Player::choicePersonalAction(){
    std::cout << this->name << "�̋Z��I�����ĉ�����" << std::endl;
    std::cin >> this->personalaction;
}

//�^�[�Q�b�g��I��
void Player::choiceTarget(){
    std::cout << this->name << "�̃^�[�Q�b�g��I�����ĉ�����" << std::endl;
    std::cin >> this->target;
}

//�g�p�\�ȋZ��\������
void Player::viewUseableSkill(){
    //�S�r�b�g���X�L����
    int tokugiindex = 0;
    for (int i = 1; i != 0; i <<= 1){
        if ((skill & i) != 0) {
            std::cout << actions[tokugiindex].id << ":" << actions[tokugiindex].name << std::endl;
        }
        tokugiindex++;
    }

}


