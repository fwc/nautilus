/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 71
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=71
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
void test(val<unsigned char> var_0, val<unsigned long long int> var_1, val<unsigned char> var_2, val<unsigned int> var_5, val<unsigned int> var_8, val<int> zero, val<unsigned short*> var_10, val<unsigned int*> var_11, val<short*> var_12) {
    *var_10 &= ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) ((val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)(-127 - 1)))) > (var_8))))) << (((((/* implicit */val<bool>) min((((/* implicit */val<unsigned char>) (val<signed char>)123)), (var_0)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_0)))))) : (((((/* implicit */val<bool>) var_8)) ? (var_5) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2)))))))));
    *var_11 = ((/* implicit */val<unsigned int>) var_1);
    *var_12 = ((/* implicit */val<short>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)173;
unsigned long long int var_1 = 5799645099925599519ULL;
unsigned char var_2 = (unsigned char)52;
unsigned int var_5 = 730389841U;
unsigned int var_8 = 1034798033U;
int zero = 0;
unsigned short var_10 = (unsigned short)13285;
unsigned int var_11 = 2979550832U;
short var_12 = (short)-19523;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)1;
    value_mismatch |= var_11 != 2489742623U;
    value_mismatch |= var_12 != (short)-8879;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_5, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
