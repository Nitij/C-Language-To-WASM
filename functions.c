#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
float add(float x, float y) {
  return x + y;
}