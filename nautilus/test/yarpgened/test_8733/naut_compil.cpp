/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8733
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8733
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
void test(val<signed char> var_0, val<int> var_3, val<unsigned long long int> var_5, val<unsigned char> var_6, val<unsigned char> var_7, val<int> zero, val<short*> var_10, val<long long int*> var_11, val<short*> var_12, val<int*> var_13) {
    *var_10 = ((/* implicit */val<short>) var_5);
    *var_11 = ((/* implicit */val<long long int>) ((min((((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_7)))), (((/* implicit */val<int>) var_0)))) * (((/* implicit */val<int>) (val<short>)7307))));
    *var_12 = ((/* implicit */val<short>) var_0);
    *var_13 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)3;
int var_3 = -666533788;
unsigned long long int var_5 = 14976125058683965207ULL;
unsigned char var_6 = (unsigned char)186;
unsigned char var_7 = (unsigned char)177;
int zero = 0;
short var_10 = (short)-8352;
long long int var_11 = -3245237511885855076LL;
short var_12 = (short)30629;
int var_13 = -289849500;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)3863;
    value_mismatch |= var_11 != 7307LL;
    value_mismatch |= var_12 != (short)3;
    value_mismatch |= var_13 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_6, var_7, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
}
