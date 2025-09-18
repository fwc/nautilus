/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3584
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3584
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
void test(val<long long int> var_1, val<int> zero, val<unsigned char*> var_14, val<long long int*> var_15) {
    *var_14 = ((/* implicit */val<unsigned char>) var_1);
    *var_15 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 562949953421311ULL)) ? (((/* implicit */val<int>) (val<signed char>)-11)) : ((+((~(((/* implicit */val<int>) (val<unsigned char>)252))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5391868190081986905LL;
int zero = 0;
unsigned char var_14 = (unsigned char)211;
long long int var_15 = 181568453010846307LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)89;
    value_mismatch |= var_15 != -11LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, zero, &var_14, &var_15);
  checksum();
}
