/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 337
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=337
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
void test(val<unsigned char> var_0, val<unsigned long long int> var_2, val<unsigned int> var_3, val<int> var_7, val<unsigned long long int> var_8, val<int> zero, val<signed char*> var_11, val<signed char*> var_12, val<unsigned long long int*> var_13, val<signed char*> var_14) {
    *var_11 = ((/* implicit */val<signed char>) max((*var_11), (((/* implicit */val<signed char>) var_8))));
    *var_12 = ((/* implicit */val<signed char>) var_3);
    *var_13 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 130565270U)) ? (8276313771187356413LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)142)))))) ? (var_7) : (((/* implicit */val<int>) var_0))));
    *var_14 = ((/* implicit */val<signed char>) max((*var_14), (((/* implicit */val<signed char>) var_2))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)152;
unsigned long long int var_2 = 5396812687124366781ULL;
unsigned int var_3 = 1892102914U;
int var_7 = -1574291208;
unsigned long long int var_8 = 8703162720090612111ULL;
int zero = 0;
signed char var_11 = (signed char)-39;
signed char var_12 = (signed char)58;
unsigned long long int var_13 = 13985987933593401294ULL;
signed char var_14 = (signed char)82;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)-39;
    value_mismatch |= var_12 != (signed char)2;
    value_mismatch |= var_13 != 18446744072135260408ULL;
    value_mismatch |= var_14 != (signed char)82;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_7, var_8, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
