/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6946
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6946
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
void test(val<unsigned char> var_6, val<unsigned int> var_7, val<int> zero, val<long long int*> var_20, val<int*> var_21) {
    *var_20 = ((/* implicit */val<long long int>) max((((/* implicit */val<unsigned int>) (val<short>)21534)), (var_7)));
    *var_21 -= (+((-((+(((/* implicit */val<int>) var_6)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)135;
unsigned int var_7 = 3456728417U;
int zero = 0;
long long int var_20 = 5826404205792293847LL;
int var_21 = 1289213823;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 3456728417LL;
    value_mismatch |= var_21 != 1289213958;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
