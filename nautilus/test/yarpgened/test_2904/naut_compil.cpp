/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2904
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2904
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
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
void test(val<int> var_0, val<bool> var_4, val<unsigned char> var_7, val<int> var_9, val<int> zero, val<unsigned long long int*> var_13, val<unsigned char*> var_14) {
    *var_13 = ((/* implicit */val<unsigned long long int>) (+(min((((/* implicit */val<int>) var_7)), (((((/* implicit */val<int>) var_4)) + (var_9)))))));
    *var_14 = ((/* implicit */val<unsigned char>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 484030021;
bool var_4 = (bool)0;
unsigned char var_7 = (unsigned char)141;
int var_9 = 670558694;
int zero = 0;
unsigned long long int var_13 = 17491924767136889148ULL;
unsigned char var_14 = (unsigned char)200;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 141ULL;
    value_mismatch |= var_14 != (unsigned char)69;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_7, var_9, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
