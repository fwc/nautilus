/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3831
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3831
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
void test(val<bool> var_2, val<unsigned short> var_7, val<int> zero, val<long long int*> var_13, val<bool*> var_14, val<unsigned long long int*> var_15) {
    *var_13 = ((/* implicit */val<long long int>) var_2);
    *var_14 = ((/* implicit */val<bool>) var_7);
    *var_15 = ((/* implicit */val<unsigned long long int>) (val<unsigned short>)54789);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)0;
unsigned short var_7 = (unsigned short)9595;
int zero = 0;
long long int var_13 = -8120385443291508904LL;
bool var_14 = (bool)0;
unsigned long long int var_15 = 3369494734546709598ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 0LL;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != 54789ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
