#include <SFML/Graphics.hpp>
#include <iostream>

namespace Jungle{
  namespace Jogador{
    class Jogador
    {
    private:
      sf::RectangleShape corpo;
      sf::Vector2f vel;
      void inicializa();
    public:
      Jogador();
      Jogador(const sf::RectangleShape corpo);
      Jogador(const sf::Vector2f pos , const sf::RectangleShape tam);
      ~Jogador();
      const sf::RectangleShape getCorpo();
      void move();
      void executar();
    };
  }
}

