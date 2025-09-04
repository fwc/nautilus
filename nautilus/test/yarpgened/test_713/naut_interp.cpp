/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 713
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=713
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
void test(val<unsigned long long int> var_0, val<long long int> var_3, val<unsigned char> var_7, val<unsigned char> var_14, val<int> zero, val<int*> var_16, val<unsigned long long int*> var_17) {
    *var_16 = ((/* implicit */val<int>) max((*var_16), (((/* implicit */val<int>) max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned short>)12219)) ? (((/* implicit */val<int>) (val<unsigned char>)135)) : (((/* implicit */val<int>) (val<unsigned char>)120))))), (((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_7))))) ? (var_0) : (((/* implicit */val<unsigned long long int>) (-(var_3)))))))))));
    *var_17 = ((/* implicit */val<unsigned long long int>) var_14);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7937240798222815536ULL;
long long int var_3 = -5608463911589778606LL;
unsigned char var_7 = (unsigned char)191;
unsigned char var_14 = (unsigned char)193;
int zero = 0;
int var_16 = 1576744261;
unsigned long long int var_17 = 8229900077373208273ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 1576744261;
    value_mismatch |= var_17 != 193ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_7, var_14, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
