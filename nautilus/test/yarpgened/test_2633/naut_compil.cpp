/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2633
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2633
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
void test(val<unsigned short> var_0, val<long long int> var_6, val<short> var_9, val<long long int> var_11, val<signed char> var_12, val<unsigned long long int> var_14, val<int> zero, val<unsigned char*> var_20, val<unsigned short*> var_21) {
    *var_20 = ((/* implicit */val<unsigned char>) min(((+(var_14))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 576460752303423487LL)) && (((/* implicit */val<bool>) (val<unsigned short>)65535)))))));
    *var_21 = ((/* implicit */val<unsigned short>) ((((((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_12))))) & (((var_6) >> (((((/* implicit */val<int>) var_0)) - (38511))))))) ^ ((((~(var_11))) ^ (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<bool>) var_9))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38516;
long long int var_6 = 2416238256894314273LL;
short var_9 = (short)-27883;
long long int var_11 = 6555385749430282624LL;
signed char var_12 = (signed char)110;
unsigned long long int var_14 = 11191623903627434234ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)55;
unsigned short var_21 = (unsigned short)64755;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)1;
    value_mismatch |= var_21 != (unsigned short)65135;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_9, var_11, var_12, var_14, zero, &var_20, &var_21);
  checksum();
}
