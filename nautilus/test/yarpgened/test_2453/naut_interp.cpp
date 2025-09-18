/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2453
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2453
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
void test(val<long long int> var_3, val<int> var_11, val<int> var_15, val<short> var_16, val<int> zero, val<unsigned char*> var_19, val<int*> var_20) {
    *var_19 = ((/* implicit */val<unsigned char>) min((((/* implicit */val<long long int>) var_16)), (((((/* implicit */val<long long int>) ((var_15) >> (((var_15) - (1906155679)))))) ^ (((((/* implicit */val<bool>) (val<signed char>)-10)) ? (((/* implicit */val<long long int>) -112741011)) : (var_3)))))));
    *var_20 = var_11;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8438631138761867627LL;
int var_11 = 1232406282;
int var_15 = 1906155679;
short var_16 = (short)-408;
int zero = 0;
unsigned char var_19 = (unsigned char)246;
int var_20 = 923969708;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)242;
    value_mismatch |= var_20 != 1232406282;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_11, var_15, var_16, zero, &var_19, &var_20);
  checksum();
}
