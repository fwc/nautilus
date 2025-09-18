/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3009
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3009
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
void test(val<int> var_0, val<bool> var_8, val<int> zero, val<unsigned int*> var_12, val<int*> var_13) {
    *var_12 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_8)) + (var_0)));
    *var_13 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned char>)120)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-88))) : (2278659844450787880ULL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 183840516;
bool var_8 = (bool)1;
int zero = 0;
unsigned int var_12 = 2808805698U;
int var_13 = 979127028;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 183840517U;
    value_mismatch |= var_13 != -88;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_8, zero, &var_12, &var_13);
  checksum();
}
