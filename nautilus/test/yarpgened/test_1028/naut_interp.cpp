/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1028
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1028
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
void test(val<int> var_3, val<unsigned int> var_4, val<int> var_11, val<unsigned char> var_14, val<short> var_17, val<unsigned char> var_18, val<int> zero, val<unsigned char*> var_20, val<unsigned short*> var_21) {
    *var_20 = (val<unsigned char>)18;
    *var_21 = ((/* implicit */val<unsigned short>) ((((var_3) != (((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_18)) : (((/* implicit */val<int>) var_17)))))) ? (((/* implicit */val<unsigned int>) (+((-(((/* implicit */val<int>) (val<signed char>)-120))))))) : (((((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) (val<short>)23344))))) | (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_14))) - (var_4)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1045798653;
unsigned int var_4 = 3349224747U;
int var_11 = -570279265;
unsigned char var_14 = (unsigned char)91;
short var_17 = (short)-27075;
unsigned char var_18 = (unsigned char)59;
int zero = 0;
unsigned char var_20 = (unsigned char)73;
unsigned short var_21 = (unsigned short)15982;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)18;
    value_mismatch |= var_21 != (unsigned short)120;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_11, var_14, var_17, var_18, zero, &var_20, &var_21);
  checksum();
}
