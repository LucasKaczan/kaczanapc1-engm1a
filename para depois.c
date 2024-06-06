#include <stdio.h>

int main () {
  struct medicamento_t {
  char codigo_barra[12];
  char principio_ativo[61];
  float preco;
  enum { vermelha, preta, amarela } tarja;
  };
  return 0;
}