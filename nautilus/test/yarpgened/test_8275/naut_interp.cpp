/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8275
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8275
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
void test(val<unsigned long long int> var_4, val<unsigned long long int> var_5, val<int> var_13, val<int> zero, val<unsigned long long int*> var_15, val<unsigned int*> var_16) {
    *var_15 = ((min((((/* implicit */val<unsigned long long int>) ((val<signed char>) var_5))), ((+(var_4))))) * (((/* implicit */val<unsigned long long int>) (+(var_13)))));
    *var_16 = ((/* implicit */val<unsigned int>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15298100947772780743ULL;
unsigned long long int var_5 = 9495057622717683170ULL;
int var_13 = 1334087482;
int zero = 0;
unsigned long long int var_15 = 17700711824742686987ULL;
unsigned int var_16 = 1710724521U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 9013899395175167510ULL;
    value_mismatch |= var_16 != 1511010503U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_13, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
