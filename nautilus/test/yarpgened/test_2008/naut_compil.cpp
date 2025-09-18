/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2008
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2008
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
void test(val<signed char> var_3, val<bool> var_4, val<long long int> var_9, val<unsigned int> var_14, val<int> zero, val<unsigned int*> var_15, val<long long int*> var_16, val<signed char*> var_17, val<unsigned char*> var_18) {
    *var_15 = min((var_14), (((/* implicit */val<unsigned int>) (val<unsigned char>)219)));
    *var_16 -= var_9;
    *var_17 = var_3;
    *var_18 = ((/* implicit */val<unsigned char>) min((((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_4))))), ((~(((((/* implicit */val<bool>) -2106156829426043619LL)) ? (((/* implicit */val<long long int>) 867036120U)) : (2106156829426043618LL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)121;
bool var_4 = (bool)0;
long long int var_9 = -263579333557119206LL;
unsigned int var_14 = 3896736828U;
int zero = 0;
unsigned int var_15 = 1099747820U;
long long int var_16 = -3434934233160605031LL;
signed char var_17 = (signed char)37;
unsigned char var_18 = (unsigned char)166;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 219U;
    value_mismatch |= var_16 != -3171354899603485825LL;
    value_mismatch |= var_17 != (signed char)121;
    value_mismatch |= var_18 != (unsigned char)39;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_9, var_14, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
