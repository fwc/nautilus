/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5036
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5036
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
void test(val<bool> var_5, val<unsigned long long int> var_9, val<bool> var_11, val<int> zero, val<bool*> var_13, val<short*> var_14) {
    *var_13 = ((/* implicit */val<bool>) ((val<int>) ((((/* implicit */val<bool>) var_9)) ? (((((/* implicit */val<int>) (val<unsigned short>)35017)) | (((/* implicit */val<int>) (val<unsigned short>)34993)))) : (((/* implicit */val<int>) var_5)))));
    *var_14 = ((/* implicit */val<short>) ((var_5) ? (((/* implicit */val<int>) (val<unsigned char>)13)) : (((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_11))))) ? (((/* implicit */val<int>) min((((/* implicit */val<unsigned char>) var_11)), ((val<unsigned char>)222)))) : (((/* implicit */val<int>) (val<unsigned short>)4032))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_5 = (bool)1;
unsigned long long int var_9 = 15854109740149907029ULL;
bool var_11 = (bool)1;
int zero = 0;
bool var_13 = (bool)0;
short var_14 = (short)-16499;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (short)13;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_9, var_11, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
