/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7714
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7714
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
void test(val<unsigned short> var_6, val<unsigned int> var_10, val<int> zero, val<unsigned short*> var_11, val<unsigned int*> var_12) {
    *var_11 = var_6;
    *var_12 = ((/* implicit */val<unsigned int>) min((*var_12), (var_10)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)46242;
unsigned int var_10 = 3356778291U;
int zero = 0;
unsigned short var_11 = (unsigned short)566;
unsigned int var_12 = 318456654U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned short)46242;
    value_mismatch |= var_12 != 318456654U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_10, zero, &var_11, &var_12);
  checksum();
}
