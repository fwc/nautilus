/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3878
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3878
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
void test(val<unsigned long long int> var_6, val<int> var_9, val<int> zero, val<signed char*> var_15, val<signed char*> var_16) {
    *var_15 = ((/* implicit */val<signed char>) var_9);
    *var_16 = ((/* implicit */val<signed char>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 10661222844990619848ULL;
int var_9 = 1609529291;
int zero = 0;
signed char var_15 = (signed char)6;
signed char var_16 = (signed char)-98;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)-53;
    value_mismatch |= var_16 != (signed char)-56;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_9, zero, &var_15, &var_16);
  checksum();
}
