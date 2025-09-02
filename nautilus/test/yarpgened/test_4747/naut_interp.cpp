/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4747
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4747
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
void test(val<unsigned long long int> var_4, val<unsigned char> var_10, val<int> zero, val<unsigned char*> var_11, val<unsigned long long int*> var_12) {
    *var_11 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) 1467917046U)) && (((/* implicit */val<bool>) ((min((3530020981290885002ULL), (((/* implicit */val<unsigned long long int>) var_10)))) ^ (var_4))))));
    *var_12 = ((/* implicit */val<unsigned long long int>) (!((!(((/* implicit */val<bool>) 1))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1960519541372982071ULL;
unsigned char var_10 = (unsigned char)56;
int zero = 0;
unsigned char var_11 = (unsigned char)76;
unsigned long long int var_12 = 4434585019023379365ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)1;
    value_mismatch |= var_12 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
