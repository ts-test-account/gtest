#include <iostream>
#include <random>
#include <numeric>
#include <assert.h>
#include <array>
#include "ship.h"
#include "myfunc.h"
#include "characterParameter.h"
#include "player.h"

int chooseShip( )
{
    // rarityの合計を計算
    int sum_rarity = std::accumulate( SpaceshipProperties.begin( ), SpaceshipProperties.end( ), 0, []( int sum, SpaceshipProperty Ref ){ return sum + Ref.rarity; } );
    // rarityの合計値の範囲で乱数を発生させる
    int random_number = generateRandomNumber( ) * sum_rarity;
    
    // 発生させた乱数に対応する船のタイプを整数にキャストして返す
    int cumulative_probability = 0;
    for ( auto x : SpaceshipProperties )
    {
        cumulative_probability += x.rarity;
        if( random_number < cumulative_probability ){ return static_cast<int>( x.type ); }
    };    
    
    // 発生させた乱数がゼロだった場合は列挙型で最後に登録されているタイプを返す
    return static_cast<int>( SpaceshipType::COUNT ) - 1;
}

int main( ){
    float a = generateRandomNumber( );
    std::cout << a << std::endl;
    
    //決定したタイプの船のインスタンスを生成
    Ship test_ship(SpaceshipProperties[ chooseShip( ) ]);
    
    test_ship.showType( );
    
    Player testplayer;
    testplayer.getNumber();
    
    return 0;
}
