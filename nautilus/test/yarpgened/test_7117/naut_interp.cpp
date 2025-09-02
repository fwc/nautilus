/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7117
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7117
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
void test(val<bool> var_0, val<unsigned short> var_3, val<long long int> var_5, val<unsigned int> var_6, val<long long int> var_8, val<int> zero, val<unsigned char*> var_10, val<int*> var_11, val<unsigned int*> var_12) {
    *var_10 = ((/* implicit */val<unsigned char>) var_0);
    *var_11 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) var_6)) < (var_8))))) : (min((((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<unsigned short>)2032)) == (((/* implicit */val<int>) var_3))))), (min((var_5), (((/* implicit */val<long long int>) var_6))))))));
    *var_12 *= ((/* implicit */val<unsigned int>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned short var_3 = (unsigned short)37860;
long long int var_5 = 2033567070354715319LL;
unsigned int var_6 = 2002719744U;
long long int var_8 = -8717200513198575008LL;
int zero = 0;
unsigned char var_10 = (unsigned char)194;
int var_11 = -1921488061;
unsigned int var_12 = 1802092899U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)0;
    value_mismatch |= var_11 != 0;
    value_mismatch |= var_12 != 4043561760U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_6, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
