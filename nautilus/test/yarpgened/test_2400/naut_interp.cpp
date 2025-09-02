/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2400
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2400
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
void test(val<unsigned short> var_1, val<signed char> var_10, val<int> zero, val<int*> var_12, val<unsigned long long int*> var_13) {
    *var_12 = ((/* implicit */val<int>) max((*var_12), (max((((/* implicit */val<int>) ((((/* implicit */val<bool>) max((-1435229893), (1435229897)))) || (((/* implicit */val<bool>) ((val<unsigned char>) (val<unsigned short>)4)))))), (min((min((-728650036), (-118316279))), (((val<int>) 1435229870))))))));
    *var_13 = ((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned short>) var_10)), (var_1)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53972;
signed char var_10 = (signed char)105;
int zero = 0;
int var_12 = -188197402;
unsigned long long int var_13 = 10693307695675292911ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 1;
    value_mismatch |= var_13 != 53972ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_10, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
