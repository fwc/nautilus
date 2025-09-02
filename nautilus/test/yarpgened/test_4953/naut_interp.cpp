/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4953
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4953
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
void test(val<bool> var_0, val<bool> var_2, val<short> var_6, val<unsigned short> var_9, val<bool> var_11, val<int> zero, val<unsigned int*> var_12, val<bool*> var_13, val<unsigned int*> var_14, val<unsigned int*> var_15, val<unsigned short*> var_16) {
    *var_12 = ((/* implicit */val<unsigned int>) var_6);
    *var_13 = var_0;
    if (((/* implicit */val<bool>) max((max((((/* implicit */val<unsigned short>) ((val<signed char>) var_2))), (max(((val<unsigned short>)12064), (((/* implicit */val<unsigned short>) var_11)))))), ((val<unsigned short>)45288))))
    {
        *var_14 = ((/* implicit */val<unsigned int>) ((var_11) ? ((+(((-5965651032668856687LL) - (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)26366))))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11)))));
        *var_15 = ((/* implicit */val<unsigned int>) ((val<signed char>) var_2));
        *var_16 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) (val<unsigned short>)38183))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
bool var_2 = (bool)0;
short var_6 = (short)-28608;
unsigned short var_9 = (unsigned short)59774;
bool var_11 = (bool)1;
int zero = 0;
unsigned int var_12 = 1047211054U;
bool var_13 = (bool)1;
unsigned int var_14 = 2210569421U;
unsigned int var_15 = 3779289018U;
unsigned short var_16 = (unsigned short)54823;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 4294938688U;
    value_mismatch |= var_13 != (bool)0;
    value_mismatch |= var_14 != 1070872467U;
    value_mismatch |= var_15 != 0U;
    value_mismatch |= var_16 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, var_9, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
