/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7668
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7668
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
void test(val<unsigned long long int> var_0, val<unsigned char> var_7, val<unsigned long long int> var_9, val<short> var_10, val<long long int> var_14, val<int> zero, val<unsigned int*> var_15, val<unsigned short*> var_16) {
    *var_15 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (min((var_0), (9235244031672244443ULL))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) var_7)))))))) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) 7252481988533792936LL)) ? (((/* implicit */val<int>) (val<unsigned short>)0)) : (((/* implicit */val<int>) (val<short>)3913)))))));
    *var_16 = ((/* implicit */val<unsigned short>) var_14);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12984365128944670103ULL;
unsigned char var_7 = (unsigned char)51;
unsigned long long int var_9 = 4723438206852998580ULL;
short var_10 = (short)16784;
long long int var_14 = -8067156136360043530LL;
int zero = 0;
unsigned int var_15 = 2029209635U;
unsigned short var_16 = (unsigned short)33186;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 0U;
    value_mismatch |= var_16 != (unsigned short)39926;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_7, var_9, var_10, var_14, zero, &var_15, &var_16);
  checksum();
}
