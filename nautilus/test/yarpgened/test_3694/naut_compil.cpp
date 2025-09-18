/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3694
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3694
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
void test(val<unsigned short> var_1, val<unsigned short> var_2, val<unsigned int> var_3, val<long long int> var_4, val<unsigned int> var_6, val<unsigned char> var_10, val<unsigned int> var_11, val<long long int> var_14, val<int> zero, val<short*> var_15, val<int*> var_16, val<unsigned short*> var_17, val<long long int*> var_18) {
    *var_15 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) min(((~(var_4))), (((/* implicit */val<long long int>) (val<short>)-1))))) || ((!(((/* implicit */val<bool>) min((((/* implicit */val<signed char>) (val<bool>)1)), ((val<signed char>)-124))))))));
    *var_16 -= ((/* implicit */val<int>) max((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) max((var_10), (((/* implicit */val<unsigned char>) (val<bool>)1))))) << (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_11)))))))), (max((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) (val<short>)-28119)) : (((/* implicit */val<int>) (val<signed char>)-124))))), (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))) & (var_3)))))));
    *var_17 = ((/* implicit */val<unsigned short>) ((((((/* implicit */val<long long int>) 744101222)) + (((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<long long int>) var_6)) : (var_14))))) & (((/* implicit */val<long long int>) max((((/* implicit */val<int>) var_1)), ((~(((/* implicit */val<int>) (val<short>)18662)))))))));
    *var_18 = ((/* implicit */val<long long int>) max((((/* implicit */val<unsigned int>) ((val<int>) var_3))), (((((/* implicit */val<bool>) (val<signed char>)-102)) ? (1326978730U) : (717840890U)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5488;
unsigned short var_2 = (unsigned short)22227;
unsigned int var_3 = 3278433784U;
long long int var_4 = 6186199348749295527LL;
unsigned int var_6 = 2471679069U;
unsigned char var_10 = (unsigned char)228;
unsigned int var_11 = 969618534U;
long long int var_14 = -2069793306274389144LL;
int zero = 0;
short var_15 = (short)-17359;
int var_16 = 1308651975;
unsigned short var_17 = (unsigned short)20510;
long long int var_18 = -6009098620939772468LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)1;
    value_mismatch |= var_16 != 1308680094;
    value_mismatch |= var_17 != (unsigned short)320;
    value_mismatch |= var_18 != 3278433784LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_6, var_10, var_11, var_14, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
