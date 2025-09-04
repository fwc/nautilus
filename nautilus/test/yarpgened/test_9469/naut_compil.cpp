/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9469
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9469
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
void test(val<signed char> var_0, val<long long int> var_1, val<unsigned char> var_10, val<int> zero, val<short*> var_13, val<int*> var_14, val<long long int*> var_15, val<unsigned short*> var_16) {
    *var_13 *= ((/* implicit */val<short>) var_1);
    *var_14 = ((/* implicit */val<int>) min((((/* implicit */val<signed char>) (val<bool>)1)), ((val<signed char>)127)));
    *var_15 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)92))) | (10053506768767544471ULL)))) ? (((/* implicit */val<int>) (val<unsigned short>)0)) : (((/* implicit */val<int>) var_0))));
    *var_16 = ((/* implicit */val<unsigned short>) max((*var_16), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) (val<unsigned char>)163)) : (((/* implicit */val<int>) (val<unsigned char>)165)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-73;
long long int var_1 = -5799937816234048043LL;
unsigned char var_10 = (unsigned char)242;
int zero = 0;
short var_13 = (short)-976;
int var_14 = -1808943321;
long long int var_15 = -4583848899636709191LL;
unsigned short var_16 = (unsigned short)57781;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)-15376;
    value_mismatch |= var_14 != 1;
    value_mismatch |= var_15 != 0LL;
    value_mismatch |= var_16 != (unsigned short)57781;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_10, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
