/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3819
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3819
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
void test(val<unsigned char> var_0, val<signed char> var_2, val<unsigned short> var_5, val<unsigned char> var_11, val<int> zero, val<unsigned int*> var_16, val<unsigned long long int*> var_17) {
    *var_16 = ((/* implicit */val<unsigned int>) min(((+(((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_5)))))), (((/* implicit */val<int>) var_11))));
    *var_17 = ((/* implicit */val<unsigned long long int>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)16;
signed char var_2 = (signed char)116;
unsigned short var_5 = (unsigned short)43239;
unsigned char var_11 = (unsigned char)49;
int zero = 0;
unsigned int var_16 = 2361418804U;
unsigned long long int var_17 = 1110283398082911374ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 49U;
    value_mismatch |= var_17 != 16ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_11, zero, &var_16, &var_17);
  checksum();
}
