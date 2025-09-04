/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6099
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6099
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
void test(val<unsigned long long int> var_2, val<unsigned int> var_5, val<unsigned long long int> var_6, val<unsigned char> var_7, val<short> var_11, val<int> zero, val<unsigned long long int*> var_15, val<signed char*> var_16, val<unsigned short*> var_17, val<int*> var_18) {
    *var_15 = ((/* implicit */val<unsigned long long int>) var_11);
    *var_16 = ((/* implicit */val<signed char>) min((*var_16), (((/* implicit */val<signed char>) var_7))));
    *var_17 = ((/* implicit */val<unsigned short>) max((*var_17), (((/* implicit */val<unsigned short>) var_2))));
    *var_18 = ((/* implicit */val<int>) min((max((((/* implicit */val<unsigned long long int>) var_5)), (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) & (var_6))))), (((/* implicit */val<unsigned long long int>) (val<unsigned short>)25))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5153128609503129633ULL;
unsigned int var_5 = 3865468469U;
unsigned long long int var_6 = 742672475304531622ULL;
unsigned char var_7 = (unsigned char)210;
short var_11 = (short)-24616;
int zero = 0;
unsigned long long int var_15 = 2366511565671457919ULL;
signed char var_16 = (signed char)36;
unsigned short var_17 = (unsigned short)26422;
int var_18 = -2100862608;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 18446744073709527000ULL;
    value_mismatch |= var_16 != (signed char)-46;
    value_mismatch |= var_17 != (unsigned short)26422;
    value_mismatch |= var_18 != 25;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_6, var_7, var_11, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
