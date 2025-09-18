/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 186
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=186
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
void test(val<int> var_0, val<long long int> var_2, val<unsigned long long int> var_3, val<unsigned char> var_5, val<unsigned char> var_7, val<long long int> var_8, val<long long int> var_9, val<bool> var_11, val<int> zero, val<short*> var_12, val<unsigned int*> var_13) {
    *var_12 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((((/* implicit */val<bool>) var_7)) ? (var_2) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)-17575))))) / (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) (val<signed char>)117)) : (((/* implicit */val<int>) var_5)))))))) ? (((/* implicit */val<int>) ((17592186044415LL) <= (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)4080)))))) : (((/* implicit */val<int>) ((((var_11) ? (-1) : (var_0))) == (((((/* implicit */val<int>) (val<signed char>)117)) * (23))))))));
    *var_13 = ((/* implicit */val<unsigned int>) min((*var_13), (((/* implicit */val<unsigned int>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 9223372036854775807LL)) ? (-17592186044416LL) : (9223372036854775807LL)))) & (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (var_8) : (((/* implicit */val<long long int>) var_0))))) ? (((((/* implicit */val<bool>) (val<short>)4080)) ? (var_3) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)21664))))) : (((/* implicit */val<unsigned long long int>) ((var_9) - (-5552871726790220120LL)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1903090098;
long long int var_2 = -3933973928244839717LL;
unsigned long long int var_3 = 11134472146331513157ULL;
unsigned char var_5 = (unsigned char)52;
unsigned char var_7 = (unsigned char)154;
long long int var_8 = 7704926674415361278LL;
long long int var_9 = -5123656027278047765LL;
bool var_11 = (bool)1;
int zero = 0;
short var_12 = (short)-26507;
unsigned int var_13 = 3330213867U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)0;
    value_mismatch |= var_13 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_7, var_8, var_9, var_11, zero, &var_12, &var_13);
  checksum();
}
