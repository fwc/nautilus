/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4043
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4043
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
void test(val<signed char> var_1, val<unsigned char> var_2, val<long long int> var_4, val<unsigned char> var_5, val<long long int> var_6, val<int> var_8, val<unsigned short> var_9, val<int> zero, val<short*> var_13, val<unsigned int*> var_14, val<unsigned int*> var_15) {
    *var_13 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)0)) ? (((((/* implicit */val<bool>) (val<signed char>)16)) ? (var_4) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)157))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2)))))) ? (((/* implicit */val<long long int>) max((((((/* implicit */val<int>) var_9)) + (((/* implicit */val<int>) (val<signed char>)0)))), ((+(((/* implicit */val<int>) var_5))))))) : (var_6)));
    *var_14 = ((/* implicit */val<unsigned int>) ((val<int>) var_8));
    *var_15 = ((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-27;
unsigned char var_2 = (unsigned char)156;
long long int var_4 = 1873578789176258169LL;
unsigned char var_5 = (unsigned char)162;
long long int var_6 = 1666475626790139270LL;
int var_8 = -410642996;
unsigned short var_9 = (unsigned short)9585;
int zero = 0;
short var_13 = (short)1610;
unsigned int var_14 = 2872641344U;
unsigned int var_15 = 2850466862U;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)9585;
    value_mismatch |= var_14 != 3884324300U;
    value_mismatch |= var_15 != 4294967269U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_5, var_6, var_8, var_9, zero, &var_13, &var_14, &var_15);
  checksum();
}
