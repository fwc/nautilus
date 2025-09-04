/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6072
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6072
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
void test(val<unsigned char> var_0, val<short> var_4, val<unsigned char> var_5, val<short> var_10, val<long long int> var_12, val<int> zero, val<short*> var_14, val<signed char*> var_15, val<signed char*> var_16) {
    *var_14 = ((/* implicit */val<short>) ((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((val<short>) var_4))) ? ((+(((/* implicit */val<int>) (val<bool>)0)))) : (((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) (val<bool>)1))))))) <= (max((((/* implicit */val<unsigned int>) var_5)), (1927843254U)))));
    *var_15 = ((/* implicit */val<signed char>) max((-4968284497013438213LL), (((/* implicit */val<long long int>) min((((/* implicit */val<int>) var_10)), (((val<int>) 2367124018U)))))));
    *var_16 = ((/* implicit */val<signed char>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)180;
short var_4 = (short)26700;
unsigned char var_5 = (unsigned char)206;
short var_10 = (short)28818;
long long int var_12 = 4409466244590373867LL;
int zero = 0;
short var_14 = (short)14037;
signed char var_15 = (signed char)-31;
signed char var_16 = (signed char)-99;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)1;
    value_mismatch |= var_15 != (signed char)50;
    value_mismatch |= var_16 != (signed char)-76;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, var_10, var_12, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
