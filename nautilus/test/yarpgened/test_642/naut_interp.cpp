/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 642
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=642
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
void test(val<unsigned long long int> var_0, val<short> var_1, val<unsigned int> var_4, val<unsigned long long int> var_5, val<unsigned long long int> var_6, val<long long int> var_7, val<unsigned char> var_9, val<unsigned long long int> var_10, val<int> zero, val<long long int*> var_11, val<unsigned long long int*> var_12, val<short*> var_13, val<int*> var_14) {
    *var_11 = ((/* implicit */val<long long int>) (~(((val<unsigned long long int>) ((((/* implicit */val<bool>) 4611686018427387903LL)) ? (((/* implicit */val<int>) var_1)) : (-825752322))))));
    *var_12 |= ((/* implicit */val<unsigned long long int>) min(((((!(((/* implicit */val<bool>) var_7)))) && (((/* implicit */val<bool>) var_10)))), (((((/* implicit */val<bool>) max((var_0), (((/* implicit */val<unsigned long long int>) -4611686018427387904LL))))) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) (val<unsigned short>)37788)) : (((/* implicit */val<int>) var_1)))))))));
    *var_13 = ((/* implicit */val<short>) var_4);
    *var_14 &= ((/* implicit */val<int>) ((val<short>) ((var_5) == (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<short>) var_9)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7296184860973883003ULL;
short var_1 = (short)17698;
unsigned int var_4 = 1970689095U;
unsigned long long int var_5 = 366431250408310301ULL;
unsigned long long int var_6 = 9584876177340367942ULL;
long long int var_7 = 2069848024588837633LL;
unsigned char var_9 = (unsigned char)242;
unsigned long long int var_10 = 1338196076041066530ULL;
int zero = 0;
long long int var_11 = 2413376473813016040LL;
unsigned long long int var_12 = 5265441655112916907ULL;
short var_13 = (short)5327;
int var_14 = 1037089579;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -17699LL;
    value_mismatch |= var_12 != 5265441655112916907ULL;
    value_mismatch |= var_13 != (short)21575;
    value_mismatch |= var_14 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_5, var_6, var_7, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
}
