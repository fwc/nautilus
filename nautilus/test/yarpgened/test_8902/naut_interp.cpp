/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8902
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8902
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
void test(val<unsigned int> var_15, val<int> zero, val<unsigned short*> var_19, val<unsigned int*> var_20, val<int*> var_21) {
    *var_19 = ((/* implicit */val<unsigned short>) (+(((/* implicit */val<int>) (val<unsigned char>)207))));
    *var_20 = ((/* implicit */val<unsigned int>) min((*var_20), (var_15)));
    *var_21 += ((/* implicit */val<int>) (val<unsigned short>)38585);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_15 = 3548242849U;
int zero = 0;
unsigned short var_19 = (unsigned short)7476;
unsigned int var_20 = 798816819U;
int var_21 = -775796403;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)207;
    value_mismatch |= var_20 != 798816819U;
    value_mismatch |= var_21 != -775757818;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_15, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
