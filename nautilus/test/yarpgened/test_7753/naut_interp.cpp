/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7753
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7753
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
void test(val<long long int> var_0, val<unsigned int> var_3, val<short> var_6, val<int> zero, val<long long int*> var_10, val<unsigned char*> var_11, val<long long int*> var_12) {
    *var_10 = ((/* implicit */val<long long int>) min((*var_10), (((/* implicit */val<long long int>) var_6))));
    *var_11 = ((/* implicit */val<unsigned char>) min((*var_11), (((/* implicit */val<unsigned char>) var_0))));
    *var_12 = ((/* implicit */val<long long int>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8242314999409487443LL;
unsigned int var_3 = 3601683656U;
short var_6 = (short)12664;
int zero = 0;
long long int var_10 = -1714892264117589009LL;
unsigned char var_11 = (unsigned char)3;
long long int var_12 = 2402709696747164467LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -1714892264117589009LL;
    value_mismatch |= var_11 != (unsigned char)3;
    value_mismatch |= var_12 != 3601683656LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_6, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
