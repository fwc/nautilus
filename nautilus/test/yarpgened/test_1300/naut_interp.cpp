/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1300
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1300
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
void test(val<signed char> var_5, val<unsigned int> var_7, val<unsigned short> var_8, val<long long int> var_9, val<int> zero, val<unsigned long long int*> var_11, val<unsigned char*> var_12, val<short*> var_13, val<signed char*> var_14) {
    *var_11 = ((((val<unsigned long long int>) ((val<bool>) var_8))) >> (((((/* implicit */val<int>) var_8)) - (27034))));
    *var_12 = ((/* implicit */val<unsigned char>) var_7);
    *var_13 = ((/* implicit */val<short>) min((((((/* implicit */val<long long int>) ((/* implicit */val<int>) max((((/* implicit */val<short>) var_5)), ((val<short>)-17161))))) % (var_9))), (((/* implicit */val<long long int>) ((val<unsigned char>) min((var_7), (var_7)))))));
    *var_14 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) var_7))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)88;
unsigned int var_7 = 1136957114U;
unsigned short var_8 = (unsigned short)27035;
long long int var_9 = 2333838679050968129LL;
int zero = 0;
unsigned long long int var_11 = 6034841892675858003ULL;
unsigned char var_12 = (unsigned char)192;
short var_13 = (short)2891;
signed char var_14 = (signed char)-50;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 0ULL;
    value_mismatch |= var_12 != (unsigned char)186;
    value_mismatch |= var_13 != (short)88;
    value_mismatch |= var_14 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_7, var_8, var_9, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
