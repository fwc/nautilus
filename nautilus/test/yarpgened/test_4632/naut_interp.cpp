/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4632
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4632
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
void test(val<bool> var_8, val<long long int> var_15, val<bool> var_17, val<int> zero, val<unsigned short*> var_20, val<unsigned short*> var_21, val<long long int*> var_22) {
    *var_20 = ((/* implicit */val<unsigned short>) var_8);
    *var_21 = ((/* implicit */val<unsigned short>) var_15);
    *var_22 = ((/* implicit */val<long long int>) max((*var_22), ((((~((~(var_15))))) ^ (((/* implicit */val<long long int>) ((val<int>) var_17)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_8 = (bool)1;
long long int var_15 = 1618558270679596880LL;
bool var_17 = (bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)27906;
unsigned short var_21 = (unsigned short)47915;
long long int var_22 = 5652789829174051987LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)1;
    value_mismatch |= var_21 != (unsigned short)48976;
    value_mismatch |= var_22 != 5652789829174051987LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_15, var_17, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
