/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3229
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3229
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
void test(val<long long int> var_0, val<unsigned char> var_2, val<unsigned long long int> var_3, val<unsigned char> var_5, val<unsigned char> var_8, val<unsigned short> var_11, val<unsigned char> var_12, val<int> zero, val<signed char*> var_13, val<short*> var_14, val<signed char*> var_15, val<int*> var_16) {
    *var_13 = ((/* implicit */val<signed char>) var_0);
    *var_14 = ((/* implicit */val<short>) ((((((/* implicit */val<int>) var_8)) <= (((/* implicit */val<int>) var_11)))) ? (((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<short>)28672))))) ? (max((var_3), (var_3))) : (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_8))))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11)))));
    *var_15 = ((/* implicit */val<signed char>) var_12);
    *var_16 = ((/* implicit */val<int>) ((val<unsigned short>) (((!(((/* implicit */val<bool>) var_0)))) ? (((((/* implicit */val<bool>) (-9223372036854775807LL - 1LL))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) var_8)) != (((/* implicit */val<int>) var_5)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -92584831602736190LL;
unsigned char var_2 = (unsigned char)11;
unsigned long long int var_3 = 12244916656803631179ULL;
unsigned char var_5 = (unsigned char)41;
unsigned char var_8 = (unsigned char)94;
unsigned short var_11 = (unsigned short)45031;
unsigned char var_12 = (unsigned char)5;
int zero = 0;
signed char var_13 = (signed char)10;
short var_14 = (short)19236;
signed char var_15 = (signed char)-24;
int var_16 = 59396041;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)-62;
    value_mismatch |= var_14 != (short)20555;
    value_mismatch |= var_15 != (signed char)5;
    value_mismatch |= var_16 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_8, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
