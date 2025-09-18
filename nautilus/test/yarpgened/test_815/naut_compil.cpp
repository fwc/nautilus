/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 815
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=815
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
void test(val<unsigned char> var_5, val<int> zero, val<unsigned short*> var_15, val<unsigned int*> var_16) {
    *var_15 ^= ((/* implicit */val<unsigned short>) 1768791145);
    *var_16 = ((/* implicit */val<unsigned int>) max((max(((+(6855813714250703563ULL))), (((/* implicit */val<unsigned long long int>) var_5)))), (((/* implicit */val<unsigned long long int>) (val<unsigned char>)106))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)103;
int zero = 0;
unsigned short var_15 = (unsigned short)11594;
unsigned int var_16 = 1321118008U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)45347;
    value_mismatch |= var_16 != 3693748939U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, zero, &var_15, &var_16);
  checksum();
}
