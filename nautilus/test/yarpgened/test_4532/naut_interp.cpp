/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4532
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4532
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
void test(val<unsigned short> var_1, val<long long int> var_6, val<short> var_10, val<bool> var_16, val<int> zero, val<unsigned short*> var_18, val<unsigned char*> var_19, val<unsigned char*> var_20, val<unsigned short*> var_21) {
    *var_18 = ((/* implicit */val<unsigned short>) var_10);
    *var_19 ^= ((/* implicit */val<unsigned char>) var_16);
    *var_20 = ((/* implicit */val<unsigned char>) (((!(((/* implicit */val<bool>) (-(var_6)))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))) : (max((4294967295U), (((/* implicit */val<unsigned int>) (val<bool>)1))))));
    *var_21 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) (val<bool>)1)) != (((/* implicit */val<int>) (val<signed char>)50))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33965;
long long int var_6 = 252370002201842134LL;
short var_10 = (short)31411;
bool var_16 = (bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)34288;
unsigned char var_19 = (unsigned char)14;
unsigned char var_20 = (unsigned char)36;
unsigned short var_21 = (unsigned short)60016;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)31411;
    value_mismatch |= var_19 != (unsigned char)15;
    value_mismatch |= var_20 != (unsigned char)255;
    value_mismatch |= var_21 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_10, var_16, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
