/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2170
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2170
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
void test(val<long long int> var_0, val<unsigned long long int> var_1, val<int> zero, val<int*> var_12, val<unsigned int*> var_13) {
    *var_12 = ((/* implicit */val<int>) var_1);
    *var_13 = ((/* implicit */val<unsigned int>) ((val<int>) ((((/* implicit */val<bool>) var_0)) ? (-5137997129854424905LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)0))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8654877921895323157LL;
unsigned long long int var_1 = 6285081712032857344ULL;
int zero = 0;
int var_12 = 361172488;
unsigned int var_13 = 4177363609U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 1845869824;
    value_mismatch |= var_13 != 705489079U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, zero, &var_12, &var_13);
  checksum();
}
