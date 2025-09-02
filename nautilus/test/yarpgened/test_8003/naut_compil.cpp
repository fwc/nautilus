/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8003
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8003
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
void test(val<unsigned short> var_0, val<short> var_3, val<unsigned int> var_8, val<unsigned char> var_9, val<long long int> var_12, val<unsigned long long int> var_13, val<int> zero, val<unsigned char*> var_14, val<unsigned char*> var_15, val<unsigned long long int*> var_16) {
    *var_14 = ((/* implicit */val<unsigned char>) (((!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))) : (var_8)))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))) : (((((/* implicit */val<unsigned long long int>) var_12)) * (((((/* implicit */val<bool>) 18446744073709551614ULL)) ? (var_13) : (((/* implicit */val<unsigned long long int>) var_12))))))));
    *var_15 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) (val<unsigned char>)232)) >> ((((+(((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)33786))) : (var_12))))) - (33758LL)))));
    *var_16 = ((/* implicit */val<unsigned long long int>) ((val<short>) min((6972442760681218185ULL), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)10))) : (var_8)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54847;
short var_3 = (short)-29472;
unsigned int var_8 = 557155535U;
unsigned char var_9 = (unsigned char)57;
long long int var_12 = 8854428167208640577LL;
unsigned long long int var_13 = 11759542897724160788ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)91;
unsigned char var_15 = (unsigned char)196;
unsigned long long int var_16 = 7519634765168224028ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)20;
    value_mismatch |= var_15 != (unsigned char)0;
    value_mismatch |= var_16 != 10ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_8, var_9, var_12, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
