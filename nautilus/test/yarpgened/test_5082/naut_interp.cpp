/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5082
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5082
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
void test(val<unsigned long long int> var_0, val<long long int> var_1, val<long long int> var_2, val<int> var_3, val<long long int> var_4, val<bool> var_5, val<short> var_7, val<unsigned int> var_8, val<unsigned long long int> var_10, val<int> zero, val<long long int*> var_11, val<long long int*> var_12, val<unsigned char*> var_13, val<unsigned long long int*> var_14, val<int*> var_15) {
    if (((/* implicit */val<bool>) 1146913719275344378LL))
    {
        *var_11 = ((/* implicit */val<long long int>) max((((((/* implicit */val<bool>) (-(0ULL)))) ? (((((/* implicit */val<bool>) 3478002972U)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)195))) : (18446744073709551615ULL))) : (((/* implicit */val<unsigned long long int>) var_1)))), (((/* implicit */val<unsigned long long int>) max((min((var_1), (-8495876438184380317LL))), (((((/* implicit */val<bool>) 2640333306U)) ? (var_2) : (var_1))))))));
        *var_12 = ((/* implicit */val<long long int>) min((((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) (-(var_1))))))), (min((((((/* implicit */val<bool>) (val<unsigned char>)36)) ? (3745614005U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))))), (((/* implicit */val<unsigned int>) ((val<unsigned char>) 8495876438184380317LL)))))));
        *var_13 = ((/* implicit */val<unsigned char>) max((*var_13), (((/* implicit */val<unsigned char>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)96))) != (((val<long long int>) var_8)))))));
    }

    *var_14 = ((/* implicit */val<unsigned long long int>) max((*var_14), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (((!(((/* implicit */val<bool>) (val<short>)26338)))) ? (((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<unsigned long long int>) var_2)) : (16721115110989985350ULL))) : (((/* implicit */val<unsigned long long int>) 9223372036854775807LL))))) ? ((-(((/* implicit */val<int>) ((val<unsigned char>) var_0))))) : (max((var_3), (((/* implicit */val<int>) var_7)))))))));
    *var_15 = ((/* implicit */val<int>) min((var_2), (var_4)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17860330140429050253ULL;
long long int var_1 = -417750825980030600LL;
long long int var_2 = 2584886771111681215LL;
int var_3 = 1998062087;
long long int var_4 = 1204382749461419522LL;
bool var_5 = (bool)0;
short var_7 = (short)18331;
unsigned int var_8 = 1769967232U;
unsigned long long int var_10 = 2679103260950880545ULL;
int zero = 0;
long long int var_11 = 610074582474976741LL;
long long int var_12 = 117852443296169022LL;
unsigned char var_13 = (unsigned char)112;
unsigned long long int var_14 = 13862036043698871397ULL;
int var_15 = 1547180129;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -417750825980030600LL;
    value_mismatch |= var_12 != 0LL;
    value_mismatch |= var_13 != (unsigned char)112;
    value_mismatch |= var_14 != 18446744073709551475ULL;
    value_mismatch |= var_15 != -1019111934;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_7, var_8, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
