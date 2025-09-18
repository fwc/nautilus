/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9290
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9290
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
void test(val<unsigned char> var_0, val<bool> var_2, val<short> var_4, val<signed char> var_5, val<unsigned int> var_7, val<int> zero, val<short*> var_10, val<bool*> var_11) {
    *var_10 = ((/* implicit */val<short>) ((((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))) < (-3784431989047167426LL))) ? ((~(-8188437580733998332LL))) : (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_5))))))) / (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 4398046511103LL)) ? (var_7) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4)))))) ? (((/* implicit */val<int>) ((val<short>) var_0))) : (((/* implicit */val<int>) ((15U) >= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)255)))))))))));
    *var_11 = ((/* implicit */val<bool>) ((((val<unsigned int>) min(((val<short>)-8625), (((/* implicit */val<short>) var_2))))) / (var_7)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)130;
bool var_2 = (bool)0;
short var_4 = (short)3218;
signed char var_5 = (signed char)-106;
unsigned int var_7 = 2479854688U;
int zero = 0;
short var_10 = (short)5737;
bool var_11 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)0;
    value_mismatch |= var_11 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_5, var_7, zero, &var_10, &var_11);
  checksum();
}
