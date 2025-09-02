/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5420
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5420
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
void test(val<unsigned long long int> var_0, val<unsigned short> var_1, val<long long int> var_2, val<bool> var_3, val<int> var_4, val<signed char> var_5, val<unsigned long long int> var_9, val<int> zero, val<int*> var_11, val<signed char*> var_12, val<int*> var_13, val<long long int*> var_14) {
    *var_11 = ((/* implicit */val<int>) max((*var_11), (((/* implicit */val<int>) var_5))));
    *var_12 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((var_0) | (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3)))))))))));
    *var_13 = (+(((/* implicit */val<int>) var_3)));
    *var_14 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) ((var_2) <= (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)6357))))))))) ? (((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_1))))) ? (min((((/* implicit */val<unsigned long long int>) var_4)), (11720880139094755552ULL))) : (min((var_9), (((/* implicit */val<unsigned long long int>) var_5)))))) : (((/* implicit */val<unsigned long long int>) (~(((((/* implicit */val<int>) var_3)) * (((/* implicit */val<int>) (val<unsigned short>)40894)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6628158593044619170ULL;
unsigned short var_1 = (unsigned short)10613;
long long int var_2 = -7316510697972577513LL;
bool var_3 = (bool)1;
int var_4 = 876733614;
signed char var_5 = (signed char)-17;
unsigned long long int var_9 = 9358446736492685230ULL;
int zero = 0;
int var_11 = 2122892707;
signed char var_12 = (signed char)72;
int var_13 = -1266173001;
long long int var_14 = 4108493417584361481LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 2122892707;
    value_mismatch |= var_12 != (signed char)1;
    value_mismatch |= var_13 != 1;
    value_mismatch |= var_14 != 876733614LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_9, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
