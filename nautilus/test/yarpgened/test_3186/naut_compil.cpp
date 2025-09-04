/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3186
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3186
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
void test(val<unsigned long long int> var_3, val<int> var_5, val<int> var_8, val<int> zero, val<int*> var_11, val<long long int*> var_12, val<signed char*> var_13) {
    *var_11 = var_5;
    if (((/* implicit */val<bool>) var_8))
    {
        *var_12 |= ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) max((((/* implicit */val<int>) (val<unsigned short>)0)), (((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) (val<short>)2871)) : (2091909480)))))) ? (((min((var_3), (((/* implicit */val<unsigned long long int>) 3485142092U)))) - (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<unsigned int>) (val<unsigned short>)38887)), (3485142092U)))))) : (((/* implicit */val<unsigned long long int>) 809825195U))));
        *var_13 &= ((/* implicit */val<signed char>) ((var_3) >> (((((/* implicit */val<int>) (val<unsigned short>)26636)) - (26606)))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16657360685581774426ULL;
int var_5 = -325327399;
int var_8 = -2026981907;
int zero = 0;
int var_11 = -973258292;
long long int var_12 = 11623485340953644LL;
signed char var_13 = (signed char)-101;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -325327399;
    value_mismatch |= var_12 != 11623486636096621LL;
    value_mismatch |= var_13 != (signed char)3;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_8, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
