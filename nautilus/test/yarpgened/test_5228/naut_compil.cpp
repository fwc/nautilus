/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5228
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5228
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
void test(val<unsigned long long int> var_5, val<int> var_11, val<int> zero, val<int*> var_14, val<unsigned short*> var_15) {
    *var_14 = ((/* implicit */val<int>) var_5);
    *var_15 = ((/* implicit */val<unsigned short>) min((*var_15), (((/* implicit */val<unsigned short>) (+(var_11))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3697213945532042639ULL;
int var_11 = 2089923795;
int zero = 0;
int var_14 = -175358876;
unsigned short var_15 = (unsigned short)63640;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != -1441870449;
    value_mismatch |= var_15 != (unsigned short)46291;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_11, zero, &var_14, &var_15);
  checksum();
}
