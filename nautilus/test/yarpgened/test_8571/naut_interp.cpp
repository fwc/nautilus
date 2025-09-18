/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8571
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8571
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
void test(val<unsigned int> var_6, val<unsigned short> var_9, val<int> zero, val<int*> var_15, val<unsigned long long int*> var_16) {
    *var_15 = ((/* implicit */val<int>) ((var_6) * (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) (val<short>)-32753)))))));
    *var_16 = ((/* implicit */val<unsigned long long int>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2008479544U;
unsigned short var_9 = (unsigned short)31695;
int zero = 0;
int var_15 = 556360153;
unsigned long long int var_16 = 6874467681977108195ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 2011399096;
    value_mismatch |= var_16 != 31695ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_9, zero, &var_15, &var_16);
  checksum();
}
