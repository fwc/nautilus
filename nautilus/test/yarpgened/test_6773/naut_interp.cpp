/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6773
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6773
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
void test(val<unsigned char> var_0, val<unsigned long long int> var_2, val<unsigned int> var_4, val<int> zero, val<int*> var_13, val<bool*> var_14) {
    *var_13 = ((/* implicit */val<int>) (-(((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))) ^ ((~(var_2)))))));
    *var_14 = ((/* implicit */val<bool>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)58;
unsigned long long int var_2 = 15325104372884091145ULL;
unsigned int var_4 = 1255945032U;
int zero = 0;
int var_13 = 389241816;
bool var_14 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 864727348;
    value_mismatch |= var_14 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
