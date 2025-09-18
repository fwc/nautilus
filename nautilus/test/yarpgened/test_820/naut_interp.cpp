/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 820
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=820
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
void test(val<unsigned short> var_2, val<int> var_5, val<int> var_6, val<unsigned short> var_7, val<unsigned long long int> var_9, val<unsigned long long int> var_13, val<unsigned short> var_14, val<int> var_16, val<int> var_17, val<int> zero, val<unsigned short*> var_19, val<int*> var_20, val<unsigned long long int*> var_21, val<int*> var_22) {
    *var_19 = var_7;
    *var_20 = (-(((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (var_6) : (((/* implicit */val<int>) var_2)))))))));
    *var_21 = ((((/* implicit */val<bool>) ((val<int>) ((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<int>) var_14)) : (((/* implicit */val<int>) var_2)))))) ? (var_9) : (((/* implicit */val<unsigned long long int>) var_17)));
    *var_22 = ((/* implicit */val<int>) ((val<unsigned short>) var_16));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)57686;
int var_5 = -1102961043;
int var_6 = 1085946629;
unsigned short var_7 = (unsigned short)23552;
unsigned long long int var_9 = 10497932136300936991ULL;
unsigned long long int var_13 = 12932697785192074498ULL;
unsigned short var_14 = (unsigned short)43673;
int var_16 = 672795280;
int var_17 = -63831629;
int zero = 0;
unsigned short var_19 = (unsigned short)50344;
int var_20 = 650501905;
unsigned long long int var_21 = 10626588265993047173ULL;
int var_22 = -2133964875;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)23552;
    value_mismatch |= var_20 != 0;
    value_mismatch |= var_21 != 10497932136300936991ULL;
    value_mismatch |= var_22 != 2704;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_6, var_7, var_9, var_13, var_14, var_16, var_17, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
