/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 696
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=696
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
void test(val<int> var_0, val<signed char> var_3, val<unsigned short> var_6, val<signed char> var_7, val<int> var_10, val<int> zero, val<int*> var_11, val<signed char*> var_12, val<long long int*> var_13) {
    *var_11 = ((/* implicit */val<int>) (val<bool>)1);
    *var_12 = ((/* implicit */val<signed char>) min((((/* implicit */val<int>) var_7)), (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) min(((val<signed char>)-6), ((val<signed char>)-123)))) : (((/* implicit */val<int>) min((var_6), (((/* implicit */val<unsigned short>) var_3)))))))));
    *var_13 = ((/* implicit */val<long long int>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1021715649;
signed char var_3 = (signed char)88;
unsigned short var_6 = (unsigned short)58855;
signed char var_7 = (signed char)6;
int var_10 = 1923079238;
int zero = 0;
int var_11 = 251968492;
signed char var_12 = (signed char)-47;
long long int var_13 = -5657297235218411035LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 1;
    value_mismatch |= var_12 != (signed char)-123;
    value_mismatch |= var_13 != 1923079238LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_6, var_7, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
}
