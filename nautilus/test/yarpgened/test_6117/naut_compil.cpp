/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6117
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6117
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
void test(val<int> zero, val<int*> var_20, val<signed char*> var_21, val<unsigned long long int*> var_22) {
    *var_20 = ((/* implicit */val<int>) min((*var_20), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)6)) ? (-1LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)-7)))))))))));
    *var_21 = ((/* implicit */val<signed char>) (+(((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) >= (((((/* implicit */val<bool>) (val<signed char>)-121)) ? (7836074004817661969ULL) : (((/* implicit */val<unsigned long long int>) 0LL)))))))));
    *var_22 += ((/* implicit */val<unsigned long long int>) (val<signed char>)13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
int var_20 = 870559754;
signed char var_21 = (signed char)-68;
unsigned long long int var_22 = 9391518130449024308ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 0;
    value_mismatch |= var_21 != (signed char)0;
    value_mismatch |= var_22 != 9391518130449024321ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
