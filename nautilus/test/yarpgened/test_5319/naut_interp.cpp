/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5319
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5319
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
void test(val<unsigned long long int> var_0, val<int> zero, val<unsigned short*> var_14, val<unsigned int*> var_15, val<unsigned short*> var_16) {
    *var_14 = ((/* implicit */val<unsigned short>) ((var_0) - ((~((+(3900166373013857872ULL)))))));
    *var_15 = ((/* implicit */val<unsigned int>) (val<unsigned short>)15898);
    *var_16 = ((/* implicit */val<unsigned short>) max(((val<bool>)1), (((((((/* implicit */val<int>) (val<bool>)1)) - (((/* implicit */val<int>) (val<unsigned char>)96)))) < (920849182)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6616313117927338527ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)38244;
unsigned int var_15 = 1718934962U;
unsigned short var_16 = (unsigned short)43986;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned short)6256;
    value_mismatch |= var_15 != 15898U;
    value_mismatch |= var_16 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, zero, &var_14, &var_15, &var_16);
  checksum();
}
