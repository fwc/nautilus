/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4308
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4308
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
void test(val<unsigned short> var_0, val<bool> var_3, val<short> var_5, val<unsigned int> var_7, val<unsigned char> var_8, val<int> var_9, val<bool> var_12, val<int> zero, val<unsigned short*> var_16, val<signed char*> var_17, val<signed char*> var_18, val<signed char*> var_19) {
    *var_16 = ((/* implicit */val<unsigned short>) var_8);
    *var_17 = ((/* implicit */val<signed char>) ((((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))) : (((((/* implicit */val<bool>) (val<unsigned char>)9)) ? (var_7) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)50504))))))) < (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)96)))));
    *var_18 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (+(((((/* implicit */val<int>) (val<signed char>)118)) + (((/* implicit */val<int>) (val<short>)9408))))))) ? (((/* implicit */val<int>) var_5)) : ((~(((((/* implicit */val<bool>) (val<short>)-9409)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) (val<short>)9409))))))));
    *var_19 = ((/* implicit */val<signed char>) max((var_12), ((val<bool>)0)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35493;
bool var_3 = (bool)1;
short var_5 = (short)7564;
unsigned int var_7 = 330997626U;
unsigned char var_8 = (unsigned char)102;
int var_9 = -1563863056;
bool var_12 = (bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)59817;
signed char var_17 = (signed char)-38;
signed char var_18 = (signed char)1;
signed char var_19 = (signed char)-118;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)102;
    value_mismatch |= var_17 != (signed char)1;
    value_mismatch |= var_18 != (signed char)-116;
    value_mismatch |= var_19 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_7, var_8, var_9, var_12, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
