/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 69
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=69
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
void test(val<long long int> var_0, val<unsigned int> var_1, val<long long int> var_4, val<unsigned short> var_7, val<long long int> var_9, val<long long int> var_10, val<signed char> var_11, val<int> zero, val<short*> var_12, val<bool*> var_13, val<unsigned short*> var_14, val<int*> var_15) {
    *var_12 = ((/* implicit */val<short>) var_11);
    *var_13 = ((/* implicit */val<bool>) min((var_9), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_0)) && (((/* implicit */val<bool>) ((val<unsigned short>) var_11))))))));
    *var_14 |= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((val<long long int>) ((((/* implicit */val<bool>) var_4)) ? (17217070077449077006ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))))))) ? (((var_0) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned short>) var_1)))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11)))));
    *var_15 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((val<signed char>) (val<bool>)1))) ? (((/* implicit */val<long long int>) (-2147483647 - 1))) : (var_10)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8593162369869751201LL;
unsigned int var_1 = 1488811183U;
long long int var_4 = 30059926665516950LL;
unsigned short var_7 = (unsigned short)9699;
long long int var_9 = -8994279979341219580LL;
long long int var_10 = -5732865047171437924LL;
signed char var_11 = (signed char)63;
int zero = 0;
short var_12 = (short)25503;
bool var_13 = (bool)1;
unsigned short var_14 = (unsigned short)8039;
int var_15 = 1952872137;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)63;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (unsigned short)8191;
    value_mismatch |= var_15 != (-2147483647 - 1);
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_7, var_9, var_10, var_11, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
