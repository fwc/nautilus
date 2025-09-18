/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5515
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5515
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
void test(val<unsigned short> var_1, val<int> var_5, val<int> zero, val<unsigned short*> var_12, val<unsigned short*> var_13) {
    *var_12 = ((/* implicit */val<unsigned short>) var_5);
    *var_13 = var_1;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35785;
int var_5 = -1761890071;
int zero = 0;
unsigned short var_12 = (unsigned short)64169;
unsigned short var_13 = (unsigned short)10442;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)45289;
    value_mismatch |= var_13 != (unsigned short)35785;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, zero, &var_12, &var_13);
  checksum();
}
