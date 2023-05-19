#include "Principal.hpp"

Jungle::Principal::Principal():
  window(sf::VideoMode(800.0f,600.0f), "Jungle++"),jogador()
{
  executar();
}

Jungle::Principal::~Principal(){

}

void Jungle::Principal::executar(){

  sf::RectangleShape jogador(sf::Vector2f(200.0f,200.0f));
  jogador.setFillColor(sf::Color::Green);

 while (window.isOpen())
 {
  sf::Event evento;
  if(window.pollEvent(evento))
  if(evento.type == sf::Event::Closed)
    window.close();
    else if (evento.type == sf::Event::KeyPressed)
    {
      if (evento.key.code == sf::Keyboard::Escape)
      {
        window.close();
      }
    }
  }
  window.clear();
  jogador.move();
  window.draw(jogador.getCorpo());
  window.display();
 }
  