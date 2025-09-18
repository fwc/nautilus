/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7706
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7706
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
void test(val<unsigned int> var_0, val<unsigned short> var_4, val<unsigned char> var_10, val<signed char> var_12, val<bool> var_13, val<int> zero, val<long long int*> var_15, val<unsigned long long int*> var_16, val<bool*> var_17) {
    *var_15 = ((/* implicit */val<long long int>) ((val<int>) ((val<unsigned short>) ((((/* implicit */val<int>) var_13)) * (((/* implicit */val<int>) (val<unsigned short>)65532))))));
    *var_16 &= ((/* implicit */val<unsigned long long int>) var_10);
    *var_17 = ((/* implicit */val<bool>) (((+(((((/* implicit */val<bool>) 0ULL)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_12))) : (var_0))))) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3205285916U;
unsigned short var_4 = (unsigned short)27394;
unsigned char var_10 = (unsigned char)83;
signed char var_12 = (signed char)84;
bool var_13 = (bool)0;
int zero = 0;
long long int var_15 = 2813724335679717990LL;
unsigned long long int var_16 = 8986483927229191685ULL;
bool var_17 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 0LL;
    value_mismatch |= var_16 != 1ULL;
    value_mismatch |= var_17 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_10, var_12, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
}
