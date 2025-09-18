/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9280
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9280
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
void test(val<unsigned char> var_5, val<bool> var_6, val<int> zero, val<unsigned char*> var_16, val<unsigned short*> var_17) {
    *var_16 = var_5;
    *var_17 |= ((/* implicit */val<unsigned short>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)241;
bool var_6 = (bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)139;
unsigned short var_17 = (unsigned short)31192;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)241;
    value_mismatch |= var_17 != (unsigned short)31193;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, zero, &var_16, &var_17);
  checksum();
}
