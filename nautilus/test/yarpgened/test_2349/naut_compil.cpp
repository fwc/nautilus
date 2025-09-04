/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2349
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2349
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
void test(val<short> var_5, val<long long int> var_8, val<int> var_14, val<signed char> var_16, val<unsigned char> var_18, val<int> zero, val<signed char*> var_19, val<short*> var_20) {
    *var_19 &= ((/* implicit */val<signed char>) min((((/* implicit */val<short>) var_16)), (min((var_5), (((/* implicit */val<short>) min((var_18), (var_18))))))));
    *var_20 = ((/* implicit */val<short>) min((((var_14) + ((+(((/* implicit */val<int>) var_16)))))), (((/* implicit */val<int>) ((((/* implicit */val<bool>) (-(var_8)))) && (((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<unsigned short>)51944))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)3643;
long long int var_8 = 6951458557512543110LL;
int var_14 = -966374515;
signed char var_16 = (signed char)87;
unsigned char var_18 = (unsigned char)199;
int zero = 0;
signed char var_19 = (signed char)120;
short var_20 = (short)21548;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)80;
    value_mismatch |= var_20 != (short)19428;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_8, var_14, var_16, var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
