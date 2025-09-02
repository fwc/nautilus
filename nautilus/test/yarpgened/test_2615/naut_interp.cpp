/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2615
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2615
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<unsigned char> var_18, val<int> zero, val<unsigned char*> var_20, val<unsigned char*> var_21) {
    *var_20 = (val<unsigned char>)255;
    *var_21 = ((val<unsigned char>) var_18);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_18 = (unsigned char)135;
int zero = 0;
unsigned char var_20 = (unsigned char)216;
unsigned char var_21 = (unsigned char)170;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)255;
    value_mismatch |= var_21 != (unsigned char)135;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_18, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
