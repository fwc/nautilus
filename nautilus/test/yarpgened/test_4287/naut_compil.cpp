/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4287
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4287
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
void test(val<bool> var_0, val<int> var_4, val<long long int> var_5, val<long long int> var_9, val<unsigned char> var_11, val<long long int> var_16, val<long long int> var_17, val<int> zero, val<bool*> var_20, val<long long int*> var_21) {
    *var_20 = ((/* implicit */val<bool>) (~(var_16)));
    *var_21 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<long long int>) var_4)) | (var_9)))) ? (max((((/* implicit */val<unsigned int>) ((4381296831084449703LL) >= (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11)))))), (((val<unsigned int>) var_5)))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (((~(((/* implicit */val<int>) var_0)))) == (((/* implicit */val<int>) ((var_17) <= (var_9))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
int var_4 = 1188224320;
long long int var_5 = -5146648770146801074LL;
long long int var_9 = 5118097438185921972LL;
unsigned char var_11 = (unsigned char)92;
long long int var_16 = 2403565718695965894LL;
long long int var_17 = -5881889592050055910LL;
int zero = 0;
bool var_20 = (bool)1;
long long int var_21 = 3710402464379488954LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != 800254542LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, var_9, var_11, var_16, var_17, zero, &var_20, &var_21);
  checksum();
}
