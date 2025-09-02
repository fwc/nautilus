/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8382
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8382
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
void test(val<unsigned char> var_0, val<unsigned long long int> var_3, val<long long int> var_9, val<int> zero, val<bool*> var_11, val<bool*> var_12, val<unsigned long long int*> var_13) {
    *var_11 ^= ((var_9) == (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)255))));
    *var_12 = ((/* implicit */val<bool>) var_0);
    *var_13 &= ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)230;
unsigned long long int var_3 = 6898660837253976923ULL;
long long int var_9 = 2332537926145371361LL;
int zero = 0;
bool var_11 = (bool)0;
bool var_12 = (bool)1;
unsigned long long int var_13 = 4148269399336770766ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)0;
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_9, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
