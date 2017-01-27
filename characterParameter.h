#ifndef GAMETEST_CHARACTER_PARAMETER_H_
#define GAMETEST_CHARACTER_PARAMETER_H_

//キャラクターデータの構造体
struct StatusData {
    int id;
    std::string name;
    int hp; //ヒットポイント
    int mp; //マジックポイント
    int str; //攻撃力
    int ac; //防御力
    int ev; //回避
    int agi; //素早さ
    int intl; //賢さ
    int defaultskill; //初めから持っているスキル
    bool isPlayer; //playerか否か
};

//パラメータデータベース　このデータをどこに置くべきか検討する
static const StatusData statusdatabase[] = {
    {0,"noname", 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1,"warrior", 40, 3, 30, 10, 15, 15, 5, 1, 0},
    {2,"hunter", 30, 10, 20, 5, 18, 20, 10, 3, 0},
    {3,"priest", 10, 50, 5, 3, 10, 15, 20, 1,  0},
    {4,"sorcerer", 15, 50, 5, 3, 10, 15, 20, 7, 0},
    {5,"monk", 50, 10, 20, 8, 20, 25, 5, 1, 0},
    {6,"オーク",26,0,10,3,0,0,0,0, 1},
    {7,"ゴブリン",20,0,10,3,0,0,0,0, 1},
    {8,"グリーンスライム",18,0,10,3,0,0,0,0, 1},
    {9,"コボルト",20,0,10,3,0,0,0,0, 1},
    {10,"野犬",11,0,10,3,0,0,0,0, 1},
    {11,"ピクシー",5,0,10,3,0,0,0,0, 1},
    {12,"ジャイアントスパイダー",33,0,10,3,0,0,0,0, 1},
    {13,"巨大ゴキブリ",30,0,10,3,0,0,0,0, 1},
    {14,"ドラゴン",50,0,10,3,0,0,0,0, 1},
    {15,"蛇",10,0,20,20,0,0,0,0, 1}
};

#endif /* defined(GAMETEST_CHARACTER_PARAMETER_H_) */

