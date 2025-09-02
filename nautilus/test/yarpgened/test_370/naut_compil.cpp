/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 370
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=370
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
void test(val<unsigned short> var_1, val<int> var_4, val<unsigned char> var_14, val<int> zero, val<unsigned int*> var_20, val<int*> var_21, val<bool*> var_22) {
    *var_20 ^= ((/* implicit */val<unsigned int>) ((val<unsigned long long int>) (((!(((/* implicit */val<bool>) 9223372036854775797LL)))) ? (((val<unsigned int>) 0LL)) : (((/* implicit */val<unsigned int>) ((var_4) | (((/* implicit */val<int>) (val<unsigned short>)51148))))))));
    *var_21 = (~(var_4));
    *var_22 = ((/* implicit */val<bool>) min((((/* implicit */val<unsigned short>) var_14)), (var_1)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10808;
int var_4 = 2100489516;
unsigned char var_14 = (unsigned char)61;
int zero = 0;
unsigned int var_20 = 877887969U;
int var_21 = -6610278;
bool var_22 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1231121933U;
    value_mismatch |= var_21 != -2100489517;
    value_mismatch |= var_22 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_14, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
