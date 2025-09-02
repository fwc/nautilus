/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3097
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3097
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
void test(val<unsigned short> var_0, val<int> var_1, val<bool> var_2, val<unsigned long long int> var_3, val<signed char> var_4, val<unsigned long long int> var_6, val<unsigned long long int> var_9, val<bool> var_10, val<int> zero, val<bool*> var_11, val<int*> var_12, val<int*> var_13) {
    *var_11 = ((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))) ^ (((((/* implicit */val<unsigned long long int>) -1797097790)) - (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-9890))) : (var_9)))))));
    *var_12 = ((((/* implicit */val<bool>) (+((+(((/* implicit */val<int>) (val<short>)9890))))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<signed char>)-23)) + (((/* implicit */val<int>) (val<unsigned short>)65535))))) ? ((+(2147483628))) : (((((/* implicit */val<bool>) (val<unsigned char>)153)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) (val<bool>)1)))))) : (((((/* implicit */val<bool>) ((4730843680982105209LL) & (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)50612)))))) ? ((+(((/* implicit */val<int>) var_10)))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) -7060248236239891410LL))))))));
    *var_13 = ((/* implicit */val<int>) min((((var_9) * (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) (val<bool>)0)) : (((/* implicit */val<int>) (val<short>)-20831))))))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned long long int>) ((var_1) / (((/* implicit */val<int>) var_4))))) > (((((/* implicit */val<bool>) (-9223372036854775807LL - 1LL))) ? (8875604207766765480ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-20831))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20959;
int var_1 = -1654234879;
bool var_2 = (bool)0;
unsigned long long int var_3 = 17445792009215515527ULL;
signed char var_4 = (signed char)-3;
unsigned long long int var_6 = 975150789023478658ULL;
unsigned long long int var_9 = 18010259099884355987ULL;
bool var_10 = (bool)1;
int zero = 0;
bool var_11 = (bool)1;
int var_12 = 130099555;
int var_13 = 1104671782;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != 2147483628;
    value_mismatch |= var_13 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_6, var_9, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
