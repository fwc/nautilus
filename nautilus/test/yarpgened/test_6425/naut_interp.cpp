/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6425
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6425
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
void test(val<signed char> var_2, val<short> var_3, val<unsigned short> var_5, val<unsigned short> var_6, val<long long int> var_8, val<long long int> var_9, val<short> var_10, val<unsigned short> var_12, val<signed char> var_15, val<int> zero, val<int*> var_16, val<unsigned long long int*> var_17, val<short*> var_18, val<signed char*> var_19, val<int*> var_20) {
    *var_16 = ((/* implicit */val<int>) var_15);
    *var_17 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((((/* implicit */val<int>) var_10)) + (2147483647))) >> ((((-(((/* implicit */val<int>) var_6)))) + (59612)))))) ? (var_9) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5)))));
    *var_18 = ((/* implicit */val<short>) max((*var_18), (((/* implicit */val<short>) ((((((/* implicit */val<long long int>) (-(((/* implicit */val<int>) var_10))))) % (min((((/* implicit */val<long long int>) var_2)), (var_8))))) < (max((((((/* implicit */val<long long int>) 2079334193)) - (var_8))), (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_12))))))))))));
    *var_19 = ((/* implicit */val<signed char>) var_12);
    *var_20 = (~(((((((/* implicit */val<int>) var_15)) << (((((/* implicit */val<int>) var_10)) + (10557))))) % (((/* implicit */val<int>) var_3)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-35;
short var_3 = (short)-14750;
unsigned short var_5 = (unsigned short)27764;
unsigned short var_6 = (unsigned short)59598;
long long int var_8 = -407425958607236716LL;
long long int var_9 = 19365230317326603LL;
short var_10 = (short)-10541;
unsigned short var_12 = (unsigned short)41380;
signed char var_15 = (signed char)48;
int zero = 0;
int var_16 = 260384264;
unsigned long long int var_17 = 4694449153721680522ULL;
short var_18 = (short)5041;
signed char var_19 = (signed char)-113;
int var_20 = -98519228;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 48;
    value_mismatch |= var_17 != 19365230317326603ULL;
    value_mismatch |= var_18 != (short)5041;
    value_mismatch |= var_19 != (signed char)-92;
    value_mismatch |= var_20 != -3979;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_5, var_6, var_8, var_9, var_10, var_12, var_15, zero, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
