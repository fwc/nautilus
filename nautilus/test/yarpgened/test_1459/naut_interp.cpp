/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1459
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1459
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
void test(val<int> var_0, val<signed char> var_2, val<unsigned short> var_5, val<unsigned long long int> var_6, val<unsigned char> var_9, val<int> var_10, val<unsigned int> var_14, val<unsigned char> var_15, val<int> zero, val<unsigned long long int*> var_16, val<long long int*> var_17, val<unsigned char*> var_18) {
    *var_16 = ((/* implicit */val<unsigned long long int>) min((*var_16), (((((var_6) ^ (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_5))))))) ^ (((/* implicit */val<unsigned long long int>) var_0))))));
    *var_17 |= ((/* implicit */val<long long int>) (+(max((((/* implicit */val<int>) ((val<unsigned char>) var_14))), (((((/* implicit */val<bool>) (val<unsigned short>)65535)) ? (var_10) : (var_0)))))));
    *var_18 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((val<long long int>) ((((/* implicit */val<bool>) var_9)) ? (18391307601485453593ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_15))))))) || ((!(((/* implicit */val<bool>) var_15))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 375951170;
signed char var_2 = (signed char)3;
unsigned short var_5 = (unsigned short)35885;
unsigned long long int var_6 = 16938628714000029391ULL;
unsigned char var_9 = (unsigned char)142;
int var_10 = 794877076;
unsigned int var_14 = 68942239U;
unsigned char var_15 = (unsigned char)106;
int zero = 0;
unsigned long long int var_16 = 936952132002288450ULL;
long long int var_17 = 3774179180234416587LL;
unsigned char var_18 = (unsigned char)8;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 936952132002288450ULL;
    value_mismatch |= var_17 != 3774179180827966943LL;
    value_mismatch |= var_18 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_6, var_9, var_10, var_14, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
