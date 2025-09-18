/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6647
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6647
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
void test(val<unsigned short> var_4, val<short> var_5, val<long long int> var_6, val<signed char> var_7, val<unsigned long long int> var_9, val<unsigned long long int> var_12, val<int> zero, val<unsigned short*> var_15, val<unsigned short*> var_16, val<unsigned short*> var_17) {
    *var_15 = ((/* implicit */val<unsigned short>) min((*var_15), (((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) min(((-(((/* implicit */val<int>) (val<short>)8502)))), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) 16653574441774496608ULL)))))))))))));
    *var_16 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((var_5), (((/* implicit */val<short>) var_7))))) ? (((val<unsigned long long int>) 2327928841U)) : (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))) : (var_9)))))) ? (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) ((((/* implicit */val<int>) (val<signed char>)0)) == (((/* implicit */val<int>) (val<unsigned short>)53489))))), ((~(((/* implicit */val<int>) (val<signed char>)-1))))))) : (((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<unsigned long long int>) var_6)) : (559419285096834466ULL)))));
    *var_17 = ((/* implicit */val<unsigned short>) min((min((((/* implicit */val<int>) (val<signed char>)11)), (((((/* implicit */val<bool>) (val<signed char>)-125)) ? (((/* implicit */val<int>) (val<unsigned short>)53503)) : (((/* implicit */val<int>) (val<unsigned char>)11)))))), (((/* implicit */val<int>) (val<signed char>)-16))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)56956;
short var_5 = (short)27730;
long long int var_6 = -4406434144106961548LL;
signed char var_7 = (signed char)-1;
unsigned long long int var_9 = 6063842410939527238ULL;
unsigned long long int var_12 = 580741023662795748ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)15675;
unsigned short var_16 = (unsigned short)14276;
unsigned short var_17 = (unsigned short)36757;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)0;
    value_mismatch |= var_16 != (unsigned short)0;
    value_mismatch |= var_17 != (unsigned short)65520;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_6, var_7, var_9, var_12, zero, &var_15, &var_16, &var_17);
  checksum();
}
