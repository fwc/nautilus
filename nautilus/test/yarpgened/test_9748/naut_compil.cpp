/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9748
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9748
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
void test(val<unsigned short> var_0, val<int> var_5, val<int> var_6, val<int> var_7, val<unsigned short> var_8, val<unsigned long long int> var_9, val<long long int> var_10, val<unsigned long long int> var_11, val<signed char> var_12, val<long long int> var_14, val<int> var_15, val<int> zero, val<short*> var_17, val<signed char*> var_18, val<unsigned short*> var_19, val<unsigned char*> var_20, val<bool*> var_21) {
    *var_17 = ((/* implicit */val<short>) ((val<signed char>) var_14));
    *var_18 = ((/* implicit */val<signed char>) min((((/* implicit */val<long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_5)) || (((/* implicit */val<bool>) var_6)))))) < (var_14)))), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))) : (var_9)))) ? (((/* implicit */val<long long int>) ((val<int>) (val<unsigned short>)19765))) : (((val<long long int>) var_7))))));
    *var_19 = (val<unsigned short>)19761;
    *var_20 = ((/* implicit */val<unsigned char>) min((*var_20), (((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (~((~(((/* implicit */val<int>) (val<signed char>)14))))))) ? (max((((/* implicit */val<unsigned long long int>) ((val<unsigned int>) var_5))), (((var_11) & (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-37))))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))))))));
    *var_21 = ((/* implicit */val<bool>) ((((((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)25203))) / (36026597995708416LL))) / (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_12)) : (var_15)))))) * (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<bool>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned long long int>) var_10)) : (var_9))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8056;
int var_5 = -658375558;
int var_6 = -2035767695;
int var_7 = -1981341216;
unsigned short var_8 = (unsigned short)32813;
unsigned long long int var_9 = 5164906993190159756ULL;
long long int var_10 = -3417073801718780494LL;
unsigned long long int var_11 = 13718395060852321535ULL;
signed char var_12 = (signed char)-81;
long long int var_14 = 2682505982468693868LL;
int var_15 = -1137072139;
int zero = 0;
short var_17 = (short)-23440;
signed char var_18 = (signed char)88;
unsigned short var_19 = (unsigned short)32520;
unsigned char var_20 = (unsigned char)174;
bool var_21 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)108;
    value_mismatch |= var_18 != (signed char)1;
    value_mismatch |= var_19 != (unsigned short)19761;
    value_mismatch |= var_20 != (unsigned char)174;
    value_mismatch |= var_21 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_14, var_15, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
