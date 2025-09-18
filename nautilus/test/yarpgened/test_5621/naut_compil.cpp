/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5621
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5621
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
void test(val<signed char> var_2, val<signed char> var_3, val<unsigned short> var_4, val<short> var_6, val<signed char> var_7, val<unsigned long long int> var_9, val<signed char> var_10, val<short> var_12, val<short> var_14, val<unsigned long long int> var_16, val<int> zero, val<int*> var_17, val<signed char*> var_18, val<int*> var_19) {
    *var_17 = max((min((((((/* implicit */val<bool>) 18446744073709551598ULL)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) (val<signed char>)0)))), ((~(((/* implicit */val<int>) (val<short>)21473)))))), (((/* implicit */val<int>) ((val<signed char>) min((((/* implicit */val<short>) var_3)), (var_12))))));
    *var_18 = ((/* implicit */val<signed char>) max((min((((/* implicit */val<unsigned long long int>) var_2)), (((((/* implicit */val<bool>) 1538634452918570201ULL)) ? (var_9) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))))))), (((/* implicit */val<unsigned long long int>) var_14))));
    *var_19 = ((/* implicit */val<int>) min(((-(var_16))), (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) var_7)), ((-(((/* implicit */val<int>) var_4)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)41;
signed char var_3 = (signed char)5;
unsigned short var_4 = (unsigned short)64205;
short var_6 = (short)-24856;
signed char var_7 = (signed char)-2;
unsigned long long int var_9 = 6146115342223500912ULL;
signed char var_10 = (signed char)-119;
short var_12 = (short)-173;
short var_14 = (short)-22119;
unsigned long long int var_16 = 5056578023431107151ULL;
int zero = 0;
int var_17 = -89762672;
signed char var_18 = (signed char)90;
int var_19 = -1883523062;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 83;
    value_mismatch |= var_18 != (signed char)-103;
    value_mismatch |= var_19 != 509054385;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_6, var_7, var_9, var_10, var_12, var_14, var_16, zero, &var_17, &var_18, &var_19);
  checksum();
}
