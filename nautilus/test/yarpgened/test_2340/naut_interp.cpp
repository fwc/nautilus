/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2340
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2340
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
void test(val<unsigned int> var_0, val<signed char> var_2, val<unsigned int> var_7, val<unsigned int> var_9, val<bool> var_15, val<unsigned char> var_16, val<int> zero, val<bool*> var_18, val<unsigned long long int*> var_19, val<int*> var_20, val<int*> var_21) {
    *var_18 &= ((/* implicit */val<bool>) (-(max((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_16)) != (((/* implicit */val<int>) (val<signed char>)-55))))), (var_7)))));
    *var_19 = ((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned int>) max(((val<short>)-17661), (((/* implicit */val<short>) (val<unsigned char>)176))))), (var_9)));
    *var_20 = ((/* implicit */val<int>) var_0);
    *var_21 ^= min((max(((~(792480929))), (((((/* implicit */val<int>) var_2)) + (((/* implicit */val<int>) var_15)))))), (((/* implicit */val<int>) var_15)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2020291048U;
signed char var_2 = (signed char)-14;
unsigned int var_7 = 601828729U;
unsigned int var_9 = 3517401498U;
bool var_15 = (bool)1;
unsigned char var_16 = (unsigned char)108;
int zero = 0;
bool var_18 = (bool)0;
unsigned long long int var_19 = 17178621153905149427ULL;
int var_20 = 1813757788;
int var_21 = -1893270745;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)0;
    value_mismatch |= var_19 != 3517401498ULL;
    value_mismatch |= var_20 != 2020291048;
    value_mismatch |= var_21 != 1893270740;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_7, var_9, var_15, var_16, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
