/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2428
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2428
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
void test(val<short> var_0, val<int> var_1, val<int> var_3, val<int> zero, val<unsigned char*> var_14, val<unsigned long long int*> var_15) {
    *var_14 = ((/* implicit */val<unsigned char>) var_3);
    *var_15 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_0)) ^ ((+((+(var_1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27746;
int var_1 = -228751856;
int var_3 = -1366507319;
int zero = 0;
unsigned char var_14 = (unsigned char)251;
unsigned long long int var_15 = 7992069767945550393ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)201;
    value_mismatch |= var_15 != 18446744073480825458ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, zero, &var_14, &var_15);
  checksum();
}
