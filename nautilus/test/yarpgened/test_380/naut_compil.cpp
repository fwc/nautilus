/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 380
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=380
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
void test(val<unsigned long long int> var_7, val<bool> var_14, val<int> zero, val<int*> var_16, val<unsigned char*> var_17, val<unsigned long long int*> var_18) {
    *var_16 = ((/* implicit */val<int>) var_14);
    *var_17 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_7)) || (((/* implicit */val<bool>) min((((((/* implicit */val<bool>) 16395254519059035881ULL)) ? (16395254519059035881ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)22823))))), (((/* implicit */val<unsigned long long int>) -1171366483)))))));
    *var_18 = ((/* implicit */val<unsigned long long int>) max((-4809377871410631250LL), (((/* implicit */val<long long int>) (+(1171366482))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 10555796633901769924ULL;
bool var_14 = (bool)1;
int zero = 0;
int var_16 = 2003805654;
unsigned char var_17 = (unsigned char)89;
unsigned long long int var_18 = 13795016045741196847ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 1;
    value_mismatch |= var_17 != (unsigned char)1;
    value_mismatch |= var_18 != 1171366482ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_14, zero, &var_16, &var_17, &var_18);
  checksum();
}
