/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8355
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8355
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
void test(val<unsigned char> var_3, val<signed char> var_4, val<unsigned char> var_7, val<int> zero, val<unsigned short*> var_10, val<unsigned short*> var_11) {
    *var_10 = ((/* implicit */val<unsigned short>) ((((((/* implicit */val<int>) var_7)) ^ (((/* implicit */val<int>) var_3)))) == (((/* implicit */val<int>) var_4))));
    *var_11 &= ((/* implicit */val<unsigned short>) 16899910223254775711ULL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)27;
signed char var_4 = (signed char)-115;
unsigned char var_7 = (unsigned char)74;
int zero = 0;
unsigned short var_10 = (unsigned short)28690;
unsigned short var_11 = (unsigned short)28250;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)0;
    value_mismatch |= var_11 != (unsigned short)26138;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_7, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
