/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9376
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9376
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
void test(val<int> var_3, val<unsigned int> var_5, val<signed char> var_6, val<unsigned short> var_10, val<signed char> var_15, val<int> zero, val<signed char*> var_16, val<unsigned long long int*> var_17) {
    *var_16 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min((var_6), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) 1511789674U)) || (((/* implicit */val<bool>) var_15))))))))) <= (((((/* implicit */val<unsigned int>) var_3)) - (var_5)))));
    *var_17 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_10)) ? (((val<long long int>) var_15)) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)10554)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1341609213;
unsigned int var_5 = 2076439481U;
signed char var_6 = (signed char)-89;
unsigned short var_10 = (unsigned short)54576;
signed char var_15 = (signed char)-6;
int zero = 0;
signed char var_16 = (signed char)-21;
unsigned long long int var_17 = 307918499072130209ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)0;
    value_mismatch |= var_17 != 18446744073709551610ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_6, var_10, var_15, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
