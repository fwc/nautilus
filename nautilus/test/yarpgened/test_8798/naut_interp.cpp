/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8798
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8798
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
void test(val<short> var_6, val<unsigned int> var_7, val<int> zero, val<unsigned short*> var_10, val<unsigned char*> var_11) {
    *var_10 = ((/* implicit */val<unsigned short>) max((((/* implicit */val<signed char>) ((((/* implicit */val<long long int>) 354914565)) > (max((((/* implicit */val<long long int>) var_6)), (-1072667794849106625LL)))))), ((val<signed char>)-7)));
    *var_11 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) -6818001303728634006LL)) ? ((~(((/* implicit */val<int>) (val<unsigned short>)26575)))) : (((/* implicit */val<int>) (val<short>)-21962))))) ^ (var_7)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-3063;
unsigned int var_7 = 3260592311U;
int zero = 0;
unsigned short var_10 = (unsigned short)29151;
unsigned char var_11 = (unsigned char)177;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)1;
    value_mismatch |= var_11 != (unsigned char)135;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
