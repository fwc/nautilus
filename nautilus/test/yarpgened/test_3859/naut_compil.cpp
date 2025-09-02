/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3859
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3859
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
void test(val<signed char> var_1, val<signed char> var_2, val<signed char> var_3, val<bool> var_4, val<unsigned short> var_5, val<signed char> var_6, val<long long int> var_8, val<signed char> var_9, val<int> zero, val<bool*> var_10, val<long long int*> var_11, val<signed char*> var_12, val<unsigned short*> var_13) {
    *var_10 += (!(((/* implicit */val<bool>) (~(((/* implicit */val<int>) max((var_9), (var_1))))))));
    *var_11 = ((((/* implicit */val<bool>) min((((var_4) ? (var_8) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_9)))))))) ? (((((/* implicit */val<bool>) (-(7335631423898906378LL)))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_6))))) : (9136822984309877555LL))) : (((((/* implicit */val<bool>) max((-4890230839467390933LL), (((/* implicit */val<long long int>) var_2))))) ? (var_8) : (((/* implicit */val<long long int>) ((var_4) ? (((/* implicit */val<int>) (val<unsigned short>)4123)) : (((/* implicit */val<int>) var_3))))))));
    *var_12 &= ((/* implicit */val<signed char>) ((val<bool>) (-(((/* implicit */val<int>) ((((/* implicit */val<int>) (val<signed char>)-21)) < (((/* implicit */val<int>) (val<unsigned short>)13808))))))));
    *var_13 = ((/* implicit */val<unsigned short>) max((*var_13), (((/* implicit */val<unsigned short>) ((((((/* implicit */val<bool>) (val<signed char>)117)) ? (((/* implicit */val<int>) (val<bool>)0)) : (((/* implicit */val<int>) (((val<bool>)0) && (((/* implicit */val<bool>) -5750754160763035167LL))))))) <= (((/* implicit */val<int>) ((((/* implicit */val<bool>) ((val<unsigned short>) var_9))) || (((/* implicit */val<bool>) ((val<signed char>) var_8)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)59;
signed char var_2 = (signed char)-92;
signed char var_3 = (signed char)94;
bool var_4 = (bool)0;
unsigned short var_5 = (unsigned short)9036;
signed char var_6 = (signed char)76;
long long int var_8 = -2185844141029263714LL;
signed char var_9 = (signed char)102;
int zero = 0;
bool var_10 = (bool)0;
long long int var_11 = 7552946518905948596LL;
signed char var_12 = (signed char)3;
unsigned short var_13 = (unsigned short)38692;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)0;
    value_mismatch |= var_11 != -2185844141029263714LL;
    value_mismatch |= var_12 != (signed char)1;
    value_mismatch |= var_13 != (unsigned short)38692;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_6, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
