/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 897
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=897
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
void test(val<short> var_0, val<int> var_5, val<int> var_8, val<int> var_9, val<int> zero, val<signed char*> var_10, val<unsigned int*> var_11, val<short*> var_12, val<signed char*> var_13) {
    *var_10 = ((/* implicit */val<signed char>) var_0);
    if (((/* implicit */val<bool>) min((((((/* implicit */val<bool>) (val<unsigned short>)15561)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)100))) : (17179869180LL))), (((/* implicit */val<long long int>) max((((((/* implicit */val<int>) (val<signed char>)0)) - (((/* implicit */val<int>) (val<signed char>)79)))), (((/* implicit */val<int>) var_0))))))))
    {
        *var_11 = ((/* implicit */val<unsigned int>) var_9);
        *var_12 = var_0;
        *var_13 = ((/* implicit */val<signed char>) max((*var_13), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) ((val<short>) var_0))) : (((/* implicit */val<int>) ((val<unsigned char>) ((val<unsigned int>) var_5)))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4557;
int var_5 = -806591133;
int var_8 = 1430616997;
int var_9 = -466654911;
int zero = 0;
signed char var_10 = (signed char)123;
unsigned int var_11 = 1983966574U;
short var_12 = (short)-21301;
signed char var_13 = (signed char)11;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)-51;
    value_mismatch |= var_11 != 3828312385U;
    value_mismatch |= var_12 != (short)4557;
    value_mismatch |= var_13 != (signed char)11;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
