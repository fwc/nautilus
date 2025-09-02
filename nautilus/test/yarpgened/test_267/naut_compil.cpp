/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 267
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=267
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
void test(val<unsigned char> var_4, val<unsigned int> var_6, val<unsigned char> var_13, val<int> zero, val<unsigned short*> var_15, val<bool*> var_16) {
    *var_15 = ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) var_4))));
    *var_16 = ((/* implicit */val<bool>) (((+(var_6))) + (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_13)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)39;
unsigned int var_6 = 3954809508U;
unsigned char var_13 = (unsigned char)121;
int zero = 0;
unsigned short var_15 = (unsigned short)60191;
bool var_16 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)0;
    value_mismatch |= var_16 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_13, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
