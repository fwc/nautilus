/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 582
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=582
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
void test(val<unsigned short> var_2, val<unsigned short> var_7, val<int> zero, val<unsigned short*> var_10, val<long long int*> var_11) {
    *var_10 = min((var_2), (var_7));
    *var_11 = ((/* implicit */val<long long int>) ((val<signed char>) (+((-(((/* implicit */val<int>) (val<signed char>)-69)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)12332;
unsigned short var_7 = (unsigned short)1702;
int zero = 0;
unsigned short var_10 = (unsigned short)20750;
long long int var_11 = 3909629957333875166LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)1702;
    value_mismatch |= var_11 != 69LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
