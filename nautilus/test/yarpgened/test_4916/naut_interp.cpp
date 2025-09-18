/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4916
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4916
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
void test(val<unsigned short> var_1, val<bool> var_3, val<bool> var_5, val<int> zero, val<signed char*> var_13, val<unsigned char*> var_14, val<unsigned short*> var_15) {
    *var_13 = ((/* implicit */val<signed char>) max((*var_13), (((/* implicit */val<signed char>) var_3))));
    *var_14 = ((/* implicit */val<unsigned char>) max((*var_14), (((/* implicit */val<unsigned char>) var_5))));
    *var_15 -= var_1;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12079;
bool var_3 = (bool)1;
bool var_5 = (bool)1;
int zero = 0;
signed char var_13 = (signed char)-39;
unsigned char var_14 = (unsigned char)245;
unsigned short var_15 = (unsigned short)40151;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)1;
    value_mismatch |= var_14 != (unsigned char)245;
    value_mismatch |= var_15 != (unsigned short)28072;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, zero, &var_13, &var_14, &var_15);
  checksum();
}
