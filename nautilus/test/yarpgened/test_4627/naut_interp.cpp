/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4627
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4627
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
void test(val<short> var_1, val<long long int> var_4, val<int> var_5, val<long long int> var_6, val<int> zero, val<unsigned int*> var_10, val<short*> var_11) {
    *var_10 = ((/* implicit */val<unsigned int>) min((min((((/* implicit */val<long long int>) var_5)), (var_6))), (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) min((((/* implicit */val<short>) (val<signed char>)-86)), (var_1)))))))));
    *var_11 = ((/* implicit */val<short>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12234;
long long int var_4 = 7502132226135488851LL;
int var_5 = -949197832;
long long int var_6 = 86033842381368835LL;
int zero = 0;
unsigned int var_10 = 643702206U;
short var_11 = (short)-23665;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 3345769464U;
    value_mismatch |= var_11 != (short)-1709;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_5, var_6, zero, &var_10, &var_11);
  checksum();
}
