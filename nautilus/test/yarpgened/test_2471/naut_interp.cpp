/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2471
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2471
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
void test(val<unsigned short> var_2, val<short> var_3, val<bool> var_4, val<unsigned char> var_9, val<unsigned short> var_12, val<long long int> var_15, val<signed char> var_16, val<unsigned long long int> var_17, val<int> zero, val<bool*> var_19, val<unsigned short*> var_20, val<signed char*> var_21, val<unsigned int*> var_22) {
    *var_19 = ((/* implicit */val<bool>) min((*var_19), (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (~(((((/* implicit */val<bool>) (val<unsigned char>)14)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_9))))))) ? ((-(((((/* implicit */val<bool>) (val<signed char>)-115)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)15))) : (var_15))))) : (max((((((/* implicit */val<bool>) (val<unsigned char>)255)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))) : (var_15))), (((/* implicit */val<long long int>) var_9)))))))));
    *var_20 = ((/* implicit */val<unsigned short>) min((*var_20), (((/* implicit */val<unsigned short>) min((((/* implicit */val<int>) var_12)), ((~(((((/* implicit */val<int>) (val<bool>)1)) >> (((((/* implicit */val<int>) (val<short>)27526)) - (27508))))))))))));
    *var_21 = ((/* implicit */val<signed char>) max((min((((var_17) + (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)87))))), (((/* implicit */val<unsigned long long int>) -8495477461043455516LL)))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) (val<short>)-8684)) : (((/* implicit */val<int>) (val<unsigned char>)178))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_16))) : (((((/* implicit */val<bool>) var_12)) ? (-7507719801764412522LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)2047))))))))));
    *var_22 = ((/* implicit */val<unsigned int>) 2147483625);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)5307;
short var_3 = (short)-23622;
bool var_4 = (bool)0;
unsigned char var_9 = (unsigned char)193;
unsigned short var_12 = (unsigned short)38979;
long long int var_15 = -4912503024067053262LL;
signed char var_16 = (signed char)40;
unsigned long long int var_17 = 16559450081497052833ULL;
int zero = 0;
bool var_19 = (bool)1;
unsigned short var_20 = (unsigned short)37508;
signed char var_21 = (signed char)120;
unsigned int var_22 = 67488866U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (unsigned short)37508;
    value_mismatch |= var_21 != (signed char)-28;
    value_mismatch |= var_22 != 2147483625U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_9, var_12, var_15, var_16, var_17, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
