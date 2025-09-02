/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3171
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3171
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
void test(val<unsigned long long int> var_0, val<unsigned char> var_2, val<unsigned int> var_5, val<unsigned long long int> var_6, val<long long int> var_7, val<unsigned int> var_8, val<unsigned int> var_9, val<int> var_11, val<unsigned int> var_12, val<signed char> var_13, val<unsigned int> var_14, val<unsigned long long int> var_15, val<long long int> var_16, val<long long int> var_17, val<int> zero, val<unsigned long long int*> var_18, val<short*> var_19, val<unsigned short*> var_20, val<unsigned int*> var_21) {
    *var_18 = ((/* implicit */val<unsigned long long int>) ((val<long long int>) min((var_5), (var_12))));
    *var_19 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_5)))))) : (((((/* implicit */val<bool>) var_7)) ? (var_17) : (var_16)))))) ? ((((!(((/* implicit */val<bool>) var_9)))) ? (((((/* implicit */val<bool>) var_6)) ? (var_17) : (((/* implicit */val<long long int>) var_11)))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) max((((/* implicit */val<short>) (val<signed char>)70)), ((val<short>)-19853))))))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) max(((val<signed char>)44), ((val<signed char>)70)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<short>) var_13)))) : (((((/* implicit */val<bool>) var_7)) ? (var_8) : (var_12))))))));
    *var_20 = ((/* implicit */val<unsigned short>) var_9);
    *var_21 += ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) min((var_14), (((/* implicit */val<unsigned int>) var_2))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (var_0) : (var_6)))) ? (((((/* implicit */val<bool>) var_13)) ? (var_0) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))))) : (var_15))) : (((/* implicit */val<unsigned long long int>) var_16))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6490005110958105572ULL;
unsigned char var_2 = (unsigned char)58;
unsigned int var_5 = 28945482U;
unsigned long long int var_6 = 4120905373413440908ULL;
long long int var_7 = 5817643724962687786LL;
unsigned int var_8 = 1787489405U;
unsigned int var_9 = 467559553U;
int var_11 = -1978119738;
unsigned int var_12 = 1351434065U;
signed char var_13 = (signed char)-80;
unsigned int var_14 = 930139793U;
unsigned long long int var_15 = 11201018620258074282ULL;
long long int var_16 = 8048579574166964550LL;
long long int var_17 = 1891284523569670766LL;
int zero = 0;
unsigned long long int var_18 = 14267443816150462175ULL;
short var_19 = (short)8255;
unsigned short var_20 = (unsigned short)1018;
unsigned int var_21 = 4237198302U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 28945482ULL;
    value_mismatch |= var_19 != (short)-80;
    value_mismatch |= var_20 != (unsigned short)25729;
    value_mismatch |= var_21 != 1236215746U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_6, var_7, var_8, var_9, var_11, var_12, var_13, var_14, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
