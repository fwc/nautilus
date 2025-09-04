/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2534
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2534
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
void test(val<unsigned long long int> var_0, val<unsigned short> var_5, val<signed char> var_6, val<signed char> var_9, val<int> zero, val<signed char*> var_15, val<short*> var_16, val<unsigned int*> var_17) {
    *var_15 = var_6;
    *var_16 = ((/* implicit */val<short>) min(((val<unsigned char>)255), ((val<unsigned char>)255)));
    *var_17 = ((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? ((+(((/* implicit */val<int>) var_5)))) : (((/* implicit */val<int>) max(((val<short>)14489), (((/* implicit */val<short>) var_9))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14224013562598497059ULL;
unsigned short var_5 = (unsigned short)2239;
signed char var_6 = (signed char)-31;
signed char var_9 = (signed char)1;
int zero = 0;
signed char var_15 = (signed char)26;
short var_16 = (short)31637;
unsigned int var_17 = 588604509U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)-31;
    value_mismatch |= var_16 != (short)255;
    value_mismatch |= var_17 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_6, var_9, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
