/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7056
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7056
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
void test(val<long long int> var_0, val<bool> var_11, val<int> zero, val<unsigned char*> var_14, val<long long int*> var_15) {
    *var_14 = ((/* implicit */val<unsigned char>) (!(var_11)));
    *var_15 = ((((/* implicit */val<bool>) max((6935236093473036800LL), (((/* implicit */val<long long int>) (val<bool>)1))))) ? (var_0) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 8573157376LL)) ? (1023) : (((/* implicit */val<int>) (val<bool>)1))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6657320203763525041LL;
bool var_11 = (bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)152;
long long int var_15 = 8078070869158817823LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)0;
    value_mismatch |= var_15 != 6657320203763525041LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_11, zero, &var_14, &var_15);
  checksum();
}
