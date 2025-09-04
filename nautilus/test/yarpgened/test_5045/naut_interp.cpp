/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5045
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5045
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
void test(val<long long int> var_0, val<bool> var_3, val<unsigned long long int> var_7, val<int> var_10, val<unsigned char> var_11, val<int> zero, val<unsigned long long int*> var_13, val<signed char*> var_14) {
    *var_13 = ((/* implicit */val<unsigned long long int>) ((val<unsigned char>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_11))))) ? (((/* implicit */val<unsigned long long int>) var_10)) : (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned long long int>) var_10)) : (var_7))))));
    *var_14 = ((/* implicit */val<signed char>) ((((((/* implicit */val<int>) (val<signed char>)17)) << (((/* implicit */val<int>) (val<unsigned short>)9)))) >> (max((var_10), (((/* implicit */val<int>) var_3))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2711374195721087784LL;
bool var_3 = (bool)1;
unsigned long long int var_7 = 1070340760523659100ULL;
int var_10 = -134719170;
unsigned char var_11 = (unsigned char)210;
int zero = 0;
unsigned long long int var_13 = 16638235794593664643ULL;
signed char var_14 = (signed char)112;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 62ULL;
    value_mismatch |= var_14 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_7, var_10, var_11, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
