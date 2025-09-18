/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6187
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6187
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
void test(val<unsigned char> var_1, val<unsigned char> var_3, val<unsigned short> var_9, val<unsigned short> var_11, val<int> zero, val<signed char*> var_13, val<int*> var_14) {
    *var_13 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) max(((val<unsigned short>)53989), ((val<unsigned short>)11546))))))) | (max((((((/* implicit */val<bool>) (val<unsigned char>)240)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_1)))), (((/* implicit */val<int>) var_3))))));
    *var_14 = min((min(((-(((/* implicit */val<int>) (val<signed char>)13)))), ((-(((/* implicit */val<int>) var_9)))))), (max((((/* implicit */val<int>) (val<unsigned short>)53989)), (0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)203;
unsigned char var_3 = (unsigned char)44;
unsigned short var_9 = (unsigned short)39714;
unsigned short var_11 = (unsigned short)48899;
int zero = 0;
signed char var_13 = (signed char)51;
int var_14 = 477005379;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)3;
    value_mismatch |= var_14 != -39714;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_9, var_11, zero, &var_13, &var_14);
  checksum();
}
