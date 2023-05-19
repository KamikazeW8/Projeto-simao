

#include "Jogador.hpp"

namespace Jungle
{
  class Principal
  {
  private:
    sf::RenderWindow window;
    Jogador::Jogador jogador;
  public:
    Principal();
    ~Principal();
    void executar();
  };
}