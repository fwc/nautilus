/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9525
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9525
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
void test(val<long long int> var_3, val<short> var_9, val<int> zero, val<short*> var_14, val<signed char*> var_15, val<signed char*> var_16, val<long long int*> var_17, val<bool*> var_18) {
    *var_14 &= ((/* implicit */val<short>) var_3);
    *var_15 = ((/* implicit */val<signed char>) max((*var_15), (((/* implicit */val<signed char>) (!(((((/* implicit */val<bool>) (val<unsigned short>)10767)) && (((/* implicit */val<bool>) (val<unsigned short>)63488)))))))));
    *var_16 = ((/* implicit */val<signed char>) ((val<unsigned short>) (val<unsigned short>)7168));
    *var_17 &= ((/* implicit */val<long long int>) var_9);
    *var_18 = ((/* implicit */val<bool>) (+(((((/* implicit */val<bool>) (val<unsigned short>)10773)) ? (((/* implicit */val<int>) (val<signed char>)121)) : (((/* implicit */val<int>) (val<signed char>)93))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7364551843005980601LL;
short var_9 = (short)5261;
int zero = 0;
short var_14 = (short)25040;
signed char var_15 = (signed char)81;
signed char var_16 = (signed char)-101;
long long int var_17 = 2251519459350108824LL;
bool var_18 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)16784;
    value_mismatch |= var_15 != (signed char)81;
    value_mismatch |= var_16 != (signed char)0;
    value_mismatch |= var_17 != 4232LL;
    value_mismatch |= var_18 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_9, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
