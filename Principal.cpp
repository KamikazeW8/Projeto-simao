#include "Principal.hpp"

Jungle::Principal::Principal():
  pGrafico(pGrafico->getGerenciadorGrafico())
{
  executar();
}

Jungle::Principal::~Principal(){

}

void Jungle::Principal::executar(){

  sf::RectangleShape jogador(sf::Vector2f(200.0f,200.0f));
  jogador.setFillColor(sf::Color::Green);

 while (pGrafico->VerificaJanelaAberta())
 {
  sf::Event evento;
  if(pGrafico->getWindow()->pollEvent(evento))
  if(evento.type == sf::Event::Closed)
    pGrafico->FecharJanela();
    else if (evento.type == sf::Event::KeyPressed)
    {
      if (evento.key.code == sf::Keyboard::Escape)
      {
        pGrafico->FecharJanela();
      }
    }
  }
  pGrafico->limpaJanela();
  jogador.move();
  window.draw(jogador.getCorpo());
  window.display();
 }
  
  
