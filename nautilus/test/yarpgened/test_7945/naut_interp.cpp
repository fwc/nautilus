/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7945
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7945
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
void test(val<unsigned short> var_1, val<bool> var_2, val<unsigned short> var_3, val<unsigned short> var_6, val<unsigned long long int> var_8, val<long long int> var_9, val<short> var_10, val<int> zero, val<unsigned long long int*> var_12, val<unsigned int*> var_13, val<bool*> var_14, val<long long int*> var_15) {
    *var_12 = min((((/* implicit */val<unsigned long long int>) (!((val<bool>)1)))), ((+(11689591090166850534ULL))));
    *var_13 = ((/* implicit */val<unsigned int>) (((!(((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_6))))))) ? ((~(((var_2) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_1)))))) : (((((/* implicit */val<bool>) (~(var_8)))) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) (val<bool>)1))))));
    *var_14 = ((/* implicit */val<bool>) min((((/* implicit */val<long long int>) (val<signed char>)-104)), (var_9)));
    *var_15 = var_9;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3147;
bool var_2 = (bool)1;
unsigned short var_3 = (unsigned short)53011;
unsigned short var_6 = (unsigned short)11187;
unsigned long long int var_8 = 4262987771372129432ULL;
long long int var_9 = 936347813650621711LL;
short var_10 = (short)-17604;
int zero = 0;
unsigned long long int var_12 = 10916463335301810864ULL;
unsigned int var_13 = 857988738U;
bool var_14 = (bool)0;
long long int var_15 = 5758015598098744438LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 0ULL;
    value_mismatch |= var_13 != 4294949692U;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != 936347813650621711LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_6, var_8, var_9, var_10, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
