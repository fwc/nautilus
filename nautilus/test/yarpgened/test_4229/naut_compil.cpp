/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4229
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4229
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
void test(val<unsigned long long int> var_6, val<int> zero, val<unsigned char*> var_10, val<long long int*> var_11) {
    *var_10 = ((/* implicit */val<unsigned char>) var_6);
    *var_11 &= ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 19ULL)) ? (((/* implicit */val<int>) (val<unsigned char>)143)) : (((/* implicit */val<int>) (val<unsigned char>)241))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 7393770321817918584ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)12;
long long int var_11 = 2154895083515199385LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)120;
    value_mismatch |= var_11 != 137LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, zero, &var_10, &var_11);
  checksum();
}
