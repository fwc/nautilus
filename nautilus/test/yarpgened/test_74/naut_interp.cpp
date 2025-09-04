/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 74
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=74
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
void test(val<unsigned char> var_7, val<int> var_8, val<int> zero, val<unsigned long long int*> var_10, val<int*> var_11) {
    *var_10 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (~(574097076U)))) ? (((/* implicit */val<int>) (val<unsigned char>)202)) : (((((((/* implicit */val<int>) (val<short>)26488)) % (((/* implicit */val<int>) (val<short>)-26480)))) / (var_8)))));
    *var_11 = ((/* implicit */val<int>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)21;
int var_8 = -1537062961;
int zero = 0;
unsigned long long int var_10 = 4664599214289454017ULL;
int var_11 = 840384637;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 202ULL;
    value_mismatch |= var_11 != 21;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_8, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
