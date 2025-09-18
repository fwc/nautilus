/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5445
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5445
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
void test(val<unsigned int> var_0, val<int> var_2, val<signed char> var_3, val<int> var_4, val<long long int> var_5, val<int> var_6, val<long long int> var_8, val<unsigned int> var_9, val<signed char> var_11, val<int> zero, val<unsigned long long int*> var_12, val<long long int*> var_13, val<int*> var_14, val<long long int*> var_15) {
    *var_12 = ((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<unsigned int>) -409488891)) : (var_9)))) ? (((val<long long int>) var_3)) : ((~(var_8))))) * (((/* implicit */val<long long int>) max((((((/* implicit */val<unsigned int>) var_6)) / (var_0))), (((/* implicit */val<unsigned int>) ((val<signed char>) var_6))))))));
    *var_13 &= max((((((/* implicit */val<bool>) 3175919840U)) ? (max((var_5), (var_5))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_5)) ? (var_4) : (1073741823)))))), (((/* implicit */val<long long int>) var_6)));
    *var_14 = ((/* implicit */val<int>) ((max((var_8), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 1828190640207619729ULL)) ? (var_2) : (-1073741801)))))) - (var_8)));
    *var_15 = ((/* implicit */val<long long int>) min((*var_15), (((/* implicit */val<long long int>) (~(1119047447U))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3836345145U;
int var_2 = -1852226351;
signed char var_3 = (signed char)-67;
int var_4 = -2043320033;
long long int var_5 = 2214346356418356004LL;
int var_6 = 1156689417;
long long int var_8 = 8022560926282359029LL;
unsigned int var_9 = 300453554U;
signed char var_11 = (signed char)-2;
int zero = 0;
unsigned long long int var_12 = 3406042257580459136ULL;
long long int var_13 = -326370375771507866LL;
int var_14 = 482490926;
long long int var_15 = 153876396470374016LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 18446744073709551013ULL;
    value_mismatch |= var_13 != 1889383495116858148LL;
    value_mismatch |= var_14 != 0;
    value_mismatch |= var_15 != 3175919848LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_8, var_9, var_11, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
