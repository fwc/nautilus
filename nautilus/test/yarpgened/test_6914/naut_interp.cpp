/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6914
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6914
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
void test(val<unsigned int> var_1, val<bool> var_2, val<int> var_3, val<int> var_5, val<int> var_6, val<unsigned int> var_8, val<unsigned long long int> var_10, val<bool> var_11, val<int> zero, val<unsigned long long int*> var_12, val<int*> var_13, val<unsigned int*> var_14) {
    *var_12 = min((min((((((/* implicit */val<bool>) var_1)) ? (var_10) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)1))))), (((/* implicit */val<unsigned long long int>) min((var_11), (var_2)))))), (((/* implicit */val<unsigned long long int>) var_5)));
    *var_13 = var_3;
    *var_14 = ((((/* implicit */val<bool>) var_6)) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) -131393229)) ? (var_8) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1)))))) ? (var_1) : (min((((/* implicit */val<unsigned int>) (val<signed char>)-2)), (var_1))))) : (((/* implicit */val<unsigned int>) min((((((/* implicit */val<bool>) (val<signed char>)1)) ? (((/* implicit */val<int>) (val<signed char>)1)) : (-503472883))), (var_6)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 285665624U;
bool var_2 = (bool)1;
int var_3 = 1570791020;
int var_5 = 901910607;
int var_6 = -1124080950;
unsigned int var_8 = 1444476041U;
unsigned long long int var_10 = 16848060386918949261ULL;
bool var_11 = (bool)1;
int zero = 0;
unsigned long long int var_12 = 17495777274187147062ULL;
int var_13 = -117749390;
unsigned int var_14 = 639858314U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 1ULL;
    value_mismatch |= var_13 != 1570791020;
    value_mismatch |= var_14 != 285665624U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_5, var_6, var_8, var_10, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
}
