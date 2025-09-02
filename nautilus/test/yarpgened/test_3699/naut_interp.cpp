/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3699
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3699
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
void test(val<unsigned int> var_0, val<int> var_1, val<short> var_7, val<unsigned short> var_9, val<unsigned int> var_14, val<unsigned long long int> var_15, val<unsigned char> var_16, val<int> zero, val<unsigned int*> var_17, val<long long int*> var_18, val<short*> var_19, val<unsigned char*> var_20) {
    *var_17 = (-((((((val<bool>)1) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)96))) : (var_0))) * (((val<unsigned int>) (val<unsigned char>)115)))));
    *var_18 = ((/* implicit */val<long long int>) max((((val<unsigned int>) (val<bool>)1)), (((/* implicit */val<unsigned int>) var_9))));
    *var_19 = ((/* implicit */val<short>) ((((((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_16)) : (((/* implicit */val<int>) (val<bool>)1)))) <= (((((/* implicit */val<bool>) var_15)) ? (var_1) : (((/* implicit */val<int>) var_7)))))) ? (((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<unsigned char>)64)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<bool>)1))))) * (max((((/* implicit */val<unsigned int>) (val<unsigned short>)65535)), (var_14))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)212)))));
    *var_20 = ((/* implicit */val<unsigned char>) (val<bool>)1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1600962852U;
int var_1 = 1148494699;
short var_7 = (short)-1210;
unsigned short var_9 = (unsigned short)19238;
unsigned int var_14 = 278014088U;
unsigned long long int var_15 = 5843234526925705067ULL;
unsigned char var_16 = (unsigned char)223;
int zero = 0;
unsigned int var_17 = 4257186229U;
long long int var_18 = -4847674453105748936LL;
short var_19 = (short)-10670;
unsigned char var_20 = (unsigned char)6;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 4294956256U;
    value_mismatch |= var_18 != 19238LL;
    value_mismatch |= var_19 != (short)10376;
    value_mismatch |= var_20 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_7, var_9, var_14, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
