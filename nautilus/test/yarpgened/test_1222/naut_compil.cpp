/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1222
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1222
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
void test(val<unsigned long long int> var_0, val<signed char> var_2, val<signed char> var_6, val<unsigned int> var_8, val<long long int> var_10, val<int> zero, val<signed char*> var_12, val<unsigned long long int*> var_13, val<signed char*> var_14, val<unsigned long long int*> var_15) {
    *var_12 = ((/* implicit */val<signed char>) min((((/* implicit */val<long long int>) var_6)), (min((min((var_10), (((/* implicit */val<long long int>) (val<unsigned short>)10)))), (((/* implicit */val<long long int>) var_6))))));
    *var_13 = max((var_0), (((/* implicit */val<unsigned long long int>) var_8)));
    *var_14 = ((/* implicit */val<signed char>) (+(((/* implicit */val<int>) var_2))));
    *var_15 = ((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned int>) max(((val<unsigned short>)65535), (((/* implicit */val<unsigned short>) var_2))))), (var_8)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9610221139249927387ULL;
signed char var_2 = (signed char)81;
signed char var_6 = (signed char)-45;
unsigned int var_8 = 1859069295U;
long long int var_10 = 2538679601494810270LL;
int zero = 0;
signed char var_12 = (signed char)95;
unsigned long long int var_13 = 4371578139239421728ULL;
signed char var_14 = (signed char)29;
unsigned long long int var_15 = 3168824667563727289ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)-45;
    value_mismatch |= var_13 != 9610221139249927387ULL;
    value_mismatch |= var_14 != (signed char)81;
    value_mismatch |= var_15 != 1859069295ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, var_8, var_10, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
