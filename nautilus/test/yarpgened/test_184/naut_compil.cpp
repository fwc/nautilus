/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 184
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=184
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
void test(val<unsigned short> var_1, val<int> var_2, val<unsigned short> var_4, val<unsigned short> var_5, val<unsigned short> var_6, val<unsigned short> var_9, val<int> var_11, val<int> zero, val<unsigned short*> var_12, val<int*> var_13) {
    *var_12 &= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) min((((/* implicit */val<int>) (val<unsigned short>)64643)), (((((/* implicit */val<bool>) (val<unsigned short>)44894)) ? (((/* implicit */val<int>) var_5)) : (-1082290034)))))) ? ((~(var_11))) : (((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) max((var_9), (var_9)))) : (((/* implicit */val<int>) (val<unsigned short>)46566))))));
    *var_13 = max((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)64039)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_1))))) ? (((/* implicit */val<int>) max((var_1), ((val<unsigned short>)1496)))) : (max((((/* implicit */val<int>) var_6)), (4194303))))), (((/* implicit */val<int>) var_5)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)65005;
int var_2 = -870018863;
unsigned short var_4 = (unsigned short)29545;
unsigned short var_5 = (unsigned short)56702;
unsigned short var_6 = (unsigned short)5700;
unsigned short var_9 = (unsigned short)9878;
int var_11 = 1163623150;
int zero = 0;
unsigned short var_12 = (unsigned short)22893;
int var_13 = 1599793342;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)257;
    value_mismatch |= var_13 != 65005;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_5, var_6, var_9, var_11, zero, &var_12, &var_13);
  checksum();
}
