# BattleSim
BattleEngine is a small C++ turn-based battle simulator built as a learning project.
The goal of this project is to explore clean code structure and gradually build a flexible RPG-style combat system.

The program currently runs in the terminal and allows two fighters to battle using selectable moves.

Features

Turn-based battle loop

Player move selection

Simple move system

Input validation

Structured console battle output

Project Structure
src/
 ├── main.cpp
 ├── Battle.cpp
 ├── Battle.h
 ├── Fighter.cpp
 ├── Fighter.h
 ├── Move.h
Components

Battle
Controls the battle loop and turn flow.

Fighter
Represents a combatant with health and moves.

Move
Simple structure representing an action a fighter can perform.

Build

Compile using g++:

g++ -Wall -std=c++17 src/*.cpp -o battle_engine

Run:

./battle_engine
Future Development

This project will continue expanding with features such as:

additional move types

enemy AI

expanded combat mechanics

improved UI

possible graphical interface

Purpose

BattleEngine is being developed as a learning project to practice C++ and software design while building a modular game system.

Author

Personal project by [your name].
