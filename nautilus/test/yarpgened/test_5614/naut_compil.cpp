/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5614
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5614
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
void test(val<bool> var_14, val<long long int> var_15, val<int> zero, val<unsigned short*> var_20, val<unsigned short*> var_21) {
    *var_20 = ((/* implicit */val<unsigned short>) var_15);
    *var_21 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) var_14)) ^ (((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned char>)110)) != (((/* implicit */val<int>) (val<bool>)1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_14 = (bool)1;
long long int var_15 = -1015094960987223287LL;
int zero = 0;
unsigned short var_20 = (unsigned short)10600;
unsigned short var_21 = (unsigned short)33482;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)19209;
    value_mismatch |= var_21 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_14, var_15, zero, &var_20, &var_21);
  checksum();
}
