/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4730
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4730
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
void test(val<signed char> var_6, val<unsigned char> var_9, val<int> zero, val<short*> var_10, val<signed char*> var_11, val<unsigned char*> var_12) {
    *var_10 = ((/* implicit */val<short>) var_9);
    *var_11 = ((/* implicit */val<signed char>) max((((/* implicit */val<int>) var_6)), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 14909908773763330013ULL)) ? (-5726709900568626974LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)-26206)))))) ? (((((/* implicit */val<bool>) -5726709900568626974LL)) ? (((/* implicit */val<int>) (val<unsigned short>)52748)) : (((/* implicit */val<int>) (val<signed char>)-78)))) : ((((val<bool>)1) ? (((/* implicit */val<int>) (val<short>)15652)) : (((/* implicit */val<int>) (val<unsigned short>)12787))))))));
    *var_12 |= ((/* implicit */val<unsigned char>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-39;
unsigned char var_9 = (unsigned char)166;
int zero = 0;
short var_10 = (short)-13495;
signed char var_11 = (signed char)57;
unsigned char var_12 = (unsigned char)18;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)166;
    value_mismatch |= var_11 != (signed char)12;
    value_mismatch |= var_12 != (unsigned char)219;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
}
