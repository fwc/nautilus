/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6029
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6029
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
void test(val<bool> var_8, val<int> zero, val<unsigned short*> var_13, val<unsigned char*> var_14, val<long long int*> var_15) {
    *var_13 *= ((/* implicit */val<unsigned short>) ((((/* implicit */val<long long int>) (((-(4095))) - (((4095) - (-4096)))))) == (-8240331092564068273LL)));
    *var_14 += ((/* implicit */val<unsigned char>) (!(var_8)));
    *var_15 = ((/* implicit */val<long long int>) -4095);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_8 = (bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)45454;
unsigned char var_14 = (unsigned char)144;
long long int var_15 = -1956643195387325365LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)0;
    value_mismatch |= var_14 != (unsigned char)145;
    value_mismatch |= var_15 != -4095LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, zero, &var_13, &var_14, &var_15);
  checksum();
}
