/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 817
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=817
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
void test(val<unsigned char> var_6, val<bool> var_13, val<unsigned char> var_14, val<unsigned short> var_16, val<int> zero, val<signed char*> var_18, val<unsigned short*> var_19) {
    *var_18 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_16)) || (((/* implicit */val<bool>) max((max((3072U), (((/* implicit */val<unsigned int>) (val<unsigned short>)16384)))), (((/* implicit */val<unsigned int>) (val<unsigned short>)49152)))))));
    *var_19 = ((/* implicit */val<unsigned short>) min((*var_19), (((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) ((((/* implicit */val<int>) min((var_16), (((/* implicit */val<unsigned short>) var_13))))) != (((/* implicit */val<int>) var_14))))) - (((/* implicit */val<int>) var_6)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)83;
bool var_13 = (bool)1;
unsigned char var_14 = (unsigned char)185;
unsigned short var_16 = (unsigned short)48169;
int zero = 0;
signed char var_18 = (signed char)-68;
unsigned short var_19 = (unsigned short)59872;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)1;
    value_mismatch |= var_19 != (unsigned short)59872;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_13, var_14, var_16, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
