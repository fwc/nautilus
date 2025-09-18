/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6679
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6679
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
void test(val<unsigned long long int> var_0, val<bool> var_4, val<short> var_11, val<int> var_12, val<int> zero, val<bool*> var_16, val<short*> var_17, val<bool*> var_18) {
    *var_16 = ((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) var_12)), (((((/* implicit */val<bool>) max((((/* implicit */val<long long int>) var_11)), (8LL)))) ? (var_0) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_11)) ? (3845843756U) : (792325770U))))))));
    *var_17 = (val<short>)0;
    *var_18 = var_4;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10621191797394473176ULL;
bool var_4 = (bool)1;
short var_11 = (short)31271;
int var_12 = 1746274256;
int zero = 0;
bool var_16 = (bool)0;
short var_17 = (short)-32211;
bool var_18 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (short)0;
    value_mismatch |= var_18 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_11, var_12, zero, &var_16, &var_17, &var_18);
  checksum();
}
