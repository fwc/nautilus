/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 824
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=824
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
void test(val<unsigned long long int> var_5, val<unsigned char> var_7, val<int> var_9, val<signed char> var_13, val<short> var_18, val<int> zero, val<long long int*> var_19, val<int*> var_20) {
    *var_19 = ((/* implicit */val<long long int>) var_9);
    *var_20 ^= ((/* implicit */val<int>) ((((/* implicit */val<int>) ((((((/* implicit */val<int>) var_18)) >= (((/* implicit */val<int>) var_13)))) && (((((/* implicit */val<unsigned long long int>) 4088)) > (var_5)))))) >= (((/* implicit */val<int>) var_7))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15106378705423155088ULL;
unsigned char var_7 = (unsigned char)86;
int var_9 = 1355349045;
signed char var_13 = (signed char)-101;
short var_18 = (short)9394;
int zero = 0;
long long int var_19 = -6018679220957208633LL;
int var_20 = -171306440;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1355349045LL;
    value_mismatch |= var_20 != -171306440;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_7, var_9, var_13, var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
