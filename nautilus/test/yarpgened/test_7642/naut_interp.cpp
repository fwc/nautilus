/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7642
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7642
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
void test(val<unsigned short> var_0, val<unsigned char> var_1, val<signed char> var_2, val<short> var_6, val<unsigned short> var_7, val<short> var_8, val<long long int> var_10, val<int> zero, val<signed char*> var_11, val<int*> var_12) {
    *var_11 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_6)))))) : ((-(var_10))))))));
    *var_12 = min((((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) var_8)), (var_0)))) : (((/* implicit */val<int>) var_1)))), ((~((+(((/* implicit */val<int>) var_2)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3864;
unsigned char var_1 = (unsigned char)155;
signed char var_2 = (signed char)69;
short var_6 = (short)11866;
unsigned short var_7 = (unsigned short)9157;
short var_8 = (short)18267;
long long int var_10 = -8265538567646948109LL;
int zero = 0;
signed char var_11 = (signed char)-20;
int var_12 = 1946368785;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)1;
    value_mismatch |= var_12 != -70;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_6, var_7, var_8, var_10, zero, &var_11, &var_12);
  checksum();
}
