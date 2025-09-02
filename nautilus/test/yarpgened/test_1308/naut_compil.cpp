/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1308
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1308
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
void test(val<unsigned int> var_4, val<signed char> var_5, val<short> var_6, val<short> var_8, val<unsigned long long int> var_12, val<unsigned long long int> var_13, val<int> zero, val<unsigned char*> var_15, val<unsigned short*> var_16, val<long long int*> var_17, val<unsigned int*> var_18, val<unsigned int*> var_19) {
    *var_15 = ((/* implicit */val<unsigned char>) (+(var_12)));
    *var_16 = ((/* implicit */val<unsigned short>) (~(((((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) (val<unsigned char>)148))))) | (var_13)))));
    *var_17 = ((/* implicit */val<long long int>) var_8);
    *var_18 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<unsigned char>)127)) ? ((~(((/* implicit */val<int>) var_6)))) : (((/* implicit */val<int>) var_5))));
    *var_19 = var_4;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1761755803U;
signed char var_5 = (signed char)-74;
short var_6 = (short)4722;
short var_8 = (short)-24223;
unsigned long long int var_12 = 16144886851223218647ULL;
unsigned long long int var_13 = 5401376911605540434ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)47;
unsigned short var_16 = (unsigned short)26967;
long long int var_17 = 6848148131765762792LL;
unsigned int var_18 = 4271754620U;
unsigned int var_19 = 1666423865U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)215;
    value_mismatch |= var_16 != (unsigned short)129;
    value_mismatch |= var_17 != -24223LL;
    value_mismatch |= var_18 != 4294962573U;
    value_mismatch |= var_19 != 1761755803U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_6, var_8, var_12, var_13, zero, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
