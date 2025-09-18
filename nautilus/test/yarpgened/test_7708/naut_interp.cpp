/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7708
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7708
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
void test(val<long long int> var_5, val<unsigned char> var_13, val<int> var_15, val<int> zero, val<unsigned short*> var_17, val<int*> var_18) {
    *var_17 = ((/* implicit */val<unsigned short>) ((val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned short>)36987)) & (((/* implicit */val<int>) var_13))))) ? (((/* implicit */val<long long int>) ((-1710480904) & (var_15)))) : (var_5))));
    *var_18 = ((/* implicit */val<int>) (((-(((/* implicit */val<int>) ((val<bool>) var_15))))) < (var_15)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -2024080838707929407LL;
unsigned char var_13 = (unsigned char)156;
int var_15 = 1952283267;
int zero = 0;
unsigned short var_17 = (unsigned short)12315;
int var_18 = 364361829;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)128;
    value_mismatch |= var_18 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_13, var_15, zero, &var_17, &var_18);
  checksum();
}
