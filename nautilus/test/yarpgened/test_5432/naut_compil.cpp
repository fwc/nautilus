/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5432
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5432
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
void test(val<short> var_8, val<unsigned short> var_9, val<int> zero, val<unsigned int*> var_18, val<long long int*> var_19, val<unsigned short*> var_20) {
    *var_18 -= ((/* implicit */val<unsigned int>) var_9);
    *var_19 *= ((/* implicit */val<long long int>) (+(((((3164397461U) << ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775800LL))) + (33LL))))) << (((2093719007) - (2093718983)))))));
    *var_20 -= ((/* implicit */val<unsigned short>) min((((/* implicit */val<int>) var_8)), ((+(((/* implicit */val<int>) (val<short>)19858))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-10085;
unsigned short var_9 = (unsigned short)10292;
int zero = 0;
unsigned int var_18 = 586788089U;
long long int var_19 = -6518792717396753100LL;
unsigned short var_20 = (unsigned short)8653;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 586777797U;
    value_mismatch |= var_19 != 0LL;
    value_mismatch |= var_20 != (unsigned short)18738;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_9, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
