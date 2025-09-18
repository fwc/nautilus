/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4640
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4640
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
void test(val<unsigned char> var_5, val<bool> var_8, val<bool> var_15, val<int> zero, val<short*> var_16, val<long long int*> var_17) {
    *var_16 = ((/* implicit */val<short>) ((var_8) ? (((/* implicit */val<int>) var_5)) : ((+(((/* implicit */val<int>) var_15))))));
    *var_17 = ((/* implicit */val<long long int>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)143;
bool var_8 = (bool)1;
bool var_15 = (bool)0;
int zero = 0;
short var_16 = (short)12216;
long long int var_17 = 4399818921954389006LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)143;
    value_mismatch |= var_17 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_8, var_15, zero, &var_16, &var_17);
  checksum();
}
