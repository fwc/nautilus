/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9896
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9896
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
void test(val<int> var_1, val<unsigned int> var_2, val<unsigned short> var_5, val<unsigned short> var_6, val<unsigned long long int> var_7, val<int> var_8, val<unsigned long long int> var_9, val<int> zero, val<unsigned long long int*> var_10, val<unsigned short*> var_11, val<unsigned int*> var_12) {
    *var_10 *= var_9;
    *var_11 &= ((/* implicit */val<unsigned short>) max((((/* implicit */val<unsigned long long int>) var_5)), (((((/* implicit */val<bool>) 0LL)) ? (23ULL) : (((/* implicit */val<unsigned long long int>) -7296452647954525619LL))))));
    *var_12 *= min((((/* implicit */val<unsigned int>) (+((+(((/* implicit */val<int>) (val<unsigned short>)29003))))))), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))) : (var_9)))) ? (((((/* implicit */val<bool>) var_1)) ? (var_2) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((var_8) > (var_1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1746911023;
unsigned int var_2 = 974905135U;
unsigned short var_5 = (unsigned short)988;
unsigned short var_6 = (unsigned short)57598;
unsigned long long int var_7 = 10596966851524628246ULL;
int var_8 = 1616694500;
unsigned long long int var_9 = 15534472500277334042ULL;
int zero = 0;
unsigned long long int var_10 = 15864589678542402331ULL;
unsigned short var_11 = (unsigned short)21459;
unsigned int var_12 = 2006311721U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 7084991101745176766ULL;
    value_mismatch |= var_11 != (unsigned short)21057;
    value_mismatch |= var_12 != 841917955U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
}
