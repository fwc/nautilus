/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8969
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8969
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
void test(val<bool> var_1, val<bool> var_2, val<unsigned short> var_4, val<bool> var_8, val<int> zero, val<unsigned short*> var_10, val<bool*> var_11) {
    *var_10 = ((/* implicit */val<unsigned short>) var_1);
    *var_11 = ((/* implicit */val<bool>) min((((((((/* implicit */val<int>) (val<unsigned short>)21700)) << (((((/* implicit */val<int>) (val<unsigned short>)21700)) - (21690))))) + (((/* implicit */val<int>) var_2)))), (((/* implicit */val<int>) min((var_4), (((/* implicit */val<unsigned short>) var_8)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
bool var_2 = (bool)1;
unsigned short var_4 = (unsigned short)39408;
bool var_8 = (bool)1;
int zero = 0;
unsigned short var_10 = (unsigned short)58822;
bool var_11 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)1;
    value_mismatch |= var_11 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_8, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
