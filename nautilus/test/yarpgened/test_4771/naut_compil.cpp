/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4771
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4771
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
void test(val<unsigned char> var_1, val<unsigned char> var_5, val<int> zero, val<unsigned char*> var_10, val<unsigned short*> var_11) {
    *var_10 = ((/* implicit */val<unsigned char>) (-((+(((/* implicit */val<int>) var_5))))));
    *var_11 = ((/* implicit */val<unsigned short>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)61;
unsigned char var_5 = (unsigned char)236;
int zero = 0;
unsigned char var_10 = (unsigned char)55;
unsigned short var_11 = (unsigned short)26558;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)20;
    value_mismatch |= var_11 != (unsigned short)61;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
