#ifndef MYGAME_H
#define MYGAME_H
#include "Game.hpp"

class MyGame : public Game {
public:
    MyGame(int scrwidth, int scrheight, std::string title, int style);
    ~MyGame();
    void update(float deltaTime);
    void draw();
    void processEvents(float deltaTime);
    sf::RenderWindow* getWindow();
private:
    float timer;
};

#endif // MYGAME_H
