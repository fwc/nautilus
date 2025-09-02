/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3910
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3910
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
void test(val<unsigned long long int> var_1, val<unsigned long long int> var_2, val<unsigned long long int> var_5, val<unsigned long long int> var_7, val<unsigned long long int> var_9, val<int> zero, val<signed char*> var_10, val<short*> var_11, val<long long int*> var_12, val<signed char*> var_13, val<short*> var_14) {
    *var_10 = ((/* implicit */val<signed char>) var_5);
    if (((/* implicit */val<bool>) var_2))
    {
        *var_11 = ((/* implicit */val<short>) var_1);
        *var_12 = ((/* implicit */val<long long int>) ((((((/* implicit */val<bool>) ((val<unsigned long long int>) var_9))) ? (((((/* implicit */val<bool>) 7413151192272919613ULL)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<bool>)1)))) : (((/* implicit */val<int>) (!((val<bool>)1)))))) == (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) (val<bool>)1))))) > (var_7))))));
    }

    *var_13 = ((/* implicit */val<signed char>) min((*var_13), (((/* implicit */val<signed char>) ((val<unsigned long long int>) (+(((var_9) ^ (var_2)))))))));
    *var_14 = ((/* implicit */val<short>) min((((/* implicit */val<long long int>) (+(((/* implicit */val<int>) (val<bool>)1))))), (2139887196752574463LL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9884731077332269592ULL;
unsigned long long int var_2 = 3016525684886363424ULL;
unsigned long long int var_5 = 13874739499835960906ULL;
unsigned long long int var_7 = 17861796925064751522ULL;
unsigned long long int var_9 = 9663459344721378345ULL;
int zero = 0;
signed char var_10 = (signed char)-20;
short var_11 = (short)-8996;
long long int var_12 = 3534636971491174333LL;
signed char var_13 = (signed char)-112;
short var_14 = (short)28762;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)74;
    value_mismatch |= var_11 != (short)31256;
    value_mismatch |= var_12 != 0LL;
    value_mismatch |= var_13 != (signed char)-112;
    value_mismatch |= var_14 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_7, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
