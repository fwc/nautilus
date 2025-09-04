/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5780
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5780
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
void test(val<unsigned long long int> var_0, val<signed char> var_3, val<short> var_4, val<int> zero, val<short*> var_10, val<unsigned char*> var_11, val<int*> var_12, val<unsigned long long int*> var_13) {
    *var_10 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) -357763277780074093LL))));
    *var_11 ^= ((/* implicit */val<unsigned char>) max(((+(var_0))), (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) var_3)), ((+(((/* implicit */val<int>) var_4)))))))));
    *var_12 = ((/* implicit */val<int>) 357763277780074102LL);
    *var_13 *= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_4)) | (((/* implicit */val<int>) (val<signed char>)-71))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8527547224964540867ULL;
signed char var_3 = (signed char)-53;
short var_4 = (short)14548;
int zero = 0;
short var_10 = (short)-13375;
unsigned char var_11 = (unsigned char)230;
int var_12 = -700301813;
unsigned long long int var_13 = 15661393743962895057ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)0;
    value_mismatch |= var_11 != (unsigned char)45;
    value_mismatch |= var_12 != 1036172918;
    value_mismatch |= var_13 != 8356050989239969677ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
