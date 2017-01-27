#ifndef GAMETEST_CHARACTER_PARAMETER_H_
#define GAMETEST_CHARACTER_PARAMETER_H_

#include <string>

//�L�����N�^�[�f�[�^�̍\����
struct StatusData {
    int id;
    std::string name;
    int hp; //�q�b�g�|�C���g
    int mp; //�}�W�b�N�|�C���g
    int str; //�U����
    int ac; //�h����
    int ev; //����
    int agi; //�f����
    int intl; //����
    int defaultskill; //���߂��玝���Ă����X�L��
    bool isPlayer; //player���ۂ�
};

//�p�����[�^�f�[�^�x�[�X�@���̃f�[�^���ǂ��ɒu���ׂ�����������
static const StatusData statusdatabase[] = {
    {0,"noname", 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1,"warrior", 40, 3, 30, 10, 15, 15, 5, 1, 0},
    {2,"hunter", 30, 10, 20, 5, 18, 20, 10, 3, 0},
    {3,"priest", 10, 50, 5, 3, 10, 15, 20, 1,  0},
    {4,"sorcerer", 15, 50, 5, 3, 10, 15, 20, 7, 0},
    {5,"monk", 50, 10, 20, 8, 20, 25, 5, 1, 0},
    {6,"�I�[�N",26,0,10,3,0,0,0,0, 1},
    {7,"�S�u����",20,0,10,3,0,0,0,0, 1},
    {8,"�O���[���X���C��",18,0,10,3,0,0,0,0, 1},
    {9,"�R�{���g",20,0,10,3,0,0,0,0, 1},
    {10,"�쌢",11,0,10,3,0,0,0,0, 1},
    {11,"�s�N�V�[",5,0,10,3,0,0,0,0, 1},
    {12,"�W���C�A���g�X�p�C�_�[",33,0,10,3,0,0,0,0, 1},
    {13,"�����S�L�u��",30,0,10,3,0,0,0,0, 1},
    {14,"�h���S��",50,0,10,3,0,0,0,0, 1},
    {15,"��",10,0,20,20,0,0,0,0, 1}
};

#endif /* defined(GAMETEST_CHARACTER_PARAMETER_H_) */

