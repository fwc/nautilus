/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2419
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2419
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
void test(val<short> var_1, val<signed char> var_4, val<unsigned short> var_6, val<int> zero, val<unsigned long long int*> var_18, val<unsigned int*> var_19, val<unsigned long long int*> var_20) {
    *var_18 = ((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) var_4)), ((-(((/* implicit */val<int>) ((8457273792021620685LL) >= (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)(-127 - 1)))))))))));
    *var_19 += ((/* implicit */val<unsigned int>) ((val<signed char>) (-((~(((/* implicit */val<int>) (val<signed char>)125)))))));
    *var_20 = ((/* implicit */val<unsigned long long int>) max((*var_20), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_1)) >= (((((/* implicit */val<int>) (val<unsigned short>)64469)) ^ (((/* implicit */val<int>) var_6)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28229;
signed char var_4 = (signed char)59;
unsigned short var_6 = (unsigned short)38914;
int zero = 0;
unsigned long long int var_18 = 6196535326607542372ULL;
unsigned int var_19 = 1461923189U;
unsigned long long int var_20 = 9131596500586595174ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 18446744073709551615ULL;
    value_mismatch |= var_19 != 1461923315U;
    value_mismatch |= var_20 != 9131596500586595174ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_6, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
