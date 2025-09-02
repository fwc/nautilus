/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 352
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=352
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
void test(val<unsigned short> var_2, val<unsigned int> var_4, val<signed char> var_6, val<short> var_8, val<bool> var_10, val<signed char> var_11, val<long long int> var_12, val<int> zero, val<long long int*> var_14, val<unsigned char*> var_15, val<unsigned long long int*> var_16, val<short*> var_17, val<unsigned char*> var_18) {
    *var_14 = ((/* implicit */val<long long int>) ((((((/* implicit */val<int>) (val<short>)6)) << (((/* implicit */val<int>) (val<short>)6)))) % (((/* implicit */val<int>) max((((/* implicit */val<short>) var_6)), (var_8))))));
    *var_15 *= ((/* implicit */val<unsigned char>) ((val<long long int>) (val<signed char>)-1));
    *var_16 = ((/* implicit */val<unsigned long long int>) var_2);
    *var_17 = ((/* implicit */val<short>) (-(var_4)));
    *var_18 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) ((var_12) < (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10)))))), ((+(var_4)))))) ? (min((0LL), (((/* implicit */val<long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11))) >= (var_4)))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (((+(var_12))) < (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_2)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)30103;
unsigned int var_4 = 1227396381U;
signed char var_6 = (signed char)-80;
short var_8 = (short)-8041;
bool var_10 = (bool)1;
signed char var_11 = (signed char)126;
long long int var_12 = 4820580763939569089LL;
int zero = 0;
long long int var_14 = 7927372078084217274LL;
unsigned char var_15 = (unsigned char)7;
unsigned long long int var_16 = 5119455934643051120ULL;
short var_17 = (short)3508;
unsigned char var_18 = (unsigned char)203;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 64LL;
    value_mismatch |= var_15 != (unsigned char)249;
    value_mismatch |= var_16 != 30103ULL;
    value_mismatch |= var_17 != (short)27363;
    value_mismatch |= var_18 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_6, var_8, var_10, var_11, var_12, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
