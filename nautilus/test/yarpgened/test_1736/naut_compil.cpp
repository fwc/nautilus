/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1736
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1736
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
void test(val<unsigned char> var_4, val<short> var_10, val<unsigned short> var_14, val<short> var_16, val<int> zero, val<unsigned char*> var_18, val<unsigned int*> var_19) {
    *var_18 = var_4;
    *var_19 = (((((~(((/* implicit */val<int>) var_10)))) > (((/* implicit */val<int>) ((val<bool>) var_16))))) ? (4194300U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_14))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)39;
short var_10 = (short)16715;
unsigned short var_14 = (unsigned short)37136;
short var_16 = (short)25938;
int zero = 0;
unsigned char var_18 = (unsigned char)17;
unsigned int var_19 = 3778036439U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)39;
    value_mismatch |= var_19 != 37136U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_10, var_14, var_16, zero, &var_18, &var_19);
  checksum();
}
