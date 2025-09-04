/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4828
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4828
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
void test(val<int> zero, val<bool*> var_17, val<unsigned long long int*> var_18) {
    *var_17 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<unsigned short>) min((4918047769766215014ULL), (13528696303943336608ULL))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((13528696303943336623ULL) ^ (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)6317))))) > (16481479534715075496ULL))))) : (((((val<unsigned int>) 16481479534715075496ULL)) << (((((/* implicit */val<int>) ((val<short>) 1965264538994476120ULL))) - (1109)))))));
    *var_18 = ((/* implicit */val<unsigned long long int>) ((val<unsigned char>) ((((/* implicit */val<int>) (val<short>)1108)) / (((/* implicit */val<int>) (val<signed char>)126)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
bool var_17 = (bool)1;
unsigned long long int var_18 = 5749537914547916451ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)0;
    value_mismatch |= var_18 != 8ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
