/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4416
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4416
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
void test(val<bool> var_0, val<signed char> var_3, val<long long int> var_4, val<unsigned short> var_5, val<short> var_6, val<bool> var_9, val<int> zero, val<signed char*> var_11, val<unsigned long long int*> var_12, val<long long int*> var_13, val<unsigned short*> var_14) {
    *var_11 = ((/* implicit */val<signed char>) max((var_0), ((((-(-203773010))) < ((~(((/* implicit */val<int>) var_5))))))));
    *var_12 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) min((max((var_4), (((/* implicit */val<long long int>) 203773011)))), (((/* implicit */val<long long int>) max((((/* implicit */val<signed char>) var_0)), (var_3))))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6))) : (var_4)));
    *var_13 = ((/* implicit */val<long long int>) max((var_0), (var_9)));
    *var_14 = ((/* implicit */val<unsigned short>) (~(((((/* implicit */val<bool>) (((val<bool>)0) ? (((/* implicit */val<unsigned long long int>) 203773011)) : (18446744073709551615ULL)))) ? (((/* implicit */val<long long int>) ((var_9) ? (((/* implicit */val<int>) (val<unsigned char>)185)) : (538224131)))) : (((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)13))) | (2199023255551LL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
signed char var_3 = (signed char)-61;
long long int var_4 = 6332080628919987865LL;
unsigned short var_5 = (unsigned short)33031;
short var_6 = (short)16790;
bool var_9 = (bool)0;
int zero = 0;
signed char var_11 = (signed char)74;
unsigned long long int var_12 = 12615744921177581372ULL;
long long int var_13 = 87594277613057975LL;
unsigned short var_14 = (unsigned short)461;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)0;
    value_mismatch |= var_12 != 6332080628919987865ULL;
    value_mismatch |= var_13 != 0LL;
    value_mismatch |= var_14 != (unsigned short)23036;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_6, var_9, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
