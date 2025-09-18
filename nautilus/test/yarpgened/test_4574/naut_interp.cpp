/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4574
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4574
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
void test(val<unsigned char> var_1, val<short> var_2, val<short> var_4, val<int> var_5, val<short> var_8, val<long long int> var_9, val<bool> var_10, val<unsigned char> var_11, val<int> zero, val<unsigned char*> var_14, val<long long int*> var_15, val<unsigned short*> var_16, val<short*> var_17) {
    *var_14 *= ((/* implicit */val<unsigned char>) max((((((/* implicit */val<bool>) var_1)) ? (var_9) : (((/* implicit */val<long long int>) (-(934879299)))))), (var_9)));
    *var_15 = ((((/* implicit */val<bool>) (+((~(((/* implicit */val<int>) var_8))))))) ? (((/* implicit */val<long long int>) ((val<int>) ((((/* implicit */val<int>) (val<signed char>)36)) > (((/* implicit */val<int>) var_2)))))) : (min((((((/* implicit */val<bool>) var_4)) ? (var_9) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))))), (((/* implicit */val<long long int>) -754373083)))));
    *var_16 = ((/* implicit */val<unsigned short>) max((*var_16), (((/* implicit */val<unsigned short>) min((((((/* implicit */val<int>) var_10)) >> (((((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) (val<unsigned short>)32100)) : (var_5))) - (32090))))), (((/* implicit */val<int>) var_8)))))));
    *var_17 = ((/* implicit */val<short>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)190;
short var_2 = (short)-16633;
short var_4 = (short)29807;
int var_5 = 630085764;
short var_8 = (short)-5132;
long long int var_9 = -3530511584037940518LL;
bool var_10 = (bool)1;
unsigned char var_11 = (unsigned char)93;
int zero = 0;
unsigned char var_14 = (unsigned char)167;
long long int var_15 = -8377062095621434639LL;
unsigned short var_16 = (unsigned short)8077;
short var_17 = (short)-5567;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)54;
    value_mismatch |= var_15 != 1LL;
    value_mismatch |= var_16 != (unsigned short)60404;
    value_mismatch |= var_17 != (short)93;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_5, var_8, var_9, var_10, var_11, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
