/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2223
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2223
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
void test(val<signed char> var_0, val<bool> var_4, val<signed char> var_5, val<signed char> var_9, val<signed char> var_14, val<signed char> var_15, val<int> zero, val<unsigned long long int*> var_17, val<unsigned long long int*> var_18, val<short*> var_19) {
    *var_17 = ((/* implicit */val<unsigned long long int>) var_5);
    *var_18 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) min((((((/* implicit */val<bool>) 13715872246498554466ULL)) ? (((/* implicit */val<int>) (val<short>)48)) : (((/* implicit */val<int>) var_0)))), (((/* implicit */val<int>) (val<unsigned char>)255))))) && (((/* implicit */val<bool>) max((max((var_15), (var_14))), (var_14))))));
    *var_19 = ((/* implicit */val<short>) max((((/* implicit */val<signed char>) var_4)), (var_9)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-33;
bool var_4 = (bool)1;
signed char var_5 = (signed char)79;
signed char var_9 = (signed char)-123;
signed char var_14 = (signed char)44;
signed char var_15 = (signed char)-61;
int zero = 0;
unsigned long long int var_17 = 15550139321146568224ULL;
unsigned long long int var_18 = 2902312905065590723ULL;
short var_19 = (short)3814;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 79ULL;
    value_mismatch |= var_18 != 1ULL;
    value_mismatch |= var_19 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, var_9, var_14, var_15, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
