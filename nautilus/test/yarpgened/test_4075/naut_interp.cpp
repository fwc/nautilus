/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4075
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4075
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
void test(val<int> var_2, val<short> var_9, val<unsigned short> var_10, val<int> zero, val<unsigned short*> var_17, val<int*> var_18, val<unsigned char*> var_19) {
    *var_17 = var_10;
    *var_18 = (+(((/* implicit */val<int>) (val<signed char>)127)));
    *var_19 = ((/* implicit */val<unsigned char>) min((var_2), (((/* implicit */val<int>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 760824534;
short var_9 = (short)-22475;
unsigned short var_10 = (unsigned short)58601;
int zero = 0;
unsigned short var_17 = (unsigned short)40466;
int var_18 = -2059714743;
unsigned char var_19 = (unsigned char)85;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)58601;
    value_mismatch |= var_18 != 127;
    value_mismatch |= var_19 != (unsigned char)53;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_9, var_10, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
