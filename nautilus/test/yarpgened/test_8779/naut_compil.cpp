/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8779
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8779
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
void test(val<unsigned char> var_0, val<unsigned char> var_1, val<unsigned char> var_2, val<unsigned int> var_3, val<bool> var_5, val<long long int> var_6, val<unsigned int> var_8, val<long long int> var_9, val<int> zero, val<unsigned long long int*> var_10, val<unsigned int*> var_11) {
    *var_10 = ((/* implicit */val<unsigned long long int>) ((var_5) ? (((val<unsigned int>) 8083011238612127118ULL)) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((((/* implicit */val<int>) var_1)) ^ (((/* implicit */val<int>) (val<short>)-12727)))) == (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_0))))))))));
    *var_11 = ((((/* implicit */val<bool>) var_1)) ? (((((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))) : (var_8))) << (((((((/* implicit */val<bool>) var_9)) ? (2224735721U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))))) - (2224735716U))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((((/* implicit */val<bool>) 3503965153907854410ULL)) ? (6867288170408405399ULL) : (14942778919801697206ULL))) == (max((((/* implicit */val<unsigned long long int>) (val<unsigned short>)65523)), (10783093109148631497ULL))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)51;
unsigned char var_1 = (unsigned char)21;
unsigned char var_2 = (unsigned char)222;
unsigned int var_3 = 880589003U;
bool var_5 = (bool)0;
long long int var_6 = 8881472814270173596LL;
unsigned int var_8 = 2360296871U;
long long int var_9 = 7430043295950380279LL;
int zero = 0;
unsigned long long int var_10 = 7226961035415166812ULL;
unsigned int var_11 = 3282275851U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 0ULL;
    value_mismatch |= var_11 != 7104U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_6, var_8, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
