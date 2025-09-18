/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9118
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9118
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
void test(val<long long int> var_10, val<unsigned long long int> var_12, val<unsigned char> var_15, val<int> zero, val<long long int*> var_19, val<unsigned short*> var_20) {
    *var_19 = ((/* implicit */val<long long int>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 1283297641U)) ? (((/* implicit */val<long long int>) -1943759404)) : (9007199187632128LL)))) > (((val<unsigned long long int>) 9007199187632131LL))));
    *var_20 &= ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) min((((((/* implicit */val<bool>) var_15)) ? (var_12) : (((/* implicit */val<unsigned long long int>) 9007199187632120LL)))), (((/* implicit */val<unsigned long long int>) var_10)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 8520848529733259066LL;
unsigned long long int var_12 = 12005200064220763938ULL;
unsigned char var_15 = (unsigned char)60;
int zero = 0;
long long int var_19 = -7706205831715070807LL;
unsigned short var_20 = (unsigned short)49177;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1LL;
    value_mismatch |= var_20 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_12, var_15, zero, &var_19, &var_20);
  checksum();
}
