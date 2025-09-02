/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9686
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9686
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
void test(val<unsigned char> var_2, val<short> var_12, val<short> var_17, val<int> zero, val<long long int*> var_20, val<int*> var_21) {
    *var_20 = min((max((2898562688958396873LL), (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_17)) >= (((/* implicit */val<int>) (val<unsigned short>)49132))))))), (-2898562688958396874LL));
    *var_21 = (+((((-(((/* implicit */val<int>) var_2)))) * (((/* implicit */val<int>) var_12)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)60;
short var_12 = (short)12860;
short var_17 = (short)-8541;
int zero = 0;
long long int var_20 = -5442222258391551915LL;
int var_21 = -1854687619;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != -2898562688958396874LL;
    value_mismatch |= var_21 != -771600;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_12, var_17, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
