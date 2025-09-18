/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7495
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7495
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
void test(val<unsigned int> var_0, val<unsigned char> var_2, val<short> var_3, val<unsigned char> var_4, val<bool> var_5, val<unsigned long long int> var_6, val<signed char> var_12, val<int> zero, val<unsigned short*> var_13, val<signed char*> var_14) {
    *var_13 = ((/* implicit */val<unsigned short>) min((*var_13), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<short>)0)) && (var_5))))) * (min((((/* implicit */val<unsigned long long int>) var_4)), (var_6)))))) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) ((var_0) <= ((~(127U)))))))))));
    *var_14 = ((/* implicit */val<signed char>) (~(((/* implicit */val<int>) ((((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) var_2)), ((val<unsigned short>)58097)))) > (((/* implicit */val<int>) ((((/* implicit */val<int>) var_12)) != (((/* implicit */val<int>) var_12))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3858892615U;
unsigned char var_2 = (unsigned char)23;
short var_3 = (short)-16716;
unsigned char var_4 = (unsigned char)125;
bool var_5 = (bool)0;
unsigned long long int var_6 = 6744468761075352399ULL;
signed char var_12 = (signed char)-79;
int zero = 0;
unsigned short var_13 = (unsigned short)48391;
signed char var_14 = (signed char)79;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)1;
    value_mismatch |= var_14 != (signed char)-2;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_12, zero, &var_13, &var_14);
  checksum();
}
