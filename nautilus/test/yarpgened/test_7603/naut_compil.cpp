/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7603
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7603
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
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
void test(val<unsigned char> var_0, val<short> var_1, val<long long int> var_5, val<bool> var_11, val<int> zero, val<unsigned short*> var_12, val<short*> var_13) {
    *var_12 = ((/* implicit */val<unsigned short>) ((val<bool>) var_0));
    *var_13 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_11)) ^ (((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))) != (-920195266201548178LL))))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned char>) ((val<long long int>) (val<unsigned char>)255))))) : (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))) | (var_5)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)117;
short var_1 = (short)5162;
long long int var_5 = 5721806948212812624LL;
bool var_11 = (bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)4432;
short var_13 = (short)22230;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)1;
    value_mismatch |= var_13 != (short)255;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
