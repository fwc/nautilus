/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9194
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9194
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
void test(val<bool> var_0, val<long long int> var_12, val<short> var_15, val<int> zero, val<bool*> var_18, val<signed char*> var_19) {
    *var_18 = ((((((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)56))) ^ (-8648298412556221259LL)))) ? (((/* implicit */val<long long int>) (-(((/* implicit */val<int>) (val<bool>)1))))) : ((((val<bool>)1) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_15))) : (var_12))))) > (((/* implicit */val<long long int>) min((((/* implicit */val<int>) var_0)), (((((/* implicit */val<int>) (val<short>)(-32767 - 1))) & (((/* implicit */val<int>) (val<unsigned char>)14))))))));
    *var_19 = ((/* implicit */val<signed char>) (val<unsigned short>)8188);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
long long int var_12 = -8024908442635996865LL;
short var_15 = (short)9990;
int zero = 0;
bool var_18 = (bool)1;
signed char var_19 = (signed char)-11;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)0;
    value_mismatch |= var_19 != (signed char)-4;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_12, var_15, zero, &var_18, &var_19);
  checksum();
}
