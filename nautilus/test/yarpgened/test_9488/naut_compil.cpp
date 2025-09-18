/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9488
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9488
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
void test(val<int> zero, val<long long int*> var_17, val<unsigned short*> var_18) {
    *var_17 = ((/* implicit */val<long long int>) min((*var_17), (((/* implicit */val<long long int>) max((546040192U), (546040192U))))));
    *var_18 = ((/* implicit */val<unsigned short>) min((546040169U), (((/* implicit */val<unsigned int>) (val<short>)-4997))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
long long int var_17 = -4497988204704293939LL;
unsigned short var_18 = (unsigned short)41905;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -4497988204704293939LL;
    value_mismatch |= var_18 != (unsigned short)59753;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_17, &var_18);
  checksum();
}
