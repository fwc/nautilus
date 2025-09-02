/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8822
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8822
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
void test(val<unsigned short> var_4, val<int> zero, val<unsigned short*> var_10, val<long long int*> var_11, val<long long int*> var_12) {
    *var_10 = ((/* implicit */val<unsigned short>) min((*var_10), (var_4)));
    *var_11 = ((/* implicit */val<long long int>) max((*var_11), (((/* implicit */val<long long int>) var_4))));
    *var_12 = ((/* implicit */val<long long int>) min((*var_12), (((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<unsigned char>)0)) >= (((/* implicit */val<int>) (val<bool>)1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)54808;
int zero = 0;
unsigned short var_10 = (unsigned short)27241;
long long int var_11 = -5564214378940123451LL;
long long int var_12 = 761398421967705494LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)27241;
    value_mismatch |= var_11 != 54808LL;
    value_mismatch |= var_12 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
