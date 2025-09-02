/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1062
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1062
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
void test(val<long long int> var_3, val<unsigned char> var_5, val<long long int> var_8, val<int> zero, val<unsigned short*> var_10, val<unsigned char*> var_11) {
    *var_10 = ((/* implicit */val<unsigned short>) var_5);
    *var_11 = ((/* implicit */val<unsigned char>) max((((/* implicit */val<long long int>) ((val<bool>) var_8))), (var_3)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5316902737453253289LL;
unsigned char var_5 = (unsigned char)215;
long long int var_8 = -4268938406137219366LL;
int zero = 0;
unsigned short var_10 = (unsigned short)39608;
unsigned char var_11 = (unsigned char)235;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)215;
    value_mismatch |= var_11 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_8, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
