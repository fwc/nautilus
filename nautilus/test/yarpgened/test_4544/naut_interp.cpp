/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4544
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4544
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
void test(val<bool> var_0, val<int> var_1, val<bool> var_4, val<int> zero, val<unsigned short*> var_16, val<bool*> var_17) {
    *var_16 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))) == (((((var_0) ? (((/* implicit */val<long long int>) var_1)) : (-2160388833053792230LL))) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4)))))));
    *var_17 = ((((/* implicit */val<unsigned int>) 2147483647)) >= (1401021720U));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
int var_1 = 1064884522;
bool var_4 = (bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)29534;
bool var_17 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)0;
    value_mismatch |= var_17 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, zero, &var_16, &var_17);
  checksum();
}
