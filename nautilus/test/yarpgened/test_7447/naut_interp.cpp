/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7447
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7447
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
void test(val<unsigned long long int> var_4, val<bool> var_7, val<int> zero, val<unsigned short*> var_11, val<short*> var_12) {
    *var_11 -= ((/* implicit */val<unsigned short>) var_4);
    *var_12 &= ((/* implicit */val<short>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7089182552762314801ULL;
bool var_7 = (bool)0;
int zero = 0;
unsigned short var_11 = (unsigned short)60090;
short var_12 = (short)-32343;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned short)31369;
    value_mismatch |= var_12 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
