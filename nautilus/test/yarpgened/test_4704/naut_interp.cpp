/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4704
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4704
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
void test(val<unsigned long long int> var_0, val<unsigned char> var_8, val<bool> var_10, val<int> zero, val<int*> var_11, val<signed char*> var_12) {
    *var_11 = (+(((/* implicit */val<int>) var_10)));
    *var_12 = ((/* implicit */val<signed char>) (((+(var_0))) != (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_8)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12508232139905120610ULL;
unsigned char var_8 = (unsigned char)242;
bool var_10 = (bool)0;
int zero = 0;
int var_11 = -301910196;
signed char var_12 = (signed char)24;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 0;
    value_mismatch |= var_12 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_8, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
