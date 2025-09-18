/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8680
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8680
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
void test(val<unsigned long long int> var_2, val<unsigned char> var_4, val<unsigned short> var_7, val<unsigned long long int> var_10, val<int> var_13, val<unsigned int> var_17, val<int> zero, val<unsigned long long int*> var_19, val<short*> var_20, val<unsigned long long int*> var_21) {
    *var_19 = max((var_10), (((((/* implicit */val<bool>) var_17)) ? (max((((/* implicit */val<unsigned long long int>) 9223372036854775807LL)), (18125146895727802842ULL))) : (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_4))))))));
    *var_20 = ((/* implicit */val<short>) max((((/* implicit */val<unsigned long long int>) (+(((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) (val<signed char>)60)) : (((/* implicit */val<int>) (val<signed char>)1))))))), (((((/* implicit */val<bool>) var_13)) ? (var_10) : (var_2)))));
    *var_21 = 18125146895727802856ULL;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13168497092717538732ULL;
unsigned char var_4 = (unsigned char)160;
unsigned short var_7 = (unsigned short)12843;
unsigned long long int var_10 = 6738797804513210606ULL;
int var_13 = -2004746410;
unsigned int var_17 = 228269110U;
int zero = 0;
unsigned long long int var_19 = 5883470024414232914ULL;
short var_20 = (short)6320;
unsigned long long int var_21 = 10995678056736160678ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 18125146895727802842ULL;
    value_mismatch |= var_20 != (short)12526;
    value_mismatch |= var_21 != 18125146895727802856ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_7, var_10, var_13, var_17, zero, &var_19, &var_20, &var_21);
  checksum();
}
