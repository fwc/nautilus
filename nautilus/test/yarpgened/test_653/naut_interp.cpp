/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 653
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=653
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
void test(val<unsigned long long int> var_0, val<unsigned short> var_5, val<unsigned int> var_8, val<long long int> var_11, val<int> zero, val<int*> var_13, val<unsigned long long int*> var_14) {
    *var_13 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) var_5)), ((~(var_8)))))) ? (var_0) : (((/* implicit */val<unsigned long long int>) var_11))));
    *var_14 = ((/* implicit */val<unsigned long long int>) 217642926);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12949395667063059350ULL;
unsigned short var_5 = (unsigned short)32497;
unsigned int var_8 = 1441267824U;
long long int var_11 = -7798090737893979889LL;
int zero = 0;
int var_13 = -954629912;
unsigned long long int var_14 = 8522593099286928690ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 390509462;
    value_mismatch |= var_14 != 217642926ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_8, var_11, zero, &var_13, &var_14);
  checksum();
}
