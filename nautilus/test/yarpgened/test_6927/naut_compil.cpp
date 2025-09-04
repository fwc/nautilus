/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6927
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6927
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
void test(val<int> var_2, val<signed char> var_3, val<int> var_5, val<unsigned int> var_7, val<signed char> var_8, val<unsigned short> var_10, val<int> zero, val<unsigned int*> var_11, val<long long int*> var_12) {
    *var_11 = ((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_3))));
    *var_12 = ((/* implicit */val<long long int>) min((*var_12), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_8)) : (((((/* implicit */val<bool>) var_7)) ? (var_2) : (var_5)))))) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_3)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1015279414;
signed char var_3 = (signed char)22;
int var_5 = -2070179528;
unsigned int var_7 = 3879652201U;
signed char var_8 = (signed char)6;
unsigned short var_10 = (unsigned short)47723;
int zero = 0;
unsigned int var_11 = 1323866307U;
long long int var_12 = 1234923427358367675LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 4294967274U;
    value_mismatch |= var_12 != 22LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_5, var_7, var_8, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
