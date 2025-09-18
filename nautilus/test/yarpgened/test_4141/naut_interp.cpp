/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4141
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4141
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
void test(val<long long int> var_3, val<unsigned char> var_9, val<unsigned short> var_11, val<int> zero, val<unsigned char*> var_20, val<unsigned char*> var_21) {
    *var_20 = ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) 8917692492648846853ULL))));
    *var_21 = ((/* implicit */val<unsigned char>) (~(((((/* implicit */val<bool>) max((((/* implicit */val<long long int>) (val<short>)128)), (var_3)))) ? ((-(((/* implicit */val<int>) var_9)))) : (((/* implicit */val<int>) var_11))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3473474697223475039LL;
unsigned char var_9 = (unsigned char)214;
unsigned short var_11 = (unsigned short)62571;
int zero = 0;
unsigned char var_20 = (unsigned char)109;
unsigned char var_21 = (unsigned char)65;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)0;
    value_mismatch |= var_21 != (unsigned char)213;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_9, var_11, zero, &var_20, &var_21);
  checksum();
}
