/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2561
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2561
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
void test(val<unsigned short> var_5, val<unsigned short> var_12, val<signed char> var_14, val<int> zero, val<unsigned int*> var_17, val<unsigned int*> var_18, val<unsigned short*> var_19) {
    *var_17 &= ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_5)) <= (((/* implicit */val<int>) var_14))));
    *var_18 = ((/* implicit */val<unsigned int>) ((((val<unsigned int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)8))) * (6332659052112278678ULL)))) <= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<short>) ((((/* implicit */val<int>) (val<signed char>)0)) | (((/* implicit */val<int>) (val<short>)-27349)))))))));
    *var_19 = var_12;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)21066;
unsigned short var_12 = (unsigned short)25742;
signed char var_14 = (signed char)3;
int zero = 0;
unsigned int var_17 = 2186836002U;
unsigned int var_18 = 1966457805U;
unsigned short var_19 = (unsigned short)54553;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 0U;
    value_mismatch |= var_18 != 1U;
    value_mismatch |= var_19 != (unsigned short)25742;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_12, var_14, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
