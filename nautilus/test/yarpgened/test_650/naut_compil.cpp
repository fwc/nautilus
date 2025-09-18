/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 650
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=650
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
void test(val<unsigned long long int> var_0, val<unsigned int> var_5, val<int> zero, val<unsigned long long int*> var_10, val<int*> var_11) {
    *var_10 = var_0;
    *var_11 -= ((/* implicit */val<int>) min((((/* implicit */val<unsigned long long int>) var_5)), (((val<unsigned long long int>) 1896875))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8757786102262041253ULL;
unsigned int var_5 = 1564393566U;
int zero = 0;
unsigned long long int var_10 = 1745315581803348738ULL;
int var_11 = 1364134365;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 8757786102262041253ULL;
    value_mismatch |= var_11 != 1362237490;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, zero, &var_10, &var_11);
  checksum();
}
