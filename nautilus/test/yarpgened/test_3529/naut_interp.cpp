/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3529
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3529
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
void test(val<unsigned short> var_0, val<short> var_8, val<unsigned char> var_12, val<int> zero, val<bool*> var_17, val<unsigned char*> var_18) {
    *var_17 = ((/* implicit */val<bool>) max((((((/* implicit */val<bool>) (val<short>)-23698)) ? (((/* implicit */val<int>) min((var_0), (((/* implicit */val<unsigned short>) var_12))))) : (((/* implicit */val<int>) ((26U) != (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8)))))))), (((/* implicit */val<int>) (val<short>)7511))));
    *var_18 = ((/* implicit */val<unsigned char>) (val<short>)31127);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23420;
short var_8 = (short)24887;
unsigned char var_12 = (unsigned char)66;
int zero = 0;
bool var_17 = (bool)1;
unsigned char var_18 = (unsigned char)105;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (unsigned char)151;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_8, var_12, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
