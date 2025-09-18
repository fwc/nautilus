/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5200
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5200
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
void test(val<long long int> var_17, val<int> zero, val<unsigned char*> var_20, val<long long int*> var_21) {
    *var_20 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned int>) 1979174062)) >= (1790593776U)));
    *var_21 = ((/* implicit */val<long long int>) max((*var_21), ((-(var_17)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_17 = 8494978260728878394LL;
int zero = 0;
unsigned char var_20 = (unsigned char)55;
long long int var_21 = 6312648463699565402LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)1;
    value_mismatch |= var_21 != 6312648463699565402LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_17, zero, &var_20, &var_21);
  checksum();
}
