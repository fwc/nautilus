/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2927
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2927
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
void test(val<unsigned short> var_1, val<short> var_2, val<bool> var_3, val<short> var_4, val<bool> var_6, val<unsigned long long int> var_7, val<short> var_8, val<int> var_9, val<int> var_10, val<int> var_11, val<unsigned int> var_12, val<unsigned char> var_13, val<int> zero, val<unsigned long long int*> var_14, val<int*> var_15, val<unsigned long long int*> var_16, val<int*> var_17) {
    *var_14 *= ((/* implicit */val<unsigned long long int>) ((val<long long int>) var_8));
    *var_15 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) % (var_7)))) ? (((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))) : (var_12))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) var_13)) : (var_9))))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((val<short>) var_11))))))) : (max((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_6))))), (((var_3) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))) : (var_12)))))));
    *var_16 = ((/* implicit */val<unsigned long long int>) var_1);
    *var_17 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((val<unsigned short>) var_6))) ? (((((/* implicit */val<bool>) ((var_3) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))) : (var_7)))) ? (((((/* implicit */val<bool>) (val<unsigned char>)150)) ? (144115179485921280LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)0))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))))) : (((/* implicit */val<long long int>) max((((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_4)))), (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_2)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21279;
short var_2 = (short)10873;
bool var_3 = (bool)0;
short var_4 = (short)29258;
bool var_6 = (bool)0;
unsigned long long int var_7 = 8086250204967298312ULL;
short var_8 = (short)7407;
int var_9 = 553813063;
int var_10 = -1267695692;
int var_11 = 1521098948;
unsigned int var_12 = 1518711884U;
unsigned char var_13 = (unsigned char)174;
int zero = 0;
unsigned long long int var_14 = 9745146331673408699ULL;
int var_15 = 341609942;
unsigned long long int var_16 = 7940603853576636086ULL;
int var_17 = -1596384081;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 189318279462760085ULL;
    value_mismatch |= var_15 != 0;
    value_mismatch |= var_16 != 21279ULL;
    value_mismatch |= var_17 != 29258;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
