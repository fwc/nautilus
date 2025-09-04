/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7958
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7958
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
void test(val<int> var_1, val<signed char> var_7, val<unsigned long long int> var_16, val<int> zero, val<int*> var_17, val<int*> var_18, val<short*> var_19) {
    *var_17 = ((/* implicit */val<int>) max((5041009267614676749LL), (((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) (val<short>)16947)))))));
    if (((/* implicit */val<bool>) var_1))
    {
        *var_18 = ((/* implicit */val<int>) ((val<bool>) min((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)127))) | (var_16))), (((/* implicit */val<unsigned long long int>) var_7)))));
        *var_19 = ((val<short>) ((val<bool>) ((val<int>) (val<signed char>)121)));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1422933685;
signed char var_7 = (signed char)-39;
unsigned long long int var_16 = 6657892372120600762ULL;
int zero = 0;
int var_17 = -508449316;
int var_18 = 399334567;
short var_19 = (short)31364;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 1906308877;
    value_mismatch |= var_18 != 1;
    value_mismatch |= var_19 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_7, var_16, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
