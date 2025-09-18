/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1189
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1189
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
void test(val<long long int> var_0, val<short> var_6, val<bool> var_7, val<unsigned short> var_9, val<bool> var_19, val<int> zero, val<signed char*> var_20, val<long long int*> var_21, val<unsigned long long int*> var_22) {
    *var_20 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) (!(((/* implicit */val<bool>) 1300775698)))))))) ? (((val<unsigned int>) max((((/* implicit */val<unsigned short>) var_19)), (var_9)))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7)))));
    *var_21 = ((/* implicit */val<long long int>) var_6);
    *var_22 -= ((/* implicit */val<unsigned long long int>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4787354427376943710LL;
short var_6 = (short)23953;
bool var_7 = (bool)1;
unsigned short var_9 = (unsigned short)13425;
bool var_19 = (bool)0;
int zero = 0;
signed char var_20 = (signed char)-20;
long long int var_21 = 2649111544356720650LL;
unsigned long long int var_22 = 9994189306304045741ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)1;
    value_mismatch |= var_21 != 23953LL;
    value_mismatch |= var_22 != 5206834878927102031ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_7, var_9, var_19, zero, &var_20, &var_21, &var_22);
  checksum();
}
