/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6054
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6054
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
void test(val<long long int> var_2, val<bool> var_8, val<unsigned long long int> var_15, val<int> zero, val<unsigned int*> var_17, val<long long int*> var_18) {
    *var_17 = ((/* implicit */val<unsigned int>) ((var_8) ? (var_2) : (((((/* implicit */val<bool>) 2499801756U)) ? (8909342281906485143LL) : (((/* implicit */val<long long int>) 4294967293U))))));
    *var_18 = ((/* implicit */val<long long int>) var_15);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5700641423641290387LL;
bool var_8 = (bool)1;
unsigned long long int var_15 = 8086602532245954967ULL;
int zero = 0;
unsigned int var_17 = 1857267035U;
long long int var_18 = -471036171109437136LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 402381165U;
    value_mismatch |= var_18 != 8086602532245954967LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_8, var_15, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
