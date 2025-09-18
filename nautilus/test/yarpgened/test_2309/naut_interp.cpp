/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2309
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2309
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
void test(val<short> var_2, val<short> var_9, val<unsigned long long int> var_18, val<int> zero, val<unsigned long long int*> var_19, val<unsigned long long int*> var_20) {
    *var_19 |= (-(((((/* implicit */val<bool>) ((val<unsigned long long int>) 1ULL))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))) : (var_18))));
    *var_20 = ((/* implicit */val<unsigned long long int>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-4132;
short var_9 = (short)31644;
unsigned long long int var_18 = 9710566949126508144ULL;
int zero = 0;
unsigned long long int var_19 = 5138995606610866193ULL;
unsigned long long int var_20 = 11495063815989017667ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 5138995606610866229ULL;
    value_mismatch |= var_20 != 31644ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_9, var_18, zero, &var_19, &var_20);
  checksum();
}
