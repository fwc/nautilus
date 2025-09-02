/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2931
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2931
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
void test(val<unsigned char> var_1, val<long long int> var_4, val<unsigned short> var_6, val<unsigned long long int> var_7, val<long long int> var_9, val<int> var_10, val<unsigned long long int> var_11, val<int> zero, val<long long int*> var_12, val<long long int*> var_13, val<unsigned int*> var_14) {
    *var_12 ^= ((/* implicit */val<long long int>) min((((max((152455490), (((/* implicit */val<int>) var_6)))) - (var_10))), (((((/* implicit */val<bool>) (~(var_4)))) ? (((/* implicit */val<int>) (val<signed char>)-1)) : (var_10)))));
    *var_13 = ((/* implicit */val<long long int>) max((((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))) : (var_11))), (((((/* implicit */val<bool>) var_11)) ? (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)21836))) : (var_11))) : (((/* implicit */val<unsigned long long int>) min((-1879692798), (((/* implicit */val<int>) (val<unsigned char>)26)))))))));
    *var_14 = ((/* implicit */val<unsigned int>) min(((-(min((var_9), (var_9))))), (((/* implicit */val<long long int>) var_6))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)137;
long long int var_4 = -5436662893646272896LL;
unsigned short var_6 = (unsigned short)53479;
unsigned long long int var_7 = 3724676283559271873ULL;
long long int var_9 = -1570024405874205773LL;
int var_10 = 869982882;
unsigned long long int var_11 = 6033274426426681793ULL;
int zero = 0;
long long int var_12 = 1613107076187606984LL;
long long int var_13 = 3452631672625830639LL;
unsigned int var_14 = 3791160156U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != -1613107076879373976LL;
    value_mismatch |= var_13 != 21836LL;
    value_mismatch |= var_14 != 53479U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_6, var_7, var_9, var_10, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
