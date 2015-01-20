#include "MyGame.hpp"

MyGame::MyGame(int scrwidth, int scrheight, std::string title, int style)
    : Game(scrwidth,scrheight,title,style) {
}

MyGame::~MyGame() {}

void MyGame::update(float deltaTime){
}

void MyGame::draw(){
}

void MyGame::processEvents(float deltaTime){
    sf::Event event;
    while (window.pollEvent(event)) {
        switch (event.type) {
        case sf::Event::Closed:
            window.close();
            break;
        case sf::Event::KeyPressed:
            if (event.key.code == sf::Keyboard::Escape) window.close();
            // Add more events to handle them
        default:
            break;
        }
    }
    for(unsigned i=0; i<balls.size();++i){

    }
    timer+=deltaTime;

}

sf::RenderWindow *MyGame::getWindow() {
    return &window;
}
