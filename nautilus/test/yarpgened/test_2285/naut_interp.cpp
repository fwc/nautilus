/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2285
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2285
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
void test(val<unsigned char> var_1, val<unsigned char> var_3, val<short> var_6, val<unsigned char> var_12, val<int> var_15, val<int> zero, val<unsigned short*> var_19, val<long long int*> var_20) {
    *var_19 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_6)) ? ((~(((873983100) << (((((/* implicit */val<int>) var_1)) - (141))))))) : (var_15)));
    *var_20 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((((/* implicit */val<bool>) var_12)) || (((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_12)))))))) >> (((((/* implicit */val<int>) var_3)) - (83)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)141;
unsigned char var_3 = (unsigned char)111;
short var_6 = (short)15715;
unsigned char var_12 = (unsigned char)24;
int var_15 = -897832650;
int zero = 0;
unsigned short var_19 = (unsigned short)1849;
long long int var_20 = -6903517903365632161LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)4995;
    value_mismatch |= var_20 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_6, var_12, var_15, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
