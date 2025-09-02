/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7072
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7072
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
void test(val<unsigned long long int> var_2, val<short> var_5, val<int> var_8, val<unsigned short> var_9, val<int> var_14, val<unsigned int> var_16, val<int> zero, val<long long int*> var_17, val<unsigned int*> var_18, val<long long int*> var_19) {
    *var_17 = ((/* implicit */val<long long int>) var_5);
    if (((/* implicit */val<bool>) (~(((/* implicit */val<int>) ((val<signed char>) min((((/* implicit */val<int>) var_9)), (var_14))))))))
    {
        *var_18 = ((/* implicit */val<unsigned int>) var_9);
        *var_19 = ((/* implicit */val<long long int>) ((val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_14)) ? (var_2) : (((/* implicit */val<unsigned long long int>) var_8))))) ? (var_16) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) 3454172518U)) && (((/* implicit */val<bool>) 1950458810U)))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9992356532774571896ULL;
short var_5 = (short)-18382;
int var_8 = -216682214;
unsigned short var_9 = (unsigned short)54161;
int var_14 = -1948838786;
unsigned int var_16 = 3890590670U;
int zero = 0;
long long int var_17 = -2690118042354163067LL;
unsigned int var_18 = 1824850246U;
long long int var_19 = 1469480942420792037LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -18382LL;
    value_mismatch |= var_18 != 54161U;
    value_mismatch |= var_19 != 3890590670LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_8, var_9, var_14, var_16, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
