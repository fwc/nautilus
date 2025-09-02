/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3328
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3328
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
void test(val<long long int> var_0, val<short> var_1, val<unsigned short> var_2, val<long long int> var_4, val<unsigned short> var_7, val<unsigned char> var_9, val<unsigned char> var_10, val<unsigned char> var_11, val<unsigned int> var_13, val<int> var_14, val<int> zero, val<unsigned char*> var_16, val<unsigned char*> var_17, val<int*> var_18, val<unsigned char*> var_19) {
    *var_16 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_9))))) % (max((((/* implicit */val<unsigned int>) var_1)), (var_13)))))) ? (((/* implicit */val<int>) var_10)) : (var_14)));
    *var_17 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) - (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_7)) ? (var_13) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11)))))) ? (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))) / (var_0))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) max((var_9), (var_9)))))))));
    *var_18 = ((/* implicit */val<int>) var_4);
    *var_19 = ((/* implicit */val<unsigned char>) max((*var_19), (((/* implicit */val<unsigned char>) var_13))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3610731680146181956LL;
short var_1 = (short)-497;
unsigned short var_2 = (unsigned short)59963;
long long int var_4 = -8445147884558467683LL;
unsigned short var_7 = (unsigned short)54695;
unsigned char var_9 = (unsigned char)30;
unsigned char var_10 = (unsigned char)180;
unsigned char var_11 = (unsigned char)185;
unsigned int var_13 = 3746789600U;
int var_14 = -655288563;
int zero = 0;
unsigned char var_16 = (unsigned char)187;
unsigned char var_17 = (unsigned char)248;
int var_18 = -1238864665;
unsigned char var_19 = (unsigned char)219;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)180;
    value_mismatch |= var_17 != (unsigned char)30;
    value_mismatch |= var_18 != 1228946845;
    value_mismatch |= var_19 != (unsigned char)224;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_7, var_9, var_10, var_11, var_13, var_14, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
