/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6451
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6451
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
void test(val<unsigned char> var_2, val<unsigned long long int> var_3, val<long long int> var_4, val<unsigned short> var_7, val<int> zero, val<long long int*> var_13, val<unsigned short*> var_14) {
    *var_13 = var_4;
    *var_14 = ((/* implicit */val<unsigned short>) (((-(var_3))) / ((~(((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))) : (var_3)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)113;
unsigned long long int var_3 = 9402134225009159392ULL;
long long int var_4 = -8413877048068578391LL;
unsigned short var_7 = (unsigned short)31287;
int zero = 0;
long long int var_13 = 3017038055542495343LL;
unsigned short var_14 = (unsigned short)9563;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != -8413877048068578391LL;
    value_mismatch |= var_14 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_7, zero, &var_13, &var_14);
  checksum();
}
