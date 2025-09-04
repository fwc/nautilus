/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4433
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4433
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
void test(val<unsigned char> var_1, val<unsigned char> var_10, val<int> var_13, val<unsigned char> var_15, val<int> zero, val<short*> var_18, val<unsigned long long int*> var_19) {
    *var_18 ^= ((/* implicit */val<short>) (+(((((/* implicit */val<unsigned int>) (~(var_13)))) % (((val<unsigned int>) var_10))))));
    *var_19 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_15)) < (((((/* implicit */val<bool>) ((val<unsigned char>) var_1))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned char>)107))))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) 1936652327U)) || (((/* implicit */val<bool>) (val<unsigned char>)107)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)109;
unsigned char var_10 = (unsigned char)61;
int var_13 = -292980747;
unsigned char var_15 = (unsigned char)196;
int zero = 0;
short var_18 = (short)-16030;
unsigned long long int var_19 = 15721502285949097499ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)-16031;
    value_mismatch |= var_19 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_10, var_13, var_15, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
