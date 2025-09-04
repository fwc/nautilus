/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4363
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4363
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
void test(val<long long int> var_1, val<short> var_2, val<signed char> var_3, val<unsigned int> var_5, val<signed char> var_6, val<int> var_7, val<int> var_8, val<int> var_9, val<int> zero, val<long long int*> var_10, val<short*> var_11, val<short*> var_12, val<long long int*> var_13) {
    *var_10 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_6)) ? ((~(((((/* implicit */val<bool>) var_7)) ? (var_9) : (((/* implicit */val<int>) var_3)))))) : (((/* implicit */val<int>) var_2))));
    *var_11 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned char>)55)) ^ (var_8)))) ? (max((((/* implicit */val<long long int>) var_5)), (5901656259547470016LL))) : (var_1)))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) ((val<short>) var_1))) && (((/* implicit */val<bool>) var_3))))) : ((-(((/* implicit */val<int>) (val<short>)27820))))));
    *var_12 = ((/* implicit */val<short>) var_8);
    *var_13 = ((/* implicit */val<long long int>) min((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) var_2)) <= (((/* implicit */val<int>) var_6)))))) + (var_5))), (((/* implicit */val<unsigned int>) ((((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_6)) : (var_8))) <= ((-(((/* implicit */val<int>) (val<short>)-27826)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6462365208829380458LL;
short var_2 = (short)-6828;
signed char var_3 = (signed char)-77;
unsigned int var_5 = 1932888155U;
signed char var_6 = (signed char)121;
int var_7 = 643636737;
int var_8 = 702492764;
int var_9 = 2098112830;
int zero = 0;
long long int var_10 = 3163056032108987765LL;
short var_11 = (short)-26137;
short var_12 = (short)9712;
long long int var_13 = 3765850705234682085LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -2098112831LL;
    value_mismatch |= var_11 != (short)1;
    value_mismatch |= var_12 != (short)12380;
    value_mismatch |= var_13 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_5, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
