/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3277
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3277
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
void test(val<unsigned char> var_1, val<unsigned char> var_2, val<unsigned long long int> var_3, val<unsigned int> var_4, val<unsigned short> var_5, val<long long int> var_7, val<bool> var_10, val<unsigned short> var_11, val<unsigned short> var_13, val<unsigned char> var_15, val<int> var_16, val<int> zero, val<bool*> var_17, val<bool*> var_18, val<long long int*> var_19, val<long long int*> var_20) {
    *var_17 *= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-(((((/* implicit */val<bool>) 693700912195864102ULL)) ? (var_7) : (((/* implicit */val<long long int>) var_4))))))) ? (((/* implicit */val<unsigned long long int>) 1566530058U)) : (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))) ^ (((val<unsigned long long int>) 1566530058U))))));
    *var_18 += ((/* implicit */val<bool>) ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 2728437238U)) ? (983040U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)10153)))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_15))) : (((var_3) << (((((/* implicit */val<int>) (val<unsigned short>)51043)) - (51034))))))) + (((/* implicit */val<unsigned long long int>) var_16))));
    *var_19 = ((/* implicit */val<long long int>) min((*var_19), (((/* implicit */val<long long int>) var_2))));
    *var_20 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((((/* implicit */val<bool>) var_1)) ? (var_3) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)49542))))) % (((/* implicit */val<unsigned long long int>) ((var_16) ^ (((/* implicit */val<int>) var_13)))))))) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) ((min((((/* implicit */val<unsigned int>) var_5)), (3408183298U))) > (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)232;
unsigned char var_2 = (unsigned char)184;
unsigned long long int var_3 = 16311392018565329772ULL;
unsigned int var_4 = 649402172U;
unsigned short var_5 = (unsigned short)58852;
long long int var_7 = -6307331404065876906LL;
bool var_10 = (bool)1;
unsigned short var_11 = (unsigned short)10348;
unsigned short var_13 = (unsigned short)52137;
unsigned char var_15 = (unsigned char)112;
int var_16 = 806346957;
int zero = 0;
bool var_17 = (bool)0;
bool var_18 = (bool)1;
long long int var_19 = -589441313934213532LL;
long long int var_20 = -6745557324496333152LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)0;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != -589441313934213532LL;
    value_mismatch |= var_20 != 184LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_7, var_10, var_11, var_13, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
