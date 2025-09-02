/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3335
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3335
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
void test(val<unsigned long long int> var_4, val<long long int> var_5, val<unsigned char> var_7, val<unsigned long long int> var_9, val<int> zero, val<long long int*> var_11, val<int*> var_12) {
    *var_11 = ((/* implicit */val<long long int>) var_7);
    *var_12 = ((/* implicit */val<int>) ((max((((/* implicit */val<unsigned long long int>) var_5)), (max((var_4), (((/* implicit */val<unsigned long long int>) -310446529)))))) & (var_9)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17665999778235228183ULL;
long long int var_5 = 2289065475276582728LL;
unsigned char var_7 = (unsigned char)152;
unsigned long long int var_9 = 12390430666467031444ULL;
int zero = 0;
long long int var_11 = 4213836028478514239LL;
int var_12 = -462219787;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 152LL;
    value_mismatch |= var_12 != 677294100;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_7, var_9, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
