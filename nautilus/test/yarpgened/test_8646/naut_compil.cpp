/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8646
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8646
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
void test(val<unsigned int> var_0, val<bool> var_6, val<int> zero, val<int*> var_10, val<unsigned short*> var_11) {
    *var_10 = (+(((/* implicit */val<int>) var_6)));
    *var_11 = ((/* implicit */val<unsigned short>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4063290500U;
bool var_6 = (bool)0;
int zero = 0;
int var_10 = -1794168082;
unsigned short var_11 = (unsigned short)20781;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 0;
    value_mismatch |= var_11 != (unsigned short)58500;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, zero, &var_10, &var_11);
  checksum();
}
