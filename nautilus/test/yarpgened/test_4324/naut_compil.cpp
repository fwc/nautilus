/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4324
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4324
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
void test(val<unsigned int> var_7, val<long long int> var_13, val<int> zero, val<bool*> var_18, val<int*> var_19) {
    *var_18 = (((+(((((/* implicit */val<int>) (val<unsigned char>)147)) % (((/* implicit */val<int>) (val<unsigned char>)147)))))) != (((/* implicit */val<int>) (val<unsigned char>)135)));
    *var_19 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<unsigned char>) (val<unsigned char>)154)))) : (var_7)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 742813431U;
long long int var_13 = -3463948179030046316LL;
int zero = 0;
bool var_18 = (bool)0;
int var_19 = 1107646193;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != 154;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_13, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
