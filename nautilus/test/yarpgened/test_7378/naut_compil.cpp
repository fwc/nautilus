/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7378
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7378
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
void test(val<int> var_1, val<long long int> var_6, val<unsigned char> var_8, val<unsigned char> var_13, val<short> var_15, val<unsigned int> var_16, val<int> zero, val<short*> var_18, val<unsigned int*> var_19) {
    *var_18 = ((/* implicit */val<short>) (-((+(((((/* implicit */val<unsigned long long int>) var_6)) - (4498394405742753738ULL)))))));
    *var_19 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))) : (min((((((/* implicit */val<bool>) var_1)) ? (16716774443595320018ULL) : (13948349667966797868ULL))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_15))) : (1432425224U))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -429536533;
long long int var_6 = -3938193668479034582LL;
unsigned char var_8 = (unsigned char)223;
unsigned char var_13 = (unsigned char)150;
short var_15 = (short)-23274;
unsigned int var_16 = 3119418299U;
int zero = 0;
short var_18 = (short)-19706;
unsigned int var_19 = 2340105123U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)23712;
    value_mismatch |= var_19 != 223U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_8, var_13, var_15, var_16, zero, &var_18, &var_19);
  checksum();
}
