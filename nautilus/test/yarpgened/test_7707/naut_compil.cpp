/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7707
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7707
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
void test(val<unsigned short> var_3, val<signed char> var_4, val<bool> var_6, val<long long int> var_7, val<unsigned int> var_10, val<long long int> var_14, val<signed char> var_16, val<int> zero, val<bool*> var_18, val<unsigned long long int*> var_19, val<signed char*> var_20) {
    *var_18 = ((/* implicit */val<bool>) var_16);
    *var_19 = ((/* implicit */val<unsigned long long int>) min((((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_4)) % (((/* implicit */val<int>) var_6))))) ? (((((/* implicit */val<bool>) (-2147483647 - 1))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)255))) : (var_14))) : (((/* implicit */val<long long int>) (-(var_10)))))), ((+(((((/* implicit */val<bool>) 336245550)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)0))) : (var_7)))))));
    *var_20 = ((/* implicit */val<signed char>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)7692;
signed char var_4 = (signed char)-20;
bool var_6 = (bool)1;
long long int var_7 = 6711972955053532667LL;
unsigned int var_10 = 1575319317U;
long long int var_14 = 902757448675796269LL;
signed char var_16 = (signed char)-107;
int zero = 0;
bool var_18 = (bool)0;
unsigned long long int var_19 = 3548716971857949182ULL;
signed char var_20 = (signed char)-2;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != 0ULL;
    value_mismatch |= var_20 != (signed char)12;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_6, var_7, var_10, var_14, var_16, zero, &var_18, &var_19, &var_20);
  checksum();
}
