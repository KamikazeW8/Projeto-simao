#pragma once

#include "Jogador.hpp"
#include "GerenciadorGrafico.hpp"

namespace Jungle
{
  class Principal
  {
  private:
    Gerenciador::GerenciadorGrafico* pGrafico;
    sf::RenderWindow window;
    Jogador::Jogador jogador;
  public:
    Principal();
    ~Principal();
    void executar();
  };
}
