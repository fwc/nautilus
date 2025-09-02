/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 330
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=330
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
void test(val<bool> var_0, val<int> var_1, val<unsigned short> var_3, val<int> var_5, val<unsigned long long int> var_8, val<bool> var_9, val<int> zero, val<unsigned long long int*> var_12, val<unsigned int*> var_13, val<unsigned int*> var_14, val<int*> var_15) {
    *var_12 -= ((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))) | ((-9223372036854775807LL - 1LL))))) || (((/* implicit */val<bool>) min((-2070680782), (((/* implicit */val<int>) var_3))))))) ? (((/* implicit */val<int>) var_9)) : (var_1)));
    *var_13 = ((/* implicit */val<unsigned int>) 4622870602854148207ULL);
    *var_14 = ((/* implicit */val<unsigned int>) max((((/* implicit */val<unsigned long long int>) var_3)), (max(((+(var_8))), (((/* implicit */val<unsigned long long int>) -107566526))))));
    *var_15 = max((var_5), (((/* implicit */val<int>) ((val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-36))) ^ (1918443652585973608ULL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
int var_1 = 1857710955;
unsigned short var_3 = (unsigned short)47108;
int var_5 = 577668793;
unsigned long long int var_8 = 11934590172403485914ULL;
bool var_9 = (bool)1;
int zero = 0;
unsigned long long int var_12 = 7964348607913736331ULL;
unsigned int var_13 = 3600412410U;
unsigned int var_14 = 1318378310U;
int var_15 = 1284844026;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 7964348607913736330ULL;
    value_mismatch |= var_13 != 4256671855U;
    value_mismatch |= var_14 != 4187400770U;
    value_mismatch |= var_15 != 577668793;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_8, var_9, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
