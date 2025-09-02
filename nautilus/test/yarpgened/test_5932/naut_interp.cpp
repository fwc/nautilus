/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5932
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5932
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
void test(val<bool> var_3, val<bool> var_7, val<unsigned int> var_10, val<signed char> var_11, val<int> zero, val<bool*> var_13, val<int*> var_14, val<bool*> var_15, val<unsigned long long int*> var_16, val<bool*> var_17) {
    *var_13 = var_3;
    *var_14 = ((/* implicit */val<int>) min((*var_14), (((/* implicit */val<int>) ((val<unsigned char>) ((val<unsigned int>) ((val<bool>) var_10)))))));
    *var_15 -= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)8)) ? (((/* implicit */val<int>) min((((/* implicit */val<signed char>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)-3939))) != (var_10)))), (var_11)))) : ((+(((((/* implicit */val<int>) (val<unsigned short>)16524)) * (((/* implicit */val<int>) (val<unsigned short>)10030))))))));
    *var_16 += ((/* implicit */val<unsigned long long int>) var_7);
    *var_17 = ((/* implicit */val<bool>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)1;
bool var_7 = (bool)0;
unsigned int var_10 = 2676093413U;
signed char var_11 = (signed char)-51;
int zero = 0;
bool var_13 = (bool)0;
int var_14 = -2065134058;
bool var_15 = (bool)0;
unsigned long long int var_16 = 1588713303366646130ULL;
bool var_17 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != -2065134058;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != 1588713303366646130ULL;
    value_mismatch |= var_17 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, var_10, var_11, zero, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
