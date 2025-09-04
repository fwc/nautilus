/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6562
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6562
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
void test(val<unsigned short> var_1, val<bool> var_5, val<short> var_8, val<unsigned int> var_10, val<long long int> var_13, val<unsigned int> var_15, val<int> zero, val<unsigned short*> var_17, val<signed char*> var_18) {
    *var_17 = ((/* implicit */val<unsigned short>) (~(((((/* implicit */val<long long int>) var_15)) & (var_13)))));
    *var_18 = ((/* implicit */val<signed char>) min((((/* implicit */val<long long int>) var_1)), (((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_8)) ? (var_10) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5)))))) | (((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)-21026))) - (var_13)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35646;
bool var_5 = (bool)1;
short var_8 = (short)-5359;
unsigned int var_10 = 1615337301U;
long long int var_13 = -3971565056169544643LL;
unsigned int var_15 = 287542112U;
int zero = 0;
unsigned short var_17 = (unsigned short)30040;
signed char var_18 = (signed char)94;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)32735;
    value_mismatch |= var_18 != (signed char)62;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_8, var_10, var_13, var_15, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
