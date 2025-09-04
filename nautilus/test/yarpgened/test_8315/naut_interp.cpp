/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8315
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8315
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
void test(val<short> var_1, val<unsigned short> var_16, val<int> zero, val<int*> var_18, val<short*> var_19) {
    *var_18 = ((/* implicit */val<int>) min((((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) min(((val<unsigned short>)20648), (((/* implicit */val<unsigned short>) var_1)))))))), (((((((/* implicit */val<unsigned long long int>) 131071U)) + (0ULL))) + (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_16)))))))));
    *var_19 *= ((/* implicit */val<short>) (((!((((val<bool>)1) && (((/* implicit */val<bool>) var_1)))))) || ((!(((/* implicit */val<bool>) min((var_1), (((/* implicit */val<short>) (val<bool>)1)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8713;
unsigned short var_16 = (unsigned short)56161;
int zero = 0;
int var_18 = -2056778669;
short var_19 = (short)14239;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 74910;
    value_mismatch |= var_19 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_16, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
