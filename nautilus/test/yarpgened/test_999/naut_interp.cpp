/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 999
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=999
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
void test(val<unsigned long long int> var_4, val<unsigned char> var_5, val<unsigned int> var_6, val<unsigned char> var_7, val<int> zero, val<signed char*> var_13, val<signed char*> var_14) {
    *var_13 = ((/* implicit */val<signed char>) (-(((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<short>)-16177)))))));
    *var_14 = ((/* implicit */val<signed char>) max((*var_14), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned short>) var_5)), ((val<unsigned short>)56314)))) ? (693099457) : (((/* implicit */val<int>) ((val<signed char>) var_7)))))) ? (((/* implicit */val<unsigned long long int>) var_6)) : (var_4))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10438833925351492029ULL;
unsigned char var_5 = (unsigned char)130;
unsigned int var_6 = 253366433U;
unsigned char var_7 = (unsigned char)127;
int zero = 0;
signed char var_13 = (signed char)-89;
signed char var_14 = (signed char)20;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)0;
    value_mismatch |= var_14 != (signed char)20;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_6, var_7, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
