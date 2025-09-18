/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3092
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3092
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
void test(val<int> var_1, val<int> var_2, val<long long int> var_6, val<unsigned long long int> var_7, val<unsigned long long int> var_8, val<unsigned short> var_10, val<int> zero, val<short*> var_17, val<unsigned short*> var_18) {
    *var_17 -= ((/* implicit */val<short>) ((var_2) > (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<long long int>) 1468286641U)) : (var_6)))) ? (var_2) : (min((((/* implicit */val<int>) (val<signed char>)-55)), (var_1)))))));
    *var_18 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) (val<unsigned short>)11325))))) >= (((((/* implicit */val<bool>) (val<unsigned char>)250)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-95))) : (var_8))))))) >= (var_7)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1834254091;
int var_2 = -1881334007;
long long int var_6 = 8724276127371928597LL;
unsigned long long int var_7 = 10430521198977110598ULL;
unsigned long long int var_8 = 8668972867430599257ULL;
unsigned short var_10 = (unsigned short)17307;
int zero = 0;
short var_17 = (short)1380;
unsigned short var_18 = (unsigned short)19684;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)1380;
    value_mismatch |= var_18 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_6, var_7, var_8, var_10, zero, &var_17, &var_18);
  checksum();
}
