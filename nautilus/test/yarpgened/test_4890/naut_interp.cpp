/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4890
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4890
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
void test(val<long long int> var_6, val<int> zero, val<long long int*> var_17, val<long long int*> var_18) {
    *var_17 = ((/* implicit */val<long long int>) (-(((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned char>)139)) || (((/* implicit */val<bool>) (val<unsigned char>)139)))))));
    *var_18 -= ((val<long long int>) (~(((var_6) | (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)-38)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -5475750048899123208LL;
int zero = 0;
long long int var_17 = 7657801248258811637LL;
long long int var_18 = 2157933999892425143LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -1LL;
    value_mismatch |= var_18 != 2157933999892425138LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, zero, &var_17, &var_18);
  checksum();
}
