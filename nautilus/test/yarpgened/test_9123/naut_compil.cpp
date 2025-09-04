/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9123
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9123
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
void test(val<int> var_6, val<unsigned short> var_9, val<unsigned long long int> var_13, val<int> zero, val<unsigned long long int*> var_19, val<short*> var_20) {
    *var_19 -= ((/* implicit */val<unsigned long long int>) ((val<unsigned short>) max((max((var_6), (((/* implicit */val<int>) (val<unsigned char>)15)))), (((/* implicit */val<int>) var_9)))));
    *var_20 = ((/* implicit */val<short>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1124595072;
unsigned short var_9 = (unsigned short)17596;
unsigned long long int var_13 = 18171633533223791734ULL;
int zero = 0;
unsigned long long int var_19 = 6364464375740738828ULL;
short var_20 = (short)-2469;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 6364464375740721232ULL;
    value_mismatch |= var_20 != (short)27766;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_9, var_13, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
