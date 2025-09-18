/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8136
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8136
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
void test(val<int> var_2, val<short> var_5, val<unsigned char> var_6, val<unsigned long long int> var_7, val<long long int> var_8, val<unsigned long long int> var_11, val<unsigned short> var_12, val<int> zero, val<short*> var_16, val<int*> var_17, val<long long int*> var_18) {
    *var_16 = var_5;
    *var_17 = ((/* implicit */val<int>) max((*var_17), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_12))))), (((((/* implicit */val<bool>) var_2)) ? (var_7) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)49955)))))))))))));
    *var_18 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned char>)255)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6))) : (max((var_8), (((/* implicit */val<long long int>) (val<unsigned short>)28672))))))) : (((((/* implicit */val<bool>) -2391072852226779316LL)) ? (((/* implicit */val<unsigned long long int>) -3873139657766397079LL)) : (var_11)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -771532301;
short var_5 = (short)984;
unsigned char var_6 = (unsigned char)115;
unsigned long long int var_7 = 7965648850153942069ULL;
long long int var_8 = -679627106595082783LL;
unsigned long long int var_11 = 17843629932162168165ULL;
unsigned short var_12 = (unsigned short)33269;
int zero = 0;
short var_16 = (short)-31321;
int var_17 = -999464471;
long long int var_18 = 925911034600336223LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)984;
    value_mismatch |= var_17 != 0;
    value_mismatch |= var_18 != 115LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_6, var_7, var_8, var_11, var_12, zero, &var_16, &var_17, &var_18);
  checksum();
}
