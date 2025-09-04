/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7699
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7699
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
void test(val<unsigned int> var_3, val<unsigned int> var_7, val<long long int> var_10, val<unsigned char> var_12, val<unsigned long long int> var_13, val<int> zero, val<long long int*> var_15, val<short*> var_16, val<unsigned short*> var_17, val<unsigned long long int*> var_18) {
    *var_15 = ((/* implicit */val<long long int>) var_7);
    *var_16 = ((/* implicit */val<short>) min((*var_16), (((/* implicit */val<short>) (!(((/* implicit */val<bool>) (-(min((((/* implicit */val<unsigned long long int>) var_3)), (var_13)))))))))));
    *var_17 = ((/* implicit */val<unsigned short>) max((((/* implicit */val<long long int>) var_7)), ((-((-(var_10)))))));
    *var_18 += ((/* implicit */val<unsigned long long int>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2194503133U;
unsigned int var_7 = 1603733216U;
long long int var_10 = -4751346019261974938LL;
unsigned char var_12 = (unsigned char)226;
unsigned long long int var_13 = 13540338610897962335ULL;
int zero = 0;
long long int var_15 = -4793176126010189095LL;
short var_16 = (short)20103;
unsigned short var_17 = (unsigned short)41015;
unsigned long long int var_18 = 12606589112971362720ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 1603733216LL;
    value_mismatch |= var_16 != (short)0;
    value_mismatch |= var_17 != (unsigned short)1760;
    value_mismatch |= var_18 != 12606589112971362946ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, var_10, var_12, var_13, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
