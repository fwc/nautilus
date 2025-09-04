/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6514
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6514
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
void test(val<int> var_11, val<int> zero, val<unsigned short*> var_14, val<unsigned short*> var_15) {
    *var_14 += ((/* implicit */val<unsigned short>) min((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 4850737120794204448ULL)) ? (((/* implicit */val<int>) (val<bool>)0)) : (-983850813)))) ? ((+(((/* implicit */val<int>) (val<short>)-545)))) : (((/* implicit */val<int>) ((val<unsigned short>) (val<unsigned char>)166))))), (((/* implicit */val<int>) ((val<unsigned char>) (-(((/* implicit */val<int>) (val<signed char>)-20))))))));
    *var_15 = ((/* implicit */val<unsigned short>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = 963443682;
int zero = 0;
unsigned short var_14 = (unsigned short)45351;
unsigned short var_15 = (unsigned short)65059;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned short)45371;
    value_mismatch |= var_15 != (unsigned short)64482;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_11, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
