/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8612
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8612
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
void test(val<unsigned char> var_2, val<int> zero, val<unsigned char*> var_18, val<unsigned short*> var_19) {
    *var_18 = ((/* implicit */val<unsigned char>) (-(((/* implicit */val<int>) var_2))));
    *var_19 = ((/* implicit */val<unsigned short>) (~((-(((/* implicit */val<int>) (val<short>)3840))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)156;
int zero = 0;
unsigned char var_18 = (unsigned char)51;
unsigned short var_19 = (unsigned short)23257;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)100;
    value_mismatch |= var_19 != (unsigned short)3839;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, zero, &var_18, &var_19);
  checksum();
}
