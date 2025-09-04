/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7488
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7488
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
void test(val<int> var_2, val<unsigned char> var_4, val<unsigned short> var_6, val<int> var_8, val<int> zero, val<long long int*> var_18, val<long long int*> var_19, val<int*> var_20) {
    *var_18 = ((/* implicit */val<long long int>) var_2);
    *var_19 = ((/* implicit */val<long long int>) (~(((/* implicit */val<int>) ((val<short>) ((((/* implicit */val<bool>) var_6)) ? (var_8) : (var_2)))))));
    *var_20 = ((/* implicit */val<int>) ((val<signed char>) var_4));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1611720327;
unsigned char var_4 = (unsigned char)218;
unsigned short var_6 = (unsigned short)8183;
int var_8 = 851228543;
int zero = 0;
long long int var_18 = 615015227479891076LL;
long long int var_19 = -896665826393363909LL;
int var_20 = -668974301;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1611720327LL;
    value_mismatch |= var_19 != 18560LL;
    value_mismatch |= var_20 != -38;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_6, var_8, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
