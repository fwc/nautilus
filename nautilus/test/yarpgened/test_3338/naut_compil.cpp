/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3338
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3338
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
void test(val<unsigned long long int> var_2, val<long long int> var_4, val<unsigned long long int> var_6, val<unsigned long long int> var_7, val<unsigned long long int> var_10, val<long long int> var_11, val<unsigned long long int> var_13, val<int> zero, val<long long int*> var_14, val<unsigned short*> var_15, val<unsigned char*> var_16) {
    *var_14 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (~(min((((/* implicit */val<unsigned long long int>) (val<unsigned short>)33414)), (var_7)))))) ? (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) (val<signed char>)64))))) : (((max((((/* implicit */val<unsigned long long int>) var_11)), (var_6))) << (((((/* implicit */val<int>) ((val<short>) var_4))) - (15583)))))));
    *var_15 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) max((min((var_13), (var_10))), (((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) 9416770462553637089ULL)))))))) ? (((((/* implicit */val<long long int>) (+(140121390)))) ^ (((val<long long int>) var_2)))) : ((~(var_11)))));
    *var_16 *= ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((val<unsigned char>) (val<signed char>)-105))) && (((/* implicit */val<bool>) var_13))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9333302098667860124ULL;
long long int var_4 = -450943571560481525LL;
unsigned long long int var_6 = 6638600296814288296ULL;
unsigned long long int var_7 = 12511932940771669574ULL;
unsigned long long int var_10 = 17282017300450653373ULL;
long long int var_11 = -3157203759605718719LL;
unsigned long long int var_13 = 2153369504116729955ULL;
int zero = 0;
long long int var_14 = -7845499923008264194LL;
unsigned short var_15 = (unsigned short)26464;
unsigned char var_16 = (unsigned char)21;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 64LL;
    value_mismatch |= var_15 != (unsigned short)26034;
    value_mismatch |= var_16 != (unsigned char)21;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_6, var_7, var_10, var_11, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
