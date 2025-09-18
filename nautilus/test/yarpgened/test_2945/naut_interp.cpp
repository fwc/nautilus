/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2945
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2945
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
void test(val<long long int> var_3, val<unsigned short> var_4, val<signed char> var_12, val<unsigned short> var_18, val<int> zero, val<unsigned int*> var_19, val<long long int*> var_20) {
    *var_19 = ((/* implicit */val<unsigned int>) var_3);
    *var_20 = min((((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_4))))), (min((((val<long long int>) var_18)), (((/* implicit */val<long long int>) var_12)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6932128376305364549LL;
unsigned short var_4 = (unsigned short)18327;
signed char var_12 = (signed char)-113;
unsigned short var_18 = (unsigned short)7563;
int zero = 0;
unsigned int var_19 = 246979564U;
long long int var_20 = -3596966528195304323LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1089065403U;
    value_mismatch |= var_20 != -18328LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_12, var_18, zero, &var_19, &var_20);
  checksum();
}
