/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5612
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5612
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
void test(val<unsigned char> var_1, val<int> var_2, val<bool> var_4, val<unsigned int> var_5, val<unsigned int> var_6, val<unsigned int> var_7, val<int> zero, val<signed char*> var_15, val<unsigned char*> var_16, val<short*> var_17, val<int*> var_18) {
    *var_15 = ((/* implicit */val<signed char>) min((min((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_1)) ? (var_2) : (-32)))), (min((((/* implicit */val<unsigned int>) (val<unsigned char>)127)), (var_6))))), (((/* implicit */val<unsigned int>) max((min((((/* implicit */val<int>) (val<unsigned short>)8)), (20))), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned char>)242))))))))));
    *var_16 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)172))) : (var_7)));
    *var_17 = ((/* implicit */val<short>) var_4);
    *var_18 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) (val<unsigned char>)243)) : (((20) ^ (((/* implicit */val<int>) (val<signed char>)-16)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)115;
int var_2 = 15025365;
bool var_4 = (bool)1;
unsigned int var_5 = 4153334269U;
unsigned int var_6 = 3336595013U;
unsigned int var_7 = 1101557164U;
int zero = 0;
signed char var_15 = (signed char)-25;
unsigned char var_16 = (unsigned char)66;
short var_17 = (short)404;
int var_18 = -135478219;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)8;
    value_mismatch |= var_16 != (unsigned char)172;
    value_mismatch |= var_17 != (short)1;
    value_mismatch |= var_18 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_5, var_6, var_7, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
