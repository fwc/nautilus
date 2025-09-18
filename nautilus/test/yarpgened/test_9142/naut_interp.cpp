/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9142
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9142
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
void test(val<unsigned char> var_0, val<unsigned char> var_3, val<bool> var_5, val<unsigned char> var_7, val<unsigned char> var_8, val<unsigned char> var_9, val<unsigned char> var_12, val<unsigned char> var_17, val<unsigned char> var_19, val<int> zero, val<long long int*> var_20, val<int*> var_21, val<unsigned char*> var_22) {
    *var_20 = ((((/* implicit */val<bool>) ((((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_0)))) << (((((/* implicit */val<int>) max((((/* implicit */val<short>) var_7)), ((val<short>)-5)))) - (25)))))) ? (((((/* implicit */val<bool>) 4294967295U)) ? (((((/* implicit */val<bool>) (val<unsigned char>)133)) ? (4LL) : (((/* implicit */val<long long int>) 805306368)))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) max(((val<unsigned char>)88), (var_8))))));
    *var_21 = ((/* implicit */val<int>) min((*var_21), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) (val<unsigned char>)243)) : ((+(((/* implicit */val<int>) (val<short>)-13))))))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_17))))) : (((/* implicit */val<int>) (!((!(((/* implicit */val<bool>) (val<short>)26)))))))))));
    *var_22 = ((/* implicit */val<unsigned char>) ((((((/* implicit */val<int>) var_7)) >= (((/* implicit */val<int>) var_5)))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) min((var_9), (var_19))))))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned char>)0)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)90;
unsigned char var_3 = (unsigned char)15;
bool var_5 = (bool)0;
unsigned char var_7 = (unsigned char)44;
unsigned char var_8 = (unsigned char)157;
unsigned char var_9 = (unsigned char)10;
unsigned char var_12 = (unsigned char)184;
unsigned char var_17 = (unsigned char)140;
unsigned char var_19 = (unsigned char)35;
int zero = 0;
long long int var_20 = -2823753533264365348LL;
int var_21 = 568221874;
unsigned char var_22 = (unsigned char)206;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 4LL;
    value_mismatch |= var_21 != 0;
    value_mismatch |= var_22 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_7, var_8, var_9, var_12, var_17, var_19, zero, &var_20, &var_21, &var_22);
  checksum();
}
