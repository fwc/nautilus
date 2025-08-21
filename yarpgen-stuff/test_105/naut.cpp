/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 105
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=105
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
void test(val<short> var_1, val<unsigned long long int> var_3, val<signed char> var_6, val<bool> var_7, val<long long int> var_10, val<unsigned int> var_13, val<signed char> var_15, val<int> zero, val<unsigned long long int*> var_16, val<bool*> var_17, val<long long int*> var_18, val<int*> var_19) {
    *var_16 = ((/* implicit */val<unsigned long long int>) var_7);
    *var_17 = ((/* implicit */val<bool>) min((*var_17), (((((/* implicit */val<int>) max((var_1), (((/* implicit */val<short>) (!(((/* implicit */val<bool>) var_6)))))))) <= ((-(max((((/* implicit */val<int>) var_1)), (-464614285)))))))));
    *var_18 = ((/* implicit */val<long long int>) var_13);
    *var_19 = ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned short>)50154)) && (((/* implicit */val<bool>) (val<unsigned char>)56)))))) >= (min((var_3), (((/* implicit */val<unsigned long long int>) var_10)))))))) <= (max((((/* implicit */val<long long int>) min((var_7), (var_7)))), (max((((/* implicit */val<long long int>) var_15)), (-2724923573330762949LL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10792;
unsigned long long int var_3 = 11093689263817624943ULL;
signed char var_6 = (signed char)-6;
bool var_7 = (bool)1;
long long int var_10 = -6761132602235713523LL;
unsigned int var_13 = 2477902226U;
signed char var_15 = (signed char)-89;
int zero = 0;
unsigned long long int var_16 = 15816084744417505708ULL;
bool var_17 = (bool)1;
long long int var_18 = -5778181734491691565LL;
int var_19 = 1896334999;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 1ULL;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != 2477902226LL;
    value_mismatch |= var_19 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_6, var_7, var_10, var_13, var_15, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
