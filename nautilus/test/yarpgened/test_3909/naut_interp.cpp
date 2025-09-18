/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3909
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3909
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
void test(val<unsigned char> var_1, val<unsigned char> var_4, val<unsigned char> var_5, val<unsigned char> var_8, val<unsigned char> var_10, val<unsigned char> var_12, val<unsigned char> var_14, val<int> zero, val<short*> var_15, val<unsigned char*> var_16) {
    *var_15 ^= ((/* implicit */val<short>) max((((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) ((val<short>) var_4))))), ((-(((/* implicit */val<int>) var_12))))));
    *var_16 = ((/* implicit */val<unsigned char>) ((((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_1)) | (((/* implicit */val<int>) var_10))))) ? (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_5)))) : (((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_12)))))) > (((/* implicit */val<int>) var_14))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)73;
unsigned char var_4 = (unsigned char)53;
unsigned char var_5 = (unsigned char)203;
unsigned char var_8 = (unsigned char)181;
unsigned char var_10 = (unsigned char)155;
unsigned char var_12 = (unsigned char)153;
unsigned char var_14 = (unsigned char)93;
int zero = 0;
short var_15 = (short)22491;
unsigned char var_16 = (unsigned char)130;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)22338;
    value_mismatch |= var_16 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_5, var_8, var_10, var_12, var_14, zero, &var_15, &var_16);
  checksum();
}
