/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1359
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1359
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
void test(val<long long int> var_1, val<short> var_2, val<bool> var_3, val<signed char> var_8, val<int> zero, val<bool*> var_11, val<long long int*> var_12, val<signed char*> var_13) {
    *var_11 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (~(var_1)))) ? (((val<long long int>) (val<signed char>)15)) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<signed char>) 4294967295U))))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))) : ((((!(((/* implicit */val<bool>) 4294967295U)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned short>) 4294967282U)))) : (((((/* implicit */val<bool>) var_8)) ? (var_1) : (((/* implicit */val<long long int>) 4294967295U))))))));
    *var_12 = ((val<long long int>) (!(((/* implicit */val<bool>) ((0U) & (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))))))));
    *var_13 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) 4294967282U)) ? (3771943386U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)125)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 838618021741210408LL;
short var_2 = (short)3580;
bool var_3 = (bool)0;
signed char var_8 = (signed char)7;
int zero = 0;
bool var_11 = (bool)0;
long long int var_12 = 7009623128659564788LL;
signed char var_13 = (signed char)-98;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)0;
    value_mismatch |= var_12 != 1LL;
    value_mismatch |= var_13 != (signed char)-38;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_8, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
