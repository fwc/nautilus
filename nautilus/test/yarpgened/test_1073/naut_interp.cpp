/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1073
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1073
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
void test(val<unsigned char> var_0, val<short> var_4, val<unsigned short> var_5, val<unsigned int> var_6, val<int> var_9, val<bool> var_12, val<int> zero, val<unsigned long long int*> var_16, val<unsigned char*> var_17) {
    *var_16 = ((/* implicit */val<unsigned long long int>) (-(((((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) var_5)), (var_6)))) ? (var_9) : (((/* implicit */val<int>) var_12))))));
    *var_17 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) ((val<bool>) ((((/* implicit */val<bool>) 523570907U)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_4)))))) * (((/* implicit */val<int>) ((val<short>) var_6)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)123;
short var_4 = (short)-24934;
unsigned short var_5 = (unsigned short)60918;
unsigned int var_6 = 2393961747U;
int var_9 = -1976619831;
bool var_12 = (bool)0;
int zero = 0;
unsigned long long int var_16 = 12328215014152691565ULL;
unsigned char var_17 = (unsigned char)212;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 1976619831ULL;
    value_mismatch |= var_17 != (unsigned char)19;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, var_6, var_9, var_12, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
