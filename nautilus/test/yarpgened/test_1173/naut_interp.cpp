/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1173
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1173
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
void test(val<long long int> var_2, val<long long int> var_7, val<bool> var_8, val<bool> var_16, val<unsigned int> var_17, val<int> zero, val<bool*> var_18, val<long long int*> var_19) {
    *var_18 = ((var_7) != (min((min((var_2), (((/* implicit */val<long long int>) var_8)))), (((/* implicit */val<long long int>) var_17)))));
    *var_19 = ((/* implicit */val<long long int>) max((*var_19), (((var_16) ? (((/* implicit */val<long long int>) (((val<bool>)1) ? (((/* implicit */val<int>) (val<unsigned char>)4)) : (((/* implicit */val<int>) (val<signed char>)28))))) : (max((7LL), (((/* implicit */val<long long int>) (val<signed char>)-18))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5979467361511637569LL;
long long int var_7 = -5250470719143938801LL;
bool var_8 = (bool)1;
bool var_16 = (bool)0;
unsigned int var_17 = 317069294U;
int zero = 0;
bool var_18 = (bool)1;
long long int var_19 = -7371619428649568774LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != 7LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, var_8, var_16, var_17, zero, &var_18, &var_19);
  checksum();
}
