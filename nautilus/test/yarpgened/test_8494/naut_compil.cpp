/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8494
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8494
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
void test(val<unsigned long long int> var_4, val<unsigned long long int> var_5, val<int> zero, val<signed char*> var_17, val<long long int*> var_18) {
    *var_17 += ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (-(((((/* implicit */val<bool>) 2313183725701325721ULL)) ? (3677673069U) : (((/* implicit */val<unsigned int>) 1009226841))))))) ? (var_5) : (((((/* implicit */val<bool>) (val<unsigned char>)22)) ? (((/* implicit */val<unsigned long long int>) 1014938166771826893LL)) : (((((/* implicit */val<bool>) 2773789004U)) ? (((/* implicit */val<unsigned long long int>) 894008264U)) : (var_4)))))));
    *var_18 = ((/* implicit */val<long long int>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 16662651734512053277ULL;
unsigned long long int var_5 = 1510645558583135252ULL;
int zero = 0;
signed char var_17 = (signed char)-74;
long long int var_18 = -1756643884224909312LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)-54;
    value_mismatch |= var_18 != -1784092339197498339LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, zero, &var_17, &var_18);
  checksum();
}
