/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5175
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5175
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
void test(val<unsigned int> var_0, val<unsigned char> var_3, val<unsigned short> var_8, val<int> zero, val<unsigned char*> var_11, val<unsigned short*> var_12) {
    *var_11 *= ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))) == (var_0)));
    *var_12 = ((/* implicit */val<unsigned short>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3169369700U;
unsigned char var_3 = (unsigned char)207;
unsigned short var_8 = (unsigned short)47391;
int zero = 0;
unsigned char var_11 = (unsigned char)63;
unsigned short var_12 = (unsigned short)57408;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)0;
    value_mismatch |= var_12 != (unsigned short)207;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_8, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
