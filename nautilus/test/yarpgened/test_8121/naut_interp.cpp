/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8121
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8121
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
void test(val<bool> var_0, val<unsigned char> var_6, val<unsigned int> var_16, val<int> zero, val<bool*> var_17, val<short*> var_18) {
    *var_17 = ((((/* implicit */val<int>) ((val<signed char>) (val<unsigned short>)65191))) == (((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) <= ((-(var_16)))))));
    *var_18 = ((/* implicit */val<short>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned char var_6 = (unsigned char)120;
unsigned int var_16 = 1468403869U;
int zero = 0;
bool var_17 = (bool)0;
short var_18 = (short)-661;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)0;
    value_mismatch |= var_18 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_16, zero, &var_17, &var_18);
  checksum();
}
