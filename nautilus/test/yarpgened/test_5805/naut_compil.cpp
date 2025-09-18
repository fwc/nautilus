/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5805
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5805
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
void test(val<long long int> var_0, val<unsigned int> var_1, val<unsigned long long int> var_2, val<unsigned char> var_4, val<unsigned char> var_5, val<unsigned short> var_7, val<unsigned int> var_8, val<unsigned int> var_10, val<unsigned short> var_11, val<unsigned short> var_12, val<int> var_13, val<unsigned long long int> var_15, val<unsigned int> var_16, val<bool> var_17, val<int> zero, val<short*> var_18, val<unsigned int*> var_19, val<signed char*> var_20, val<short*> var_21, val<short*> var_22) {
    *var_18 += ((/* implicit */val<short>) (+(var_15)));
    *var_19 = ((/* implicit */val<unsigned int>) ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_16)) ? (var_13) : (((/* implicit */val<int>) var_11))))) ? (((((/* implicit */val<bool>) 0U)) ? (4294967289U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)0))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) var_12)) != (((/* implicit */val<int>) var_17)))))))) > (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))) == (var_15)))))));
    *var_20 &= ((/* implicit */val<signed char>) (val<bool>)1);
    *var_21 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((var_10) - (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)49)))))) + (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<long long int>) 1242821093U)) : (var_0)))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned short>) var_5)), ((val<unsigned short>)43365)))) ? (((((/* implicit */val<bool>) var_1)) ? (var_8) : (var_1))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min((var_7), (((/* implicit */val<unsigned short>) (val<bool>)1))))))))) : (((((/* implicit */val<bool>) var_5)) ? ((+(var_15))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) (val<signed char>)43)))))))));
    *var_22 = ((/* implicit */val<short>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8083952474330765612LL;
unsigned int var_1 = 2379188057U;
unsigned long long int var_2 = 1463412882522037447ULL;
unsigned char var_4 = (unsigned char)203;
unsigned char var_5 = (unsigned char)75;
unsigned short var_7 = (unsigned short)41729;
unsigned int var_8 = 3501897217U;
unsigned int var_10 = 3995230060U;
unsigned short var_11 = (unsigned short)13543;
unsigned short var_12 = (unsigned short)10466;
int var_13 = -997154726;
unsigned long long int var_15 = 13756573400081037917ULL;
unsigned int var_16 = 3775703071U;
bool var_17 = (bool)0;
int zero = 0;
short var_18 = (short)-21762;
unsigned int var_19 = 2330332739U;
signed char var_20 = (signed char)19;
short var_21 = (short)31752;
short var_22 = (short)22616;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)-23205;
    value_mismatch |= var_19 != 0U;
    value_mismatch |= var_20 != (signed char)1;
    value_mismatch |= var_21 != (short)-18943;
    value_mismatch |= var_22 != (short)75;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_7, var_8, var_10, var_11, var_12, var_13, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
