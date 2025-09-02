/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8692
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8692
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
void test(val<bool> var_4, val<int> var_8, val<int> zero, val<bool*> var_16, val<int*> var_17, val<unsigned char*> var_18) {
    *var_16 = ((/* implicit */val<bool>) min((*var_16), ((!((val<bool>)1)))));
    *var_17 = ((/* implicit */val<int>) min(((val<unsigned short>)65534), ((val<unsigned short>)16)));
    *var_18 &= ((val<unsigned char>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_8)) ? (-1875345212) : (((/* implicit */val<int>) var_4)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_4 = (bool)1;
int var_8 = -808006562;
int zero = 0;
bool var_16 = (bool)1;
int var_17 = -2129994434;
unsigned char var_18 = (unsigned char)6;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)0;
    value_mismatch |= var_17 != 16;
    value_mismatch |= var_18 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_8, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
