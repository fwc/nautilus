/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1442
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1442
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
void test(val<unsigned char> var_7, val<unsigned long long int> var_12, val<int> zero, val<bool*> var_13, val<bool*> var_14) {
    *var_13 ^= ((/* implicit */val<bool>) ((val<long long int>) (~(((/* implicit */val<int>) (val<unsigned short>)63)))));
    *var_14 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((((/* implicit */val<bool>) 2101107410U)) ? (var_12) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))))), (((/* implicit */val<unsigned long long int>) var_7))))) ? (((((/* implicit */val<bool>) -1790305)) ? (-1790305) : (-25))) : (((/* implicit */val<int>) (val<unsigned char>)13))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)94;
unsigned long long int var_12 = 11532823405022195276ULL;
int zero = 0;
bool var_13 = (bool)1;
bool var_14 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)0;
    value_mismatch |= var_14 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_12, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
