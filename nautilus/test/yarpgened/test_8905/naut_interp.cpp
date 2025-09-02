/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8905
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8905
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
void test(val<int> zero, val<long long int*> var_19, val<bool*> var_20, val<short*> var_21) {
    *var_19 = ((/* implicit */val<long long int>) (val<short>)8216);
    *var_20 = ((/* implicit */val<bool>) ((min((((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned short>)7831)) != (-287107693)))), (((((/* implicit */val<bool>) (val<short>)-8216)) ? (((/* implicit */val<int>) (val<unsigned short>)57704)) : (511))))) << (min((((0) + (((/* implicit */val<int>) (val<bool>)0)))), (((((/* implicit */val<bool>) (val<short>)8216)) ? (((/* implicit */val<int>) (val<unsigned short>)4088)) : (((/* implicit */val<int>) (val<short>)-8232))))))));
    *var_21 = ((/* implicit */val<short>) max((((/* implicit */val<unsigned int>) (~(-234247809)))), ((-((-(0U)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
long long int var_19 = -822995729026454410LL;
bool var_20 = (bool)0;
short var_21 = (short)-28204;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 8216LL;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != (short)22144;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
