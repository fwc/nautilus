/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6019
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6019
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
void test(val<signed char> var_2, val<bool> var_3, val<long long int> var_4, val<bool> var_5, val<bool> var_6, val<signed char> var_7, val<int> zero, val<signed char*> var_13, val<signed char*> var_14, val<bool*> var_15) {
    *var_13 = ((/* implicit */val<signed char>) var_6);
    if (((((/* implicit */val<bool>) 10LL)) && (((/* implicit */val<bool>) (val<signed char>)0))))
    {
        *var_14 += ((/* implicit */val<signed char>) min((((/* implicit */val<long long int>) (!(((((/* implicit */val<int>) var_7)) < (((/* implicit */val<int>) var_5))))))), (min((min((0LL), (((/* implicit */val<long long int>) var_3)))), (((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) 88481146471187174LL)))))))));
        *var_15 = ((/* implicit */val<bool>) (-(((/* implicit */val<int>) (!(((/* implicit */val<bool>) max((((/* implicit */val<long long int>) var_2)), (var_4)))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)45;
bool var_3 = (bool)0;
long long int var_4 = -6004623619521117507LL;
bool var_5 = (bool)0;
bool var_6 = (bool)0;
signed char var_7 = (signed char)-25;
int zero = 0;
signed char var_13 = (signed char)(-127 - 1);
signed char var_14 = (signed char)8;
bool var_15 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)0;
    value_mismatch |= var_14 != (signed char)8;
    value_mismatch |= var_15 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_6, var_7, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
