/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9544
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9544
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
void test(val<long long int> var_0, val<signed char> var_2, val<long long int> var_6, val<int> var_7, val<long long int> var_9, val<long long int> var_10, val<int> zero, val<bool*> var_15, val<int*> var_16, val<bool*> var_17, val<long long int*> var_18) {
    *var_15 = ((/* implicit */val<bool>) (+(min(((-(1152640029630136320LL))), ((~(var_10)))))));
    *var_16 &= ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (-((-(((/* implicit */val<int>) (val<unsigned char>)123)))))))));
    *var_17 = ((/* implicit */val<bool>) max((((/* implicit */val<long long int>) max((((/* implicit */val<int>) max(((val<unsigned char>)138), (((/* implicit */val<unsigned char>) var_2))))), ((+(var_7)))))), (min(((-(var_0))), (((/* implicit */val<long long int>) (-(-87501847))))))));
    *var_18 = min((min((((/* implicit */val<long long int>) (val<unsigned char>)132)), (2207741277288799238LL))), (max((min((var_9), (var_6))), (max((var_10), (((/* implicit */val<long long int>) var_2)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8765114045778868947LL;
signed char var_2 = (signed char)68;
long long int var_6 = -8647388158739100015LL;
int var_7 = 423375447;
long long int var_9 = 1036018187082404114LL;
long long int var_10 = 2051228080183441232LL;
int zero = 0;
bool var_15 = (bool)1;
int var_16 = 1473893595;
bool var_17 = (bool)1;
long long int var_18 = -6002301327622868LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != 0;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != 132LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, var_7, var_9, var_10, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
