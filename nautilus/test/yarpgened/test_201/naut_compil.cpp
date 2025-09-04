/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 201
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=201
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
void test(val<bool> var_2, val<unsigned long long int> var_5, val<unsigned long long int> var_9, val<int> var_10, val<unsigned long long int> var_12, val<long long int> var_14, val<int> zero, val<unsigned char*> var_20, val<long long int*> var_21, val<unsigned long long int*> var_22) {
    *var_20 = ((/* implicit */val<unsigned char>) ((var_12) << (((/* implicit */val<int>) var_2))));
    *var_21 = ((/* implicit */val<long long int>) max(((~(((((/* implicit */val<bool>) (-9223372036854775807LL - 1LL))) ? (0ULL) : (1090708931569300396ULL))))), (((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) (+(var_5)))))))));
    *var_22 |= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (+((+(((/* implicit */val<int>) var_2))))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned short>) (val<signed char>)0)), ((val<unsigned short>)63060)))) ? (((/* implicit */val<int>) ((val<bool>) var_9))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_10)))))))) : (var_14)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)1;
unsigned long long int var_5 = 3071015314088064602ULL;
unsigned long long int var_9 = 5481788585976463558ULL;
int var_10 = -430131512;
unsigned long long int var_12 = 18085882627533690382ULL;
long long int var_14 = -782221326738011645LL;
int zero = 0;
unsigned char var_20 = (unsigned char)177;
long long int var_21 = -9088618951284156513LL;
unsigned long long int var_22 = 17258434178472413882ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)28;
    value_mismatch |= var_21 != -1LL;
    value_mismatch |= var_22 != 17258434178472413883ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_9, var_10, var_12, var_14, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
