/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7028
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7028
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
void test(val<unsigned int> var_3, val<unsigned int> var_7, val<unsigned long long int> var_8, val<int> zero, val<short*> var_13, val<short*> var_14) {
    *var_13 = ((/* implicit */val<short>) min((((/* implicit */val<unsigned int>) min((min(((val<unsigned short>)56275), ((val<unsigned short>)56272))), (((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) var_7)))))))), (var_3)));
    *var_14 = ((/* implicit */val<short>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 447211516U;
unsigned int var_7 = 2440232831U;
unsigned long long int var_8 = 12748628914192552669ULL;
int zero = 0;
short var_13 = (short)19050;
short var_14 = (short)27336;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)0;
    value_mismatch |= var_14 != (short)-27939;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, var_8, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
