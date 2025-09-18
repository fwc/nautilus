/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1137
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1137
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
void test(val<unsigned short> var_0, val<int> var_2, val<int> zero, val<short*> var_14, val<unsigned char*> var_15) {
    *var_14 = ((/* implicit */val<short>) min((*var_14), (((/* implicit */val<short>) var_0))));
    *var_15 = ((/* implicit */val<unsigned char>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60907;
int var_2 = -945872415;
int zero = 0;
short var_14 = (short)1652;
unsigned char var_15 = (unsigned char)181;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)-4629;
    value_mismatch |= var_15 != (unsigned char)225;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, zero, &var_14, &var_15);
  checksum();
}
