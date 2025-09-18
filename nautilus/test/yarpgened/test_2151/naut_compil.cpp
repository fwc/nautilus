/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2151
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2151
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
void test(val<short> var_0, val<unsigned short> var_1, val<unsigned long long int> var_2, val<signed char> var_3, val<signed char> var_4, val<int> var_5, val<unsigned int> var_8, val<unsigned int> var_9, val<unsigned int> var_10, val<int> zero, val<unsigned long long int*> var_12, val<signed char*> var_13, val<unsigned short*> var_14, val<unsigned long long int*> var_15, val<unsigned int*> var_16) {
    *var_12 = ((/* implicit */val<unsigned long long int>) min((*var_12), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_4)) ? (min((((/* implicit */val<long long int>) var_1)), (min((-6528665367335631418LL), (((/* implicit */val<long long int>) (val<unsigned short>)65535)))))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) -459996559)) ? (var_2) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3)))))) ? (((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<long long int>) var_9)) : (1945065297381876542LL))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_9)) && (((/* implicit */val<bool>) var_8)))))))))))));
    *var_13 = ((/* implicit */val<signed char>) var_10);
    *var_14 ^= ((/* implicit */val<unsigned short>) var_5);
    *var_15 = ((/* implicit */val<unsigned long long int>) min((*var_15), (((/* implicit */val<unsigned long long int>) var_0))));
    *var_16 = ((/* implicit */val<unsigned int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3701;
unsigned short var_1 = (unsigned short)21512;
unsigned long long int var_2 = 3193525254681540038ULL;
signed char var_3 = (signed char)22;
signed char var_4 = (signed char)47;
int var_5 = 902386763;
unsigned int var_8 = 3748504973U;
unsigned int var_9 = 3873484101U;
unsigned int var_10 = 819179415U;
int zero = 0;
unsigned long long int var_12 = 5490638366654297362ULL;
signed char var_13 = (signed char)-108;
unsigned short var_14 = (unsigned short)52258;
unsigned long long int var_15 = 17516157723931873714ULL;
unsigned int var_16 = 3872957425U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 5490638366654297362ULL;
    value_mismatch |= var_13 != (signed char)-105;
    value_mismatch |= var_14 != (unsigned short)39017;
    value_mismatch |= var_15 != 3701ULL;
    value_mismatch |= var_16 != 2458400198U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_8, var_9, var_10, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
