/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9212
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9212
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
void test(val<unsigned short> var_14, val<int> zero, val<unsigned char*> var_17, val<unsigned int*> var_18) {
    *var_17 = ((/* implicit */val<unsigned char>) 12412475564590834046ULL);
    *var_18 = ((/* implicit */val<unsigned int>) var_14);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_14 = (unsigned short)31635;
int zero = 0;
unsigned char var_17 = (unsigned char)43;
unsigned int var_18 = 2345177325U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)126;
    value_mismatch |= var_18 != 31635U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_14, zero, &var_17, &var_18);
  checksum();
}
