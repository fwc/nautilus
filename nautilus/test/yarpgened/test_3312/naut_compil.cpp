/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3312
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3312
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
void test(val<unsigned long long int> var_5, val<bool> var_9, val<int> var_11, val<unsigned long long int> var_12, val<int> var_13, val<int> zero, val<signed char*> var_14, val<signed char*> var_15, val<unsigned char*> var_16, val<long long int*> var_17) {
    *var_14 = ((/* implicit */val<signed char>) var_9);
    *var_15 = ((/* implicit */val<signed char>) var_13);
    *var_16 -= ((/* implicit */val<unsigned char>) (((~(max((((/* implicit */val<unsigned long long int>) var_13)), (var_5))))) | (((/* implicit */val<unsigned long long int>) (+(var_11))))));
    *var_17 = ((/* implicit */val<long long int>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15199809722963891513ULL;
bool var_9 = (bool)0;
int var_11 = -845888194;
unsigned long long int var_12 = 7405729134727152835ULL;
int var_13 = 451570415;
int zero = 0;
signed char var_14 = (signed char)-101;
signed char var_15 = (signed char)-54;
unsigned char var_16 = (unsigned char)49;
long long int var_17 = 702071667859472707LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)0;
    value_mismatch |= var_15 != (signed char)-17;
    value_mismatch |= var_16 != (unsigned char)51;
    value_mismatch |= var_17 != 7405729134727152835LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_9, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
