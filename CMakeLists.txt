cmake_minimum_required(VERSION 2.8)
add_definitions("-Wall -std=c++11")
add_executable(Main
  main.cc
  myfunc.cc
  ship.cc
  myfunc.h
  ship.h
  characterParameter.h
  character.h
  character.cc
  player.h
  player.cc
  enemy.h
  enemy.cc
  battle.h
  battle.cc
)
