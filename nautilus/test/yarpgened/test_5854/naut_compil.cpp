/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5854
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5854
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
void test(val<unsigned long long int> var_4, val<unsigned int> var_6, val<unsigned short> var_12, val<long long int> var_17, val<int> zero, val<unsigned long long int*> var_18, val<int*> var_19, val<unsigned short*> var_20) {
    *var_18 *= ((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) var_12)) ? (296835149277855682LL) : (((8605007243072297478LL) / (((/* implicit */val<long long int>) var_6)))))) + (var_17)));
    *var_19 = ((/* implicit */val<int>) (+(296835149277855667LL)));
    *var_20 = ((/* implicit */val<unsigned short>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1938293675978617969ULL;
unsigned int var_6 = 1211986519U;
unsigned short var_12 = (unsigned short)57807;
long long int var_17 = 3811488690506354116LL;
int zero = 0;
unsigned long long int var_18 = 4363892809157164980ULL;
int var_19 = -340689172;
unsigned short var_20 = (unsigned short)603;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 15840303607035427896ULL;
    value_mismatch |= var_19 != -577863757;
    value_mismatch |= var_20 != (unsigned short)29809;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_12, var_17, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
