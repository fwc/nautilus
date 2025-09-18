/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7829
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7829
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
void test(val<int> var_5, val<unsigned short> var_16, val<int> zero, val<unsigned char*> var_18, val<short*> var_19) {
    *var_18 ^= ((/* implicit */val<unsigned char>) var_5);
    *var_19 = ((/* implicit */val<short>) var_16);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1493431329;
unsigned short var_16 = (unsigned short)3503;
int zero = 0;
unsigned char var_18 = (unsigned char)22;
short var_19 = (short)-26789;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)55;
    value_mismatch |= var_19 != (short)3503;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_16, zero, &var_18, &var_19);
  checksum();
}
